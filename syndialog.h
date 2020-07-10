#ifndef SYNDIALOG_H
#define SYNDIALOG_H

#include <QDialog>

namespace Ui {
class SynDialog;
}

class SynDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SynDialog(QWidget *parent = nullptr);
    SynDialog(QWidget *parent, QString qs);
    ~SynDialog();
    QString s;


private slots:
    void on_pushButton_clicked();

private:
    Ui::SynDialog *ui;
};

#endif // SYNDIALOG_H
