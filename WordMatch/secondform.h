#ifndef SECONDFORM_H
#define SECONDFORM_H

#include <QDialog>

namespace Ui {
class SecondForm;
}

class SecondForm : public QDialog
{
    Q_OBJECT

public:
    explicit SecondForm(QWidget *parent = nullptr);
    ~SecondForm();

private:
    Ui::SecondForm *ui;
};

#endif // SECONDFORM_H
