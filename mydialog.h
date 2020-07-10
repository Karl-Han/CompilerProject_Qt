#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    Dialog(QWidget *parent, QString qs);
    ~Dialog();
    QString s;



private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
};

#endif // MYDIALOG_H
