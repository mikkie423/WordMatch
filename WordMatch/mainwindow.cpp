#include "mainwindow.h"
#include "./ui_mainwindow.h"
//#include "secondform.h" // needed for second form  modal

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
//  Modal (Pop up window that makes the other window inaccessable)
//     SecondForm secForm;
//     secForm.setModal(true);
//     secForm.exec();

   //hide(); // hides the first window
// Stored on the Heap (Pop up window with both windows maneuverable)
   // secForm = new SecondForm(this);
   // secForm->show();

    secWin = new SecondWindow(this);
    secWin->show();

}


void MainWindow::on_adminDashboardPushButton_clicked()
{
    adminDialog = new AdminDialog(this);
    adminDialog->show();
    adminDialog->setWindowState(Qt::WindowFullScreen );
    //adminDialog->showMaximized();
}

