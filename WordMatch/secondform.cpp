#include "secondform.h"
#include "ui_secondform.h"

SecondForm::SecondForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondForm)
{
    ui->setupUi(this);
}

SecondForm::~SecondForm()
{
    delete ui;
}
