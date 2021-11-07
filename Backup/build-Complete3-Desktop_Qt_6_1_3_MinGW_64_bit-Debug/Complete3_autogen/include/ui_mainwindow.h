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
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *mainhome;
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
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(10);
        font.setBold(true);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("Background-image:url(:/resourcefile/background.jpg)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 110, 761, 201));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(50);
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 250, 271, 221));
        label_2->setStyleSheet(QString::fromUtf8("Background-image:url(:/resourcefile/MAIN ICON.png)"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(210, 480, 661, 111));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mainhome = new QPushButton(horizontalLayoutWidget);
        mainhome->setObjectName(QString::fromUtf8("mainhome"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Agency FB")});
        font2.setPointSize(14);
        font2.setBold(true);
        mainhome->setFont(font2);
        mainhome->setStyleSheet(QString::fromUtf8("color: white"));

        horizontalLayout->addWidget(mainhome);

        planning = new QPushButton(horizontalLayoutWidget);
        planning->setObjectName(QString::fromUtf8("planning"));
        planning->setFont(font2);
        planning->setStyleSheet(QString::fromUtf8("color: white"));

        horizontalLayout->addWidget(planning);

        expense = new QPushButton(horizontalLayoutWidget);
        expense->setObjectName(QString::fromUtf8("expense"));
        expense->setFont(font2);
        expense->setStyleSheet(QString::fromUtf8("color: white"));

        horizontalLayout->addWidget(expense);

        mornitoring = new QPushButton(horizontalLayoutWidget);
        mornitoring->setObjectName(QString::fromUtf8("mornitoring"));
        mornitoring->setFont(font2);
        mornitoring->setStyleSheet(QString::fromUtf8("color: white"));

        horizontalLayout->addWidget(mornitoring);

        exit = new QPushButton(horizontalLayoutWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setFont(font2);
        exit->setStyleSheet(QString::fromUtf8("color: white"));

        horizontalLayout->addWidget(exit);

        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        horizontalLayoutWidget->raise();
        label_2->raise();
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
        label->setText(QCoreApplication::translate("MainWindow", "Buddy budgetting", nullptr));
        label_2->setText(QString());
        mainhome->setText(QCoreApplication::translate("MainWindow", "main", nullptr));
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
