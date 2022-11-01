/********************************************************************************
** Form generated from reading UI file 'secondform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDFORM_H
#define UI_SECONDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_SecondForm
{
public:

    void setupUi(QDialog *SecondForm)
    {
        if (SecondForm->objectName().isEmpty())
            SecondForm->setObjectName("SecondForm");
        SecondForm->resize(518, 390);

        retranslateUi(SecondForm);

        QMetaObject::connectSlotsByName(SecondForm);
    } // setupUi

    void retranslateUi(QDialog *SecondForm)
    {
        SecondForm->setWindowTitle(QCoreApplication::translate("SecondForm", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondForm: public Ui_SecondForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDFORM_H
