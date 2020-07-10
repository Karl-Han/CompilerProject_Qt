#include "syndialog.h"
#include "ui_syndialog.h"
#include <stdio.h>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QDir>
#include <sstream>
#include <fstream>
#include <string>

SynDialog::SynDialog(QWidget* p):
    QDialog(p),
    ui(new Ui::SynDialog)
{
    ui->setupUi(this);
}


SynDialog::SynDialog(QWidget* p, QString qs):
    QDialog(p),
    s(qs),
    ui(new Ui::SynDialog)
{
    ui->setupUi(this);

    // std::fstream fs("./tree.syn", std::ios::in);
    // std::stringstream buffer;
    // buffer << fs.rdbuf();
    // std::string contents(buffer.str());
    // ui->textBrowser->setText(QString::fromStdString(contents));
    ui->textBrowser->setText(qs);

    // fs.close();
}

SynDialog::~SynDialog()
{
    delete ui;
}

void SynDialog::on_pushButton_clicked()
{
    QString s = ui->textBrowser->toPlainText();
    QString fileName;
    fileName = QFileDialog::getSaveFileName(this,
        tr("Path"), "", tr("SYNTAX(*.syn)"));

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
