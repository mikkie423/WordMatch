#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{



//    secWin = new SecondWindow(this);
//    secWin->show();
qDebug()<<"Button was clicked!";


}


void MainWindow::on_adminDashboardPushButton_clicked()
{
    adminDialog = new AdminDialog(this);
    adminDialog->show();
    adminDialog->setWindowState(Qt::WindowFullScreen );
}

