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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Homebutton;
    QPushButton *Planningbutton;
    QPushButton *Expensebutton;
    QPushButton *Monitorbutton;
    QPushButton *Quitbutton;
    QTextEdit *textEdit;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(1020, 635);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image :  url(:/Figma/mint.jpg)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(200, 500, 611, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Homebutton = new QPushButton(horizontalLayoutWidget);
        Homebutton->setObjectName(QString::fromUtf8("Homebutton"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        Homebutton->setFont(font);
        Homebutton->setStyleSheet(QString::fromUtf8("color: black\n"
""));

        horizontalLayout->addWidget(Homebutton);

        Planningbutton = new QPushButton(horizontalLayoutWidget);
        Planningbutton->setObjectName(QString::fromUtf8("Planningbutton"));
        Planningbutton->setFont(font);
        Planningbutton->setStyleSheet(QString::fromUtf8("color :black\n"
""));

        horizontalLayout->addWidget(Planningbutton);

        Expensebutton = new QPushButton(horizontalLayoutWidget);
        Expensebutton->setObjectName(QString::fromUtf8("Expensebutton"));
        Expensebutton->setFont(font);
        Expensebutton->setStyleSheet(QString::fromUtf8("color:black"));

        horizontalLayout->addWidget(Expensebutton);

        Monitorbutton = new QPushButton(horizontalLayoutWidget);
        Monitorbutton->setObjectName(QString::fromUtf8("Monitorbutton"));
        Monitorbutton->setFont(font);
        Monitorbutton->setStyleSheet(QString::fromUtf8("color:black"));

        horizontalLayout->addWidget(Monitorbutton);

        Quitbutton = new QPushButton(horizontalLayoutWidget);
        Quitbutton->setObjectName(QString::fromUtf8("Quitbutton"));
        Quitbutton->setFont(font);
        Quitbutton->setStyleSheet(QString::fromUtf8("color:black"));

        horizontalLayout->addWidget(Quitbutton);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(50, 210, 941, 201));
        textEdit->setStyleSheet(QString::fromUtf8("color: white;\n"
"font-style: italic arial;\n"
"font: bold italic large \"Times New Roman\";\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1020, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Homebutton->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        Planningbutton->setText(QCoreApplication::translate("MainWindow", "Planning", nullptr));
        Expensebutton->setText(QCoreApplication::translate("MainWindow", "Expense", nullptr));
        Monitorbutton->setText(QCoreApplication::translate("MainWindow", "Monitor", nullptr));
        Quitbutton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Times New Roman'; font-size:9pt; font-weight:600; font-style:italic;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Gulim'; font-size:48pt;\">Buddy Budgeting</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
