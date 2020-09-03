#include "dialog.h"
#include "ui_dialog.h"
#include <stdio.h>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QDir>
#include <sstream>
#include <fstream>
#include <string>

extern "C" {
    #include "tm.h"
    int run();
}

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::Dialog(QWidget* p, QString qs):
    QDialog(p),
    s(qs),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->textBrowser->setText(qs);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString s = ui->textBrowser->toPlainText();
    QString fileName;
    fileName = QFileDialog::getSaveFileName(this,
        tr("Path"), "", tr("TM(*.tm)"));

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

void Dialog::on_pushButton_2_clicked()
{
}
