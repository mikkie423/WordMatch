#include "admindialog.h"
#include "ui_admindialog.h"
#include <QComboBox>
#include <QDebug>

#include <QSqlTableModel>
// SQL includes required
#include <QSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>

AdminDialog::AdminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDialog)
{
    ui->setupUi(this);

    setWindowTitle("Word Match || Admin Dashboard");


    // User Variables
    QString username = "FnameLname";

    //User Menu
    ui->userMenuComboBox->setCurrentIndex(-1);
    ui->userMenuComboBox->setPlaceholderText(username);
    ui->userMenuComboBox->addItem("User Settings");
    ui->userMenuComboBox->insertSeparator(1);
    ui->userMenuComboBox->addItem("LOGOUT");

    //Database
    DatabaseConnect();
    DatabaseInit();
    //DatabasePopulate();
    DatabaseReload(word_db);

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


void AdminDialog::DatabaseConnect()
{
    const QString DRIVER("QSQLITE");
    if(QSqlDatabase::isDriverAvailable(DRIVER))
    {
        QSqlDatabase word_db = QSqlDatabase::addDatabase(DRIVER);

        //woords_db.setDatabaseName(":memory:");
        word_db.setDatabaseName("C:/Users/mikki/OneDrive - UP Education/Desktop/Assignments/CS106/Assignment 2 - Implementation/WordMatch/WordMatch/Resources/wordMatch.db"); // location of main.cpp in file explorer setup the name as "database.db"

        if(!word_db.open())
        {
            qWarning() << "MainWindow::DatabaseConnect - ERROR: " << word_db.lastError().text();
        }
        else
        {
            qDebug()<<"Database Open";
        }

       DatabaseReload(word_db);
    }
    else
    {
        qWarning() << "MainWindow::DatabaseConnect - ERROR: no driver " << DRIVER << " available";
    }
}

void AdminDialog::DatabaseInit()
{
    QSqlQuery userQuery("CREATE TABLE user (id INTEGER PRIMARY KEY, fname TEXT, lname TEXT, username TEXT, password TEXT, role INT, status TEXT)"); // create table

    if(!userQuery.isActive())
    {
        qWarning() << "MainWindow::DatabaseConnect - ERROR: " <<userQuery.lastError().text();
    }
    else
    {
        qDebug() << "Query Executed";
    }
    QSqlQuery wordQuery("CREATE TABLE word (id INTEGER PRIMARY KEY, name TEXT, spelling_list TEXT, level TEXT, image_id INT, audio_id INT)"); // create table

    if(!wordQuery.isActive())
    {
        qWarning() << "MainWindow::DatabaseConnect - ERROR: " <<wordQuery.lastError().text();
    }
    else
    {
        qDebug() << "Query Executed";
    }
}



void AdminDialog::on_addWordPushButton_clicked()
{
     addWordDialog = new AddWordDialog(this);
     addWordDialog->show();
     if(addWordDialog->result() == 0)
     {
         qDebug()<<"Result is "<<result()<<", therefore accepted, new record available, please reload.";
        // DatabaseReload(word_db); //TODO NOT WORKING!!! need to get it to reload the
     }
     else
     {
         qDebug()<<"Result is "<<result()<<", therefore NOT accepted, No new record available.";
     }
}

void AdminDialog::DatabaseReload( QSqlDatabase word_db)
{
    QSqlTableModel *model = new QSqlTableModel(this,word_db);
      model->setTable("word");
      model->setEditStrategy(QSqlTableModel::OnManualSubmit);
      model->select();
     // model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("Name"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Spelling List"));
//      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Level ID"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("Image ID"));
//      model->setHeaderData(5, Qt::Horizontal, QObject::tr("Audio ID"));
      ui->wordTableView->setModel(model);
      ui->wordTableView->verticalHeader()->hide();
      ui->wordTableView->setColumnHidden(0, true);
      ui->wordTableView->setColumnHidden(3, true);
      ui->wordTableView->setColumnHidden(5, true);
      ui->wordTableView->setColumnWidth(1,250);
      ui->wordTableView->setColumnWidth(1,300);
      ui->wordTableView->setColumnWidth(1,50);
      ui->wordTableView->show();
}

