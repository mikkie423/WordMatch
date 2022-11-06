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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminDialog
{
public:
    QTabWidget *adminTabWidget;
    QWidget *teacherManger;
    QFrame *frame_6;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *addWordPushButton_3;
    QPushButton *addWordPushButton_4;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_4;
    QFrame *frame_7;
    QTableView *wordTableView_3;
    QWidget *wordManager;
    QFrame *frame;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *addWordPushButton;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QFrame *frame_3;
    QTableView *wordTableView;
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
        frame_6 = new QFrame(teacherManger);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(40, 30, 1831, 951));
        frame_6->setStyleSheet(QString::fromUtf8("\n"
"background-color: #2967D8;\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"\n"
""));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        layoutWidget_3 = new QWidget(frame_6);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(33, 30, 1771, 62));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName("label_4");
        QFont font;
        font.setPointSize(16);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: white;\n"
"padding: 5px 10px;"));

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(1000, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        addWordPushButton_3 = new QPushButton(layoutWidget_3);
        addWordPushButton_3->setObjectName("addWordPushButton_3");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        addWordPushButton_3->setFont(font1);
        addWordPushButton_3->setStyleSheet(QString::fromUtf8("background-color: #ED145B;\n"
"width: 48px;\n"
"height:48px;\n"
"color: #FAD61E;\n"
"border: 1px solid rgb(125, 11, 49);\n"
"font-weight:bold;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/requests"), QSize(), QIcon::Normal, QIcon::Off);
        addWordPushButton_3->setIcon(icon);
        addWordPushButton_3->setIconSize(QSize(40, 48));
        addWordPushButton_3->setCheckable(true);
        addWordPushButton_3->setFlat(false);

        horizontalLayout_5->addWidget(addWordPushButton_3);

        addWordPushButton_4 = new QPushButton(layoutWidget_3);
        addWordPushButton_4->setObjectName("addWordPushButton_4");
        addWordPushButton_4->setStyleSheet(QString::fromUtf8("background-color: #ED145B;\n"
"width: 48px;\n"
"height:48px;\n"
"color: #FAD61E;\n"
"border: 1px solid rgb(125, 11, 49);\n"
"border-radius: 15px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/plusYELLOW"), QSize(), QIcon::Normal, QIcon::Off);
        addWordPushButton_4->setIcon(icon1);
        addWordPushButton_4->setIconSize(QSize(24, 24));

        horizontalLayout_5->addWidget(addWordPushButton_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lineEdit_3 = new QLineEdit(layoutWidget_3);
        lineEdit_3->setObjectName("lineEdit_3");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy1);
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
        lineEdit_3->setPalette(palette1);
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background: white;\n"
"border-bottom-right-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"}"));

        horizontalLayout_6->addWidget(lineEdit_3);

        pushButton_4 = new QPushButton(layoutWidget_3);
        pushButton_4->setObjectName("pushButton_4");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:white;\n"
"border-bottom-left-radius: 0px;\n"
"border-top-left-radius: 0px;\n"
"border-left:1px solid gray;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/search"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon2);
        pushButton_4->setIconSize(QSize(24, 24));

        horizontalLayout_6->addWidget(pushButton_4);

        horizontalLayout_6->setStretch(0, 4);
        horizontalLayout_6->setStretch(1, 1);

        horizontalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 5);
        horizontalLayout_5->setStretch(2, 1);
        horizontalLayout_5->setStretch(4, 2);
        frame_7 = new QFrame(frame_6);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(40, 110, 1761, 801));
        frame_7->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        wordTableView_3 = new QTableView(frame_7);
        wordTableView_3->setObjectName("wordTableView_3");
        wordTableView_3->setGeometry(QRect(70, 30, 1331, 751));
        sizePolicy2.setHeightForWidth(wordTableView_3->sizePolicy().hasHeightForWidth());
        wordTableView_3->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(14);
        wordTableView_3->setFont(font2);
        wordTableView_3->setStyleSheet(QString::fromUtf8("height: 50px;\n"
"padding: 0px;\n"
"border: none;\n"
"font-size:14pt;\n"
""));
        wordTableView_3->setFrameShape(QFrame::NoFrame);
        wordTableView_3->setFrameShadow(QFrame::Plain);
        wordTableView_3->setLineWidth(0);
        wordTableView_3->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        wordTableView_3->setEditTriggers(QAbstractItemView::AnyKeyPressed);
        wordTableView_3->setDragDropOverwriteMode(false);
        wordTableView_3->setAlternatingRowColors(true);
        wordTableView_3->setSelectionMode(QAbstractItemView::NoSelection);
        wordTableView_3->setTextElideMode(Qt::ElideNone);
        wordTableView_3->setGridStyle(Qt::NoPen);
        wordTableView_3->setWordWrap(true);
        wordTableView_3->setCornerButtonEnabled(false);
        wordTableView_3->horizontalHeader()->setVisible(true);
        wordTableView_3->verticalHeader()->setVisible(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/userSettingsWHITE"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/icons/userSettingsYELLOW"), QSize(), QIcon::Normal, QIcon::On);
        icon3.addFile(QString::fromUtf8(":/icons/userSettingsWHITE"), QSize(), QIcon::Active, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/icons/userSettingsWHITE"), QSize(), QIcon::Selected, QIcon::Off);
        adminTabWidget->addTab(teacherManger, icon3, QString());
        wordManager = new QWidget();
        wordManager->setObjectName("wordManager");
        frame = new QFrame(wordManager);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 30, 1831, 951));
        frame->setStyleSheet(QString::fromUtf8("background-color: #2967D8;\n"
"border-radius: 15px;\n"
"padding: 10px;\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(33, 30, 1771, 72));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: white;"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(1000, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addWordPushButton = new QPushButton(layoutWidget);
        addWordPushButton->setObjectName("addWordPushButton");
        addWordPushButton->setStyleSheet(QString::fromUtf8("background-color: #ED145B;\n"
"width: 48px;\n"
"height:48px;\n"
"color: #FAD61E;\n"
"border: 1px solid rgb(125, 11, 49);\n"
"border-radius: 15px;"));
        addWordPushButton->setIcon(icon1);
        addWordPushButton->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(addWordPushButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        lineEdit->setPalette(palette2);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background: white;\n"
"border-bottom-right-radius: 0;\n"
"border-top-right-radius: 0;\n"
"padding-left:10px;\n"
"}"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"padding: 10px;\n"
"border-bottom-left-radius: 0;\n"
"border-top-left-radius: 0;\n"
"border-left:1px solid gray;\n"
"\n"
""));
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(pushButton_2);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 1);

        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);
        horizontalLayout_2->setStretch(3, 2);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(40, 110, 1761, 801));
        frame_3->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        wordTableView = new QTableView(frame_3);
        wordTableView->setObjectName("wordTableView");
        wordTableView->setGeometry(QRect(70, 30, 1331, 751));
        sizePolicy2.setHeightForWidth(wordTableView->sizePolicy().hasHeightForWidth());
        wordTableView->setSizePolicy(sizePolicy2);
        wordTableView->setFont(font2);
        wordTableView->setStyleSheet(QString::fromUtf8("height: 50px;\n"
"padding: 0px;\n"
"border: none;\n"
"font-size:14pt;\n"
""));
        wordTableView->setFrameShape(QFrame::NoFrame);
        wordTableView->setFrameShadow(QFrame::Plain);
        wordTableView->setLineWidth(0);
        wordTableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        wordTableView->setEditTriggers(QAbstractItemView::AnyKeyPressed);
        wordTableView->setDragDropOverwriteMode(false);
        wordTableView->setAlternatingRowColors(true);
        wordTableView->setSelectionMode(QAbstractItemView::NoSelection);
        wordTableView->setTextElideMode(Qt::ElideNone);
        wordTableView->setGridStyle(Qt::NoPen);
        wordTableView->setWordWrap(true);
        wordTableView->setCornerButtonEnabled(false);
        wordTableView->horizontalHeader()->setVisible(true);
        wordTableView->verticalHeader()->setVisible(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/wordManagerWHITE"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/icons/wordManagerYELLOW"), QSize(), QIcon::Normal, QIcon::On);
        adminTabWidget->addTab(wordManager, icon4, QString());
        userMenuFrame = new QFrame(AdminDialog);
        userMenuFrame->setObjectName("userMenuFrame");
        userMenuFrame->setGeometry(QRect(480, 0, 1441, 64));
        QPalette palette3;
        QBrush brush10(QColor(41, 103, 216, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        userMenuFrame->setPalette(palette3);
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

        adminTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminDialog)
    {
        AdminDialog->setWindowTitle(QCoreApplication::translate("AdminDialog", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("AdminDialog", "Teacher Manager", nullptr));
        addWordPushButton_3->setText(QCoreApplication::translate("AdminDialog", "REQUESTS", nullptr));
        addWordPushButton_4->setText(QString());
        pushButton_4->setText(QString());
        adminTabWidget->setTabText(adminTabWidget->indexOf(teacherManger), QCoreApplication::translate("AdminDialog", "Teacher Manager", nullptr));
        label->setText(QCoreApplication::translate("AdminDialog", "Word Manager", nullptr));
        addWordPushButton->setText(QString());
        pushButton_2->setText(QString());
        adminTabWidget->setTabText(adminTabWidget->indexOf(wordManager), QCoreApplication::translate("AdminDialog", "Word Manager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminDialog: public Ui_AdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG_H
