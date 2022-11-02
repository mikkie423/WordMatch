/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QWidget *tabWidgetPage2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName("AdminWindow");
        AdminWindow->resize(800, 600);
        centralwidget = new QWidget(AdminWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 801, 551));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName("tabWidgetPage1");
        tabWidget->addTab(tabWidgetPage1, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName("tabWidgetPage2");
        tabWidget->addTab(tabWidgetPage2, QString());
        AdminWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        AdminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminWindow);
        statusbar->setObjectName("statusbar");
        AdminWindow->setStatusBar(statusbar);

        retranslateUi(AdminWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "Word Match - Admin", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2), QString());
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
