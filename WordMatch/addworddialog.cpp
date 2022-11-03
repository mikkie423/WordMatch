#include "addworddialog.h"
#include "ui_addworddialog.h"

// SQL includes required
#include <QSqlError>
#include <QSqlQuery>

AddWordDialog::AddWordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddWordDialog)
{
    ui->setupUi(this);
}

AddWordDialog::~AddWordDialog()
{
    delete ui;
}

void AddWordDialog::on_cancelWordPushButton_clicked()
{
    close();
}


void AddWordDialog::on_addWordPushButton_clicked()
{
 int levelID = 0;

    QSqlQuery query;
        query.prepare("INSERT INTO word ( name, spelling_list, image_id, audio_id) VALUES (:name, :spelling_list, :image_id, :audio_id)");
        //query.bindValue(":id", idCount);
        query.bindValue(":name", ui->wordNameLineEdit->text());
        query.bindValue(":city", ui->spellingListComboBox->currentData());
       // query.bindValue(":level_id", levelID);
        query.bindValue(":image_id", 0);
        query.bindValue(":audio_id", 0);


        if(!query.exec())
        {
            qWarning() << "MainWindow::DatabaseConnect - ERROR: " << query.lastError().text();
            reject();
        }
        else{
            accept();
        }
}

