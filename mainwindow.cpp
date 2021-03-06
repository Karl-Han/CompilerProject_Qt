/* 
 * MIT License
 * 
 * Copyright (c) 2020 Karl Han
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/* 
 * Author: Karl Han
 * Version: 0.0.1
 * Modified date: 2020-07-10
 */

/* 
 * File name: mainwindow.cpp
 * Main usage: Define the functions declared in mainwindow.h, and combine parser to 
 *              generate output
 * 
 */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "CompilerProject/analyze.h"
#include "CompilerProject/cgen.h"

#include <QMessageBox>
#include <QString>
#include <QDir>
#include <QFileDialog>
#include <QTextStream>
#include <QStandardItemModel>
#include <string>

extern "C"
{
#include "CompilerProject/y.tab.h"
#include "CompilerProject/token.h"
#include "CompilerProject/gen_dot.h"
#include "CompilerProject/lexee.h"
#include "CompilerProject/code.h"
    int yyparse();
    extern void yyrestart(FILE*);
    // extern void reset_lex();
    char *gen_dot_str(TreeNode *);
    extern FILE *yyin;
    extern FILE *stderr;
    extern TreeNode *root;
    extern int emitLoc;
    extern int highEmitLoc;
    extern int yylex_destroy();
    extern int yywrap();
}

std::string ios_str = "int input(void){ int x; read x; return x; }  void output(int x){ write x; return; }";

FILE* code;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->lexical_model = new QStandardItemModel();
    ui->tableView_lexical->setModel(this->lexical_model);
    this->lexical_model->setColumnCount(4);
    this->lexical_model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("matched pattern"));
    this->lexical_model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("Token"));
    this->lexical_model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("line No."));
    this->lexical_model->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("column No."));
    ui->tableView_lexical->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);

    ui->textBrowser_syntax->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

std::string file2string(FILE *f)
{
    char buf[1024];
    char *p = nullptr;
    std::string s;
    while (p = fgets(buf, 1024, f))
    {
        s += p;
    }

    return s;
}

void set_lexical_tableView(QStandardItemModel *model, LexeeLinkedlist *lexee);

QString process_cgen(TreeNode* t){
        // code generation
        code = fopen("temp.tm", "w+");
        build_symtabs(t);
        type_check(t);
        tag_kind(t);
        code_generate(t);
        // convert code to QString
        rewind(code);
        char buf[128];
        QString s;
        while(fgets(buf, sizeof(buf), code)){
            // get line to buf then next line
            QString temp_str = QString::fromLocal8Bit(buf);
            s = s + temp_str;
            memset(buf, 0, sizeof buf);
        }
        fclose(code);
        return s;
}

// Main process function
void MainWindow::process(std::string s)
{
    // get the source code to fp
    FILE *fp = tmpfile();
    fprintf(fp, "%s\n", ios_str.c_str());
    fprintf(fp, "%s", s.c_str());
    std::rewind(fp);
    yyin = fp;

    // redirect stderr to capture
    std::string str;
    char buf[128];
    memset(buf, 0, sizeof(buf));
    char *filename = "tmp";
    FILE *capture = freopen(filename, "w", stderr);

    // lex and parse
    int ret = yyparse();
    fclose(fp);
    fclose(capture);

    // destroy lex
    yywrap();
    yylex_destroy();

    // print the error
    capture = fopen(filename, "r");
    while (fgets(buf, sizeof(buf), capture) != NULL)
    {
        str += std::string(buf) + std::string("\n");
    }
    fclose(capture);
    remove(filename);
    ui->textBrowser_error->setText(QString::fromStdString(str));

    if (ret == 1)
    {
        // error occur during parsing
        this->syntax_str = QString::fromLocal8Bit("FATAL ERROR, unable to skip errors.");
        ui->textBrowser_syntax->setText(this->syntax_str);
        this->lexical_model->removeRows(0, this->lexical_model->rowCount());
    }
    else
    {
        // everything works fine
        TreeNode *syntax_tree = root;
        char *ch = gen_dot_str(syntax_tree);
        this->syntax_str = QString::fromLocal8Bit(ch);
        ui->textBrowser_syntax->setText(this->syntax_str);
        set_lexical_tableView(this->lexical_model, lexee);
        tm_str = process_cgen(root);
        free(root);
    }

    // clean up
    emitLoc = 0;
    highEmitLoc = 0;
}

void set_lexical_tableView(QStandardItemModel *model, LexeeLinkedlist *lexee)
{
    Lexee *h = lexee->head->next;
    int counter = 0;
    while (h != NULL)
    {
        model->setItem(counter, 0, new QStandardItem(h->str));
        model->setItem(counter, 1, new QStandardItem(h->token));
        model->setItem(counter, 2, new QStandardItem(QString::number(h->lineno)));
        model->setItem(counter, 3, new QStandardItem(QString::number(h->colno)));
        h = h->next;
        counter++;
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString s = ui->textBrowser_syntax->toPlainText();
    QString fileName;
    fileName = QFileDialog::getSaveFileName(this,
                                            tr("Path"), "", tr("DOT(*.dot)"));

    if (!fileName.isNull())
    {
        // if it has a name
        QFile output(fileName);
        if (!output.open(QIODevice::WriteOnly | QIODevice::Text))
            return;
        QTextStream output_stream(&output);
        output_stream << s;
    }
    else
    {
        QMessageBox::information(
            this,
            tr("ERROR"),
            tr("Invalid filename, Please save it again."));
    }
}

// Process button
void MainWindow::on_pushButton_2_clicked()
{
    QString s = ui->textEdit->toPlainText();
    // process() is to call the analysis process
    process(s.toStdString());
}

// Open file button
void MainWindow::on_pushButton_3_clicked()
{
    // open file with suffix .c
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this,
                                            tr("Path"), "", tr("C(*.c)"));

    if (!fileName.isNull())
    {
        // if it has a name
        QString s;
        QFile input(fileName);
        if (!input.open(QIODevice::ReadOnly | QIODevice::Text))
            return;
        QTextStream input_stream(&input);
        s = input_stream.readAll();
        ui->textEdit->setText(s);
    }
    else
    {
        QMessageBox::information(
            this,
            tr("ERROR"),
            tr("Invalid filename, Please load it again."));
    }
}

void MainWindow::on_radioButton_toggled(bool checked)
{
    if (checked)
    {
        ui->tableView_lexical->setVisible(true);
        ui->textBrowser_syntax->setVisible(false);
    }
    else
    {
        ui->tableView_lexical->setVisible(false);
        ui->textBrowser_syntax->setVisible(true);
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    d = new Dialog(this, tm_str);
    d->show();
}
