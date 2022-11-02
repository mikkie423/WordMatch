#include "admindialog.h"
#include "ui_admindialog.h"
#include <QComboBox>
#include <QDebug>

AdminDialog::AdminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDialog)
{
    ui->setupUi(this);
    QString username = "FnameLname";

    ui->userMenuComboBox->setCurrentIndex(-1);
    ui->userMenuComboBox->setPlaceholderText(username);
    ui->userMenuComboBox->addItem("User Settings");
    ui->userMenuComboBox->insertSeparator(1);
    ui->userMenuComboBox->addItem("LOGOUT");

}

AdminDialog::~AdminDialog()
{
    delete ui;
}


void AdminDialog::on_userMenuComboBox_activated(int index)
{
    if(index == 2)
    {
        this->close();
        qDebug() << "LOGOUT!!!";
        ui->userMenuComboBox->setCurrentIndex(-1);

    }
    else if (index == 0)
    {
        qDebug() << "User Settings";
        ui->userMenuComboBox->setCurrentIndex(-1);

    }
    else
    {
        qDebug() << "What was clicked?";
        ui->userMenuComboBox->setCurrentIndex(-1);
    }
}

