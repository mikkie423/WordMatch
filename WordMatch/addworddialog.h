#ifndef ADDWORDDIALOG_H
#define ADDWORDDIALOG_H

#include <QDialog>
namespace Ui {
class AddWordDialog;
}

class AddWordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddWordDialog(QWidget *parent = nullptr);
    ~AddWordDialog();

private slots:
    void on_cancelWordPushButton_clicked();

    void on_addWordPushButton_clicked();

private:
    Ui::AddWordDialog *ui;
};

#endif // ADDWORDDIALOG_H
