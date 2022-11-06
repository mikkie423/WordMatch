#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secondwindow.h"
#include "admindialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_adminDashboardPushButton_clicked();

private:
    Ui::MainWindow *ui;
    SecondWindow *secWin;
    AdminDialog *adminDialog;
};
#endif // MAINWINDOW_H
