#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include "secondform.h" // needed for second form stored on heap
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
   // SecondForm *secForm; // form stored on heap
    SecondWindow *secWin;
    AdminDialog *adminDialog;
};
#endif // MAINWINDOW_H
