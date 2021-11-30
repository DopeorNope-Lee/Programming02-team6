/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *planning;
    QPushButton *expense;
    QPushButton *mornitoring;
    QPushButton *exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1054, 639);
        MainWindow->setMinimumSize(QSize(1054, 639));
        MainWindow->setMaximumSize(QSize(1054, 639));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(10);
        font.setBold(true);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/mainwindow.jpg)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(210, 480, 661, 111));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        planning = new QPushButton(horizontalLayoutWidget);
        planning->setObjectName(QString::fromUtf8("planning"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setPointSize(14);
        font1.setBold(true);
        planning->setFont(font1);
        planning->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(planning);

        expense = new QPushButton(horizontalLayoutWidget);
        expense->setObjectName(QString::fromUtf8("expense"));
        expense->setFont(font1);
        expense->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(expense);

        mornitoring = new QPushButton(horizontalLayoutWidget);
        mornitoring->setObjectName(QString::fromUtf8("mornitoring"));
        mornitoring->setFont(font1);
        mornitoring->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(mornitoring);

        exit = new QPushButton(horizontalLayoutWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setFont(font1);
        exit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(exit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1054, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        planning->setText(QCoreApplication::translate("MainWindow", "planning", nullptr));
        expense->setText(QCoreApplication::translate("MainWindow", "expense", nullptr));
        mornitoring->setText(QCoreApplication::translate("MainWindow", "monitoring", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
