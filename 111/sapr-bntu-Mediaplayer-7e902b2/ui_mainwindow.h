/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 30. May 22:53:15 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ButtonStop;
    QPushButton *ButtonPlay;
    QPushButton *ButtonPrev;
    QPushButton *ButtonPause;
    QPushButton *ButtonNext;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(486, 438);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/\320\234\320\265\320\264\320\270\320\260\320\277\320\273\320\265\320\271\320\265\321\200 \320\272\320\276\320\277\320\270\321\217.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDocumentMode(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 280, 331, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ButtonStop = new QPushButton(horizontalLayoutWidget);
        ButtonStop->setObjectName(QString::fromUtf8("ButtonStop"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/\320\232\320\275. \320\241\320\242\320\236\320\237.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonStop->setIcon(icon1);
        ButtonStop->setIconSize(QSize(50, 40));

        horizontalLayout->addWidget(ButtonStop);

        ButtonPlay = new QPushButton(horizontalLayoutWidget);
        ButtonPlay->setObjectName(QString::fromUtf8("ButtonPlay"));
        ButtonPlay->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/F:/\320\222\320\241\320\240/\320\232\320\275. \320\237\320\220\320\243\320\227\320\220.png);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/\320\232\320\275.\320\237\320\243\320\241\320\232.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonPlay->setIcon(icon2);
        ButtonPlay->setIconSize(QSize(50, 40));
        ButtonPlay->setAutoRepeat(false);

        horizontalLayout->addWidget(ButtonPlay);

        ButtonPrev = new QPushButton(horizontalLayoutWidget);
        ButtonPrev->setObjectName(QString::fromUtf8("ButtonPrev"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/\320\232\320\275. \320\277\320\265\321\200\320\265\320\274\320\276\321\202\320\272\320\260 \320\275\320\260\320\267\320\260\320\264.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonPrev->setIcon(icon3);
        ButtonPrev->setIconSize(QSize(50, 40));

        horizontalLayout->addWidget(ButtonPrev);

        ButtonPause = new QPushButton(horizontalLayoutWidget);
        ButtonPause->setObjectName(QString::fromUtf8("ButtonPause"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/\320\232\320\275. \320\237\320\220\320\243\320\227\320\220.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonPause->setIcon(icon4);
        ButtonPause->setIconSize(QSize(50, 40));

        horizontalLayout->addWidget(ButtonPause);

        ButtonNext = new QPushButton(horizontalLayoutWidget);
        ButtonNext->setObjectName(QString::fromUtf8("ButtonNext"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/\320\232\320\275. \320\277\320\265\321\200\320\265\320\274\320\276\321\202\320\272\320\260 \320\262\320\277\320\265\321\200\321\221\320\264.png"), QSize(), QIcon::Normal, QIcon::Off);
        ButtonNext->setIcon(icon5);
        ButtonNext->setIconSize(QSize(50, 40));

        horizontalLayout->addWidget(ButtonNext);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(350, 190, 71, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setAutoRepeatDelay(300);

        verticalLayout_2->addWidget(pushButton);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 10, 321, 251));
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 486, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Mp3Player", 0, QApplication::UnicodeUTF8));
        ButtonStop->setText(QString());
        ButtonPlay->setText(QString());
        ButtonPlay->setShortcut(QString());
        ButtonPrev->setText(QString());
        ButtonPause->setText(QString());
        ButtonNext->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Insert", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
