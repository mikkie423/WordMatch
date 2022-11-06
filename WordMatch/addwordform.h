#ifndef ADDWORDFORM_H
#define ADDWORDFORM_H

#include <QWidget>

namespace Ui {
class AddWordForm;
}

class AddWordForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddWordForm(QWidget *parent = nullptr);
    ~AddWordForm();

private:
    Ui::AddWordForm *ui;
};

#endif // ADDWORDFORM_H
