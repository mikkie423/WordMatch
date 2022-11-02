/********************************************************************************
** Form generated from reading UI file 'admindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDIALOG_H
#define UI_ADMINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminDialog
{
public:
    QTabWidget *adminTabWidget;
    QWidget *teacherManger;
    QFrame *frame_2;
    QLabel *label_2;
    QWidget *wordManager;
    QFrame *frame;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QFrame *userMenuFrame;
    QComboBox *userMenuComboBox;

    void setupUi(QDialog *AdminDialog)
    {
        if (AdminDialog->objectName().isEmpty())
            AdminDialog->setObjectName("AdminDialog");
        AdminDialog->resize(1921, 1089);
        AdminDialog->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(85, 184, 255, 255), stop:1 rgba(41, 103, 216, 255));"));
        adminTabWidget = new QTabWidget(AdminDialog);
        adminTabWidget->setObjectName("adminTabWidget");
        adminTabWidget->setEnabled(true);
        adminTabWidget->setGeometry(QRect(0, 0, 1931, 1091));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(adminTabWidget->sizePolicy().hasHeightForWidth());
        adminTabWidget->setSizePolicy(sizePolicy);
        QPalette palette;
        QLinearGradient gradient(1, 0, 1, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(85, 184, 255, 255));
        gradient.setColorAt(1, QColor(41, 103, 216, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QLinearGradient gradient1(1, 0, 1, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(85, 184, 255, 255));
        gradient1.setColorAt(1, QColor(41, 103, 216, 255));
        QBrush brush1(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QLinearGradient gradient2(1, 0, 1, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(85, 184, 255, 255));
        gradient2.setColorAt(1, QColor(41, 103, 216, 255));
        QBrush brush2(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QLinearGradient gradient3(1, 0, 1, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(85, 184, 255, 255));
        gradient3.setColorAt(1, QColor(41, 103, 216, 255));
        QBrush brush3(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        QLinearGradient gradient4(1, 0, 1, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(85, 184, 255, 255));
        gradient4.setColorAt(1, QColor(41, 103, 216, 255));
        QBrush brush4(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        QLinearGradient gradient5(1, 0, 1, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(85, 184, 255, 255));
        gradient5.setColorAt(1, QColor(41, 103, 216, 255));
        QBrush brush5(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        QLinearGradient gradient6(1, 0, 1, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(85, 184, 255, 255));
        gradient6.setColorAt(1, QColor(41, 103, 216, 255));
        QBrush brush6(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        QLinearGradient gradient7(1, 0, 1, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(85, 184, 255, 255));
        gradient7.setColorAt(1, QColor(41, 103, 216, 255));
        QBrush brush7(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        QLinearGradient gradient8(1, 0, 1, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(85, 184, 255, 255));
        gradient8.setColorAt(1, QColor(41, 103, 216, 255));
        QBrush brush8(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        adminTabWidget->setPalette(palette);
        adminTabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"padding: 20px;\n"
"width: 200px;\n"
"font: 16px;\n"
"color: white;\n"
"border: none;\n"
"background-color:#2967D8;\n"
"}\n"
"QTabBar::tab:selected {\n"
"color:#FAD61E;\n"
"font: bold 18px;\n"
" }\n"
"QTabWidget::pane { \n"
"   border: none;\n"
"}\n"
"\n"
""));
        adminTabWidget->setTabShape(QTabWidget::Rounded);
        adminTabWidget->setIconSize(QSize(24, 24));
        adminTabWidget->setElideMode(Qt::ElideLeft);
        adminTabWidget->setTabBarAutoHide(false);
        teacherManger = new QWidget();
        teacherManger->setObjectName("teacherManger");
        teacherManger->setStyleSheet(QString::fromUtf8(""));
        frame_2 = new QFrame(teacherManger);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(50, 40, 1831, 951));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #2967D8;\n"
"border-radius: 15px;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 40, 171, 31));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: white;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/userSettingsWHITE"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/icons/userSettingsYELLOW"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QString::fromUtf8(":/icons/userSettingsWHITE"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/icons/userSettingsWHITE"), QSize(), QIcon::Selected, QIcon::Off);
        adminTabWidget->addTab(teacherManger, icon, QString());
        wordManager = new QWidget();
        wordManager->setObjectName("wordManager");
        frame = new QFrame(wordManager);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 30, 1831, 951));
        frame->setStyleSheet(QString::fromUtf8("background-color: #2967D8;\n"
"\n"
"QFrame{\n"
"border-radius: 15px;\n"
"padding: 10px;\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(33, 30, 1771, 52));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: white;"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(1258, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #ED145B;\n"
"width: 48px;\n"
"height:48px;\n"
"color: #FAD61E;\n"
"border: 1px solid rgb(125, 11, 49);\n"
"border-radius: 15px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/plusYELLOW"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(pushButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        QPalette palette1;
        QBrush brush9(QColor(255, 255, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        lineEdit->setPalette(palette1);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background: white;\n"
"border-bottom-left-radius: 15px;\n"
"border-top-left-radius: 15px;\n"
"}"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"padding: 10px;\n"
"border-bottom-right-radius: 15px;\n"
"border-top-right-radius: 15px;\n"
"border-left:1px solid gray;\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/search"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(pushButton_2);

        horizontalLayout->setStretch(0, 5);

        horizontalLayout_2->addLayout(horizontalLayout);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/wordManagerWHITE"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/icons/wordManagerYELLOW"), QSize(), QIcon::Normal, QIcon::On);
        adminTabWidget->addTab(wordManager, icon3, QString());
        userMenuFrame = new QFrame(AdminDialog);
        userMenuFrame->setObjectName("userMenuFrame");
        userMenuFrame->setGeometry(QRect(480, 0, 1441, 64));
        QPalette palette2;
        QBrush brush10(QColor(41, 103, 216, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        userMenuFrame->setPalette(palette2);
        userMenuFrame->setAutoFillBackground(false);
        userMenuFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color: #2967D8;\n"
"border: none;\n"
"border-bottom-right-radius: 15px;\n"
"}"));
        userMenuFrame->setFrameShape(QFrame::StyledPanel);
        userMenuFrame->setFrameShadow(QFrame::Raised);
        userMenuComboBox = new QComboBox(userMenuFrame);
        userMenuComboBox->setObjectName("userMenuComboBox");
        userMenuComboBox->setGeometry(QRect(1170, 10, 241, 41));
        userMenuComboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	border: none;\n"
"	border-radius: 15px;\n"
"	background: #ED145B;\n"
"	padding: 10px;\n"
"	color: #FAD61E;\n"
"}\n"
"QComboBox::drop-down {\n"
"	color: white;\n"
"border: none;\n"
"	background: none;\n"
"border-radius: 10px;\n"
"}\n"
"QListView:item{\n"
"color: white;\n"
"background: #ED145B;\n"
"padding: 10px;\n"
"text-align:center;\n"
"}\n"
"QListView:item::hover{\n"
"color: #FAD61E;\n"
"background-color: #rgb(175, 15, 68);\n"
"font-style:bold;\n"
"}\n"
"QComboBox::down-arrow {\n"
"     image: url(:/icons/menu-90);\n"
"background-color: #FAD61E;\n"
"border-radius: 10px;\n"
"width: 20px;\n"
"height:20px;\n"
"padding: 5px;\n"
"margin-right: 30px;\n"
"}"));

        retranslateUi(AdminDialog);

        adminTabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AdminDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminDialog)
    {
        AdminDialog->setWindowTitle(QCoreApplication::translate("AdminDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("AdminDialog", "Teacher Manager", nullptr));
        adminTabWidget->setTabText(adminTabWidget->indexOf(teacherManger), QCoreApplication::translate("AdminDialog", "Teacher Manager", nullptr));
        label->setText(QCoreApplication::translate("AdminDialog", "Word Manager", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        adminTabWidget->setTabText(adminTabWidget->indexOf(wordManager), QCoreApplication::translate("AdminDialog", "Word Manager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDialog: public Ui_AdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG_H
