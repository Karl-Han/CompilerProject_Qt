#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItem>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    // QString lexical_str;
    QStandardItemModel *lexical_model;
    QString syntax_str;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_radioButton_toggled(bool checked);

    void on_radioButton_clicked();

private:
    Ui::MainWindow *ui;

    // customized section
    void process(std::string);
};
#endif // MAINWINDOW_H
