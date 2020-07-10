#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <sstream>

#include <QMessageBox>
#include <QString>
#include <QDir>
#include <QFileDialog>
#include <QTextStream>
#include <QStandardItemModel>

extern "C" {
    #include "stage1/y.tab.h"
    #include "stage1/token.h"
    int yyparse();
    extern FILE* yyin;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableView_lexical->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

std::string file2string(FILE* f){
    char buf[1024];
    char* p = nullptr;
    std::string s;
    while(p = fgets(buf, 1024, f)){
        s += p;
    }

    return s;
}

void print_node(TreeNode* tn){
    QString str;
    str += "Token:" + QString(tn->token);
    str += "\nnum:" + QString(tn->num);
    str += "\nstr:" + QString(tn->str);
    char buf[32];
    sprintf(buf, "%x", tn->sibling);
    str += "\nsibling:" + QString(buf);
}

// Main process function
void MainWindow::process(std::string s){
    // prepare for failure of parsing
    std::stringstream buffer;
    std::streambuf * old = std::cerr.rdbuf(buffer.rdbuf());

    // std::cerr << "This is error message."<<std::endl;

    FILE* fp = tmpfile();
    fprintf(fp, "%s", s.c_str());
    yyin = fp;

    int ret = yyparse();
    if(ret == 1){
        // error occur during parsing
        std::string text = buffer.str();
        QString str = QString::fromStdString(text);
        QMessageBox::information(NULL, "", str);
        ui->textBrowser_error->setText(str);
    }
    else {
        // everything works fine
        TreeNode* syntax_tree = (TreeNode*)yylval.tn;
        print_node(syntax_tree);
    }
}

void MainWindow::on_pushButton_clicked()
{
    QString s = ui->textEdit->toPlainText();
    process(s.toStdString());
    d = new Dialog(this, s_dot);
    d->show();
    ui->textEdit->setText(s);
}

// Process button
void MainWindow::on_pushButton_2_clicked()
{
    QString s = ui->textEdit->toPlainText();
    // process() is to call the analysis process
    process(s.toStdString());
    // sd = new SynDialog(this, s_syn);
    // sd->show();
    // ui->textEdit->setText(s);
}

// Open file button
void MainWindow::on_pushButton_3_clicked()
{
    // open file with suffix .c
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this,
        tr("Path"), "", tr("C(*.c)"));

    if(!fileName.isNull()){
        // if it has a name
        QString s;
        QFile input(fileName);
        if (!input.open(QIODevice::ReadOnly| QIODevice::Text))
            return;
        QTextStream input_stream(&input);
        s = input_stream.readAll();
        ui->textEdit->setText(s);
    }
    else{
     QMessageBox::information(
         this,
         tr("ERROR"),
         tr("Invalid filename, Please load it again."));
    }

}

void MainWindow::on_pushButton_4_clicked()
{
    QStandardItemModel *model = new QStandardItemModel();
    model->setColumnCount(2);
    model->setHeaderData(0,Qt::Horizontal,QString::fromLocal8Bit("卡号"));
    model->setHeaderData(1,Qt::Horizontal,QString::fromLocal8Bit("姓名"));

    ui->tableView_lexical->setModel(model);
    //表头信息显示居左
    ui->tableView_lexical->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    //设置列宽不可变
    // ui->tableView->horizontalHeader()->setResizeMode(0,QHeaderView::Fixed);
    // ui->tableView->horizontalHeader()->setResizeMode(1,QHeaderView::Fixed);
    // ui->tableView->setColumnWidth(0,101);
    // ui->tableView->setColumnWidth(1,102);


    for(int i = 0; i < 3; i++)
    {
        model->setItem(i,0,new QStandardItem("2009441676"));
           //设置字符颜色
        model->item(i,0)->setForeground(QBrush(QColor(255, 0, 0)));
           //设置字符位置
        model->item(i,0)->setTextAlignment(Qt::AlignCenter);
        model->setItem(i,1,new QStandardItem(QString::fromLocal8Bit("哈哈1233333333333333333333333")));
    }
}

void MainWindow::on_radioButton_toggled(bool checked)
{
    if(checked){
        ui->tableView_lexical->setVisible(false);
        ui->textBrowser_syntax->setVisible(true);
    }
    else{
        ui->tableView_lexical->setVisible(true);
        ui->textBrowser_syntax->setVisible(false);
    }
}
