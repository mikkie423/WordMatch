/********************************************************************************
** Form generated from reading UI file 'addworddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWORDDIALOG_H
#define UI_ADDWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddWordDialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *cancelWordPushButton;
    QPushButton *addWordPushButton;
    QWidget *widget2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *wordNameLineEdit;
    QLabel *label_3;
    QComboBox *spellingListComboBox;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *imageUploadLineEdit;
    QPushButton *imageUploadPushButton;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *audioUploadLineEdit;
    QPushButton *audioUploadPushButton;

    void setupUi(QDialog *AddWordDialog)
    {
        if (AddWordDialog->objectName().isEmpty())
            AddWordDialog->setObjectName("AddWordDialog");
        AddWordDialog->resize(400, 300);
        AddWordDialog->setStyleSheet(QString::fromUtf8("background-color: #2967D8;\n"
"border-radius:15px;\n"
""));
        widget = new QWidget(AddWordDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 9, 401, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: #2967D8;\n"
""));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        widget1 = new QWidget(AddWordDialog);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(90, 260, 212, 30));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setSpacing(50);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        cancelWordPushButton = new QPushButton(widget1);
        cancelWordPushButton->setObjectName("cancelWordPushButton");
        QFont font1;
        font1.setBold(true);
        cancelWordPushButton->setFont(font1);
        cancelWordPushButton->setStyleSheet(QString::fromUtf8("background-color: #ED145B;\n"
"color: #FAD61E;\n"
"border: 1px solid rgb(135, 12, 53);\n"
"padding: 5px 10px;\n"
"border-radius: 5px;\n"
"font-weight: bold;"));

        horizontalLayout_4->addWidget(cancelWordPushButton);

        addWordPushButton = new QPushButton(widget1);
        addWordPushButton->setObjectName("addWordPushButton");
        addWordPushButton->setStyleSheet(QString::fromUtf8("background-color: #71BF45;\n"
"color: #FAD61E;\n"
"border: 1px solid rgb(48, 81, 29);\n"
"padding: 5px 10px;\n"
"border-radius: 5px;\n"
"font-weight: bold;"));

        horizontalLayout_4->addWidget(addWordPushButton);

        widget2 = new QWidget(AddWordDialog);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(60, 90, 272, 142));
        formLayout = new QFormLayout(widget2);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setPointSize(12);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("background-color: #2967D8;\n"
""));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        wordNameLineEdit = new QLineEdit(widget2);
        wordNameLineEdit->setObjectName("wordNameLineEdit");
        wordNameLineEdit->setStyleSheet(QString::fromUtf8("padding: 5px 10px;\n"
"border-radius: 5px;\n"
"background-color: white;\n"
""));

        formLayout->setWidget(0, QFormLayout::FieldRole, wordNameLineEdit);

        label_3 = new QLabel(widget2);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("background-color: #2967D8;\n"
""));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        spellingListComboBox = new QComboBox(widget2);
        spellingListComboBox->addItem(QString());
        spellingListComboBox->addItem(QString());
        spellingListComboBox->addItem(QString());
        spellingListComboBox->addItem(QString());
        spellingListComboBox->addItem(QString());
        spellingListComboBox->addItem(QString());
        spellingListComboBox->addItem(QString());
        spellingListComboBox->setObjectName("spellingListComboBox");
        spellingListComboBox->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius: 5px;\n"
"padding: 5px 10px;"));

        formLayout->setWidget(1, QFormLayout::FieldRole, spellingListComboBox);

        label_4 = new QLabel(widget2);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("background-color: #2967D8;\n"
""));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        imageUploadLineEdit = new QLineEdit(widget2);
        imageUploadLineEdit->setObjectName("imageUploadLineEdit");
        imageUploadLineEdit->setStyleSheet(QString::fromUtf8("padding: 5px 10px;\n"
"border-top-left-radius: 5px;\n"
"border-bottom-left-radius: 5px;\n"
"background-color: white;\n"
""));

        horizontalLayout_2->addWidget(imageUploadLineEdit);

        imageUploadPushButton = new QPushButton(widget2);
        imageUploadPushButton->setObjectName("imageUploadPushButton");
        imageUploadPushButton->setStyleSheet(QString::fromUtf8("background-color: #FF6100;\n"
"color: #FAD61E;\n"
"border: 1px solid rgb(115, 42, 0);\n"
"padding: 5px 10px;\n"
"border-top-right-radius: 5px;\n"
"border-bottom-right-radius: 5px;\n"
"font-weight: bold;"));

        horizontalLayout_2->addWidget(imageUploadPushButton);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_2);

        label_5 = new QLabel(widget2);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("background-color: #2967D8;\n"
""));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        audioUploadLineEdit = new QLineEdit(widget2);
        audioUploadLineEdit->setObjectName("audioUploadLineEdit");
        audioUploadLineEdit->setStyleSheet(QString::fromUtf8("padding: 5px 10px;\n"
"border-top-left-radius: 5px;\n"
"border-bottom-left-radius: 5px;\n"
"background-color:white;\n"
""));

        horizontalLayout_3->addWidget(audioUploadLineEdit);

        audioUploadPushButton = new QPushButton(widget2);
        audioUploadPushButton->setObjectName("audioUploadPushButton");
        audioUploadPushButton->setStyleSheet(QString::fromUtf8("background-color: #FF6100;\n"
"color: #FAD61E;\n"
"border: 1px solid rgb(115, 42, 0);\n"
"padding: 5px 10px;\n"
"border-top-right-radius: 5px;\n"
"border-bottom-right-radius: 5px;\n"
"font-weight: bold;"));

        horizontalLayout_3->addWidget(audioUploadPushButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);


        retranslateUi(AddWordDialog);

        QMetaObject::connectSlotsByName(AddWordDialog);
    } // setupUi

    void retranslateUi(QDialog *AddWordDialog)
    {
        AddWordDialog->setWindowTitle(QCoreApplication::translate("AddWordDialog", "Word Match || Add New Word", nullptr));
        label->setText(QCoreApplication::translate("AddWordDialog", "Add New Word", nullptr));
        cancelWordPushButton->setText(QCoreApplication::translate("AddWordDialog", "CANCEL", nullptr));
        addWordPushButton->setText(QCoreApplication::translate("AddWordDialog", "ADD", nullptr));
        label_2->setText(QCoreApplication::translate("AddWordDialog", "Word", nullptr));
        label_3->setText(QCoreApplication::translate("AddWordDialog", "Spelling List", nullptr));
        spellingListComboBox->setItemText(0, QCoreApplication::translate("AddWordDialog", "Spelling List 1", nullptr));
        spellingListComboBox->setItemText(1, QCoreApplication::translate("AddWordDialog", "Spelling List 2", nullptr));
        spellingListComboBox->setItemText(2, QCoreApplication::translate("AddWordDialog", "Spelling List 3", nullptr));
        spellingListComboBox->setItemText(3, QCoreApplication::translate("AddWordDialog", "Spelling List 4", nullptr));
        spellingListComboBox->setItemText(4, QCoreApplication::translate("AddWordDialog", "Spelling List 5", nullptr));
        spellingListComboBox->setItemText(5, QCoreApplication::translate("AddWordDialog", "Spelling List 6", nullptr));
        spellingListComboBox->setItemText(6, QCoreApplication::translate("AddWordDialog", "Spelling List 7", nullptr));

        label_4->setText(QCoreApplication::translate("AddWordDialog", "Image Upload", nullptr));
        imageUploadPushButton->setText(QCoreApplication::translate("AddWordDialog", "BROWSE", nullptr));
        label_5->setText(QCoreApplication::translate("AddWordDialog", "Audio Upload", nullptr));
        audioUploadPushButton->setText(QCoreApplication::translate("AddWordDialog", "BROWSE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWordDialog: public Ui_AddWordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORDDIALOG_H
