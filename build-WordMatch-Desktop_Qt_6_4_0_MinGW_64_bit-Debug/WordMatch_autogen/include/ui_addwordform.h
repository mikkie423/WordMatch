/********************************************************************************
** Form generated from reading UI file 'addwordform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWORDFORM_H
#define UI_ADDWORDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddWordForm
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *cancelWordPushButton;
    QPushButton *addWordPushButton;
    QWidget *layoutWidget_3;
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

    void setupUi(QWidget *AddWordForm)
    {
        if (AddWordForm->objectName().isEmpty())
            AddWordForm->setObjectName("AddWordForm");
        AddWordForm->resize(400, 300);
        layoutWidget = new QWidget(AddWordForm);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 401, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        layoutWidget_2 = new QWidget(AddWordForm);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(90, 251, 212, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setSpacing(50);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        cancelWordPushButton = new QPushButton(layoutWidget_2);
        cancelWordPushButton->setObjectName("cancelWordPushButton");

        horizontalLayout_4->addWidget(cancelWordPushButton);

        addWordPushButton = new QPushButton(layoutWidget_2);
        addWordPushButton->setObjectName("addWordPushButton");

        horizontalLayout_4->addWidget(addWordPushButton);

        layoutWidget_3 = new QWidget(AddWordForm);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(60, 81, 272, 120));
        formLayout = new QFormLayout(layoutWidget_3);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        wordNameLineEdit = new QLineEdit(layoutWidget_3);
        wordNameLineEdit->setObjectName("wordNameLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, wordNameLineEdit);

        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        spellingListComboBox = new QComboBox(layoutWidget_3);
        spellingListComboBox->setObjectName("spellingListComboBox");

        formLayout->setWidget(1, QFormLayout::FieldRole, spellingListComboBox);

        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        imageUploadLineEdit = new QLineEdit(layoutWidget_3);
        imageUploadLineEdit->setObjectName("imageUploadLineEdit");

        horizontalLayout_2->addWidget(imageUploadLineEdit);

        imageUploadPushButton = new QPushButton(layoutWidget_3);
        imageUploadPushButton->setObjectName("imageUploadPushButton");

        horizontalLayout_2->addWidget(imageUploadPushButton);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_2);

        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        audioUploadLineEdit = new QLineEdit(layoutWidget_3);
        audioUploadLineEdit->setObjectName("audioUploadLineEdit");

        horizontalLayout_3->addWidget(audioUploadLineEdit);

        audioUploadPushButton = new QPushButton(layoutWidget_3);
        audioUploadPushButton->setObjectName("audioUploadPushButton");

        horizontalLayout_3->addWidget(audioUploadPushButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);


        retranslateUi(AddWordForm);

        QMetaObject::connectSlotsByName(AddWordForm);
    } // setupUi

    void retranslateUi(QWidget *AddWordForm)
    {
        AddWordForm->setWindowTitle(QCoreApplication::translate("AddWordForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("AddWordForm", "Add New Word", nullptr));
        cancelWordPushButton->setText(QCoreApplication::translate("AddWordForm", "CANCEL", nullptr));
        addWordPushButton->setText(QCoreApplication::translate("AddWordForm", "ADD", nullptr));
        label_2->setText(QCoreApplication::translate("AddWordForm", "Word", nullptr));
        label_3->setText(QCoreApplication::translate("AddWordForm", "Spelling List", nullptr));
        label_4->setText(QCoreApplication::translate("AddWordForm", "Image Upload", nullptr));
        imageUploadPushButton->setText(QCoreApplication::translate("AddWordForm", "BROWSE", nullptr));
        label_5->setText(QCoreApplication::translate("AddWordForm", "Audio Upload", nullptr));
        audioUploadPushButton->setText(QCoreApplication::translate("AddWordForm", "BROWSE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWordForm: public Ui_AddWordForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORDFORM_H
