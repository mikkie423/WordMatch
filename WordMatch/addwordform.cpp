#include "addwordform.h"
#include "ui_addwordform.h"

AddWordForm::AddWordForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddWordForm)
{
    ui->setupUi(this);
}

AddWordForm::~AddWordForm()
{
    delete ui;
}
