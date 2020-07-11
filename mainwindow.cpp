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
    #include "stage1/gen_dot.h"
    #include "stage1/lexee.h"
    int yyparse();
    char* gen_dot_str(TreeNode*);
    extern FILE* yyin;
    extern FILE* stderr;
    extern TreeNode* root;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
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
    // QString str;
    // str += "Token:" + QString(tn->token);
    // str += "\nnum:" + QString(tn->num);
    // str += "\nstr:" + QString(tn->str);
    // char buf[32];
    // sprintf(buf, "%x", tn->sibling);
    // str += "\nsibling:" + QString(buf);

    char buf[128];
    sprintf(buf, "Token:%d\nnum:%d\nstr:%s\nsibling:%x", tn->token, tn->num, tn->str, tn->sibling);
    QMessageBox::information(nullptr, "", QString(buf));
}

void set_lexical_tableView(QStandardItemModel* model, LexeeLinkedlist* lexee);

// Main process function
void MainWindow::process(std::string s){
    // prepare for failure of parsing
    std::stringstream buffer;
    // std::streambuf * old = std::cerr.rdbuf(buffer.rdbuf());
    std::streambuf * old = std::cerr.rdbuf(buffer.rdbuf());

    std::cerr << "This is error message."<<std::endl;
    std::cout<< s <<std::endl;

    FILE* fp = tmpfile();
    fprintf(fp, "%s", s.c_str());
    std::rewind(fp);
    yyin = stdin = fp;

    FILE* err = stderr;
    fprintf(err, "Hello World");
    // std::rewind(err);
    std::string str;
    char buf[128];
    // setbuf(stderr, buf);
    // str = std::string(buf);
    char* filename = "tmp";
    remove(filename);
    FILE* capture = freopen(filename, "w", stderr);
    int ret = yyparse();
    fclose(capture);

    capture = fopen(filename, "r");
    memset(buf, 0, sizeof(buf));
    while(fgets(buf, sizeof(buf), capture) != NULL){
        str += buf + '\n';
    }
    fclose(capture);
    // QMessageBox::information(nullptr, "err", QString::fromStdString(str));
    ui->textBrowser_error->setText(QString::fromStdString(str));

    // std::string text = buffer.str();
    // QMessageBox::information(nullptr, "err", QString::fromStdString(text));
    if(ret == 1){
        // error occur during parsing
        printf("FATAL ERROR, unable to skip errors.");
        this->syntax_str = QString();
        this->lexical_model->removeRows(0,this->lexical_model->rowCount());
    }
    else {
        // everything works fine
        TreeNode* syntax_tree = root;
        // print_node(syntax_tree);
        char* ch = gen_dot_str(syntax_tree);
        this->syntax_str = QString::fromLocal8Bit(ch);
        ui->textBrowser_syntax->setText(this->syntax_str);
        set_lexical_tableView(this->lexical_model, lexee);
    }
    fclose(fp);
}

void set_lexical_tableView(QStandardItemModel* model, LexeeLinkedlist* lexee){
    Lexee* h = lexee->head->next;
    int counter = 0;
    while(h != NULL){
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

    if(!fileName.isNull()){
        // if it has a name
        QFile output(fileName);
        if (!output.open(QIODevice::WriteOnly | QIODevice::Text))
            return;
        QTextStream output_stream(&output);
        output_stream << s;
    }
    else{
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
        ui->tableView_lexical->setVisible(true);
        ui->textBrowser_syntax->setVisible(false);
    }
    else{
        ui->tableView_lexical->setVisible(false);
        ui->textBrowser_syntax->setVisible(true);
    }
}

void MainWindow::on_radioButton_clicked()
{

}
