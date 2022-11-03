#ifndef ADMINDIALOG_H
#define ADMINDIALOG_H

#include <QDialog>
#include "addworddialog.h" // needed for second form stored on heap
#include <QSqlDatabase>


namespace Ui {
class AdminDialog;
}

class AdminDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminDialog(QWidget *parent = nullptr);
    ~AdminDialog();

private slots:

    void on_userMenuComboBox_activated(int index);

    void on_addWordPushButton_clicked();


private:
    Ui::AdminDialog *ui;

     AddWordDialog *addWordDialog; // form stored on heap


    //Database
    void DatabaseConnect();
    void DatabaseInit();
    //void DatabasePopulate();

public:
    void DatabaseReload( QSqlDatabase db);
    QSqlDatabase word_db;
};

#endif // ADMINDIALOG_H
