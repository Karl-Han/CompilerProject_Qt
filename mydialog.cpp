#include "mydialog.h"
#include "ui_mydialog.h"
#include <stdio.h>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QDir>
#include <sstream>
#include <fstream>
#include <string>

Dialog::Dialog(QWidget* p):
    QDialog(p),
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

    // std::fstream fs("./dest.dot", std::ios::in);
    // std::stringstream buffer;
    // buffer << fs.rdbuf();
    // std::string contents(buffer.str());
    // ui->textBrowser->setText(QString::fromStdString(contents));
    // fs.close();
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
