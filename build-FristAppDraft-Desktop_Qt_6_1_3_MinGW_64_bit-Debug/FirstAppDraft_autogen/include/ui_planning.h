/********************************************************************************
** Form generated from reading UI file 'planning.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANNING_H
#define UI_PLANNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Planning
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Planning)
    {
        if (Planning->objectName().isEmpty())
            Planning->setObjectName(QString::fromUtf8("Planning"));
        Planning->resize(932, 646);
        Planning->setStyleSheet(QString::fromUtf8("background-image:url(:/Figma/mint.jpg);"));
        centralwidget = new QWidget(Planning);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(160, 490, 611, 81));
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

        Planning->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Planning);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 932, 25));
        Planning->setMenuBar(menubar);
        statusbar = new QStatusBar(Planning);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Planning->setStatusBar(statusbar);

        retranslateUi(Planning);

        QMetaObject::connectSlotsByName(Planning);
    } // setupUi

    void retranslateUi(QMainWindow *Planning)
    {
        Planning->setWindowTitle(QCoreApplication::translate("Planning", "MainWindow", nullptr));
        Homebutton->setText(QCoreApplication::translate("Planning", "Home", nullptr));
        Planningbutton->setText(QCoreApplication::translate("Planning", "Planning", nullptr));
        Expensebutton->setText(QCoreApplication::translate("Planning", "Expense", nullptr));
        Monitorbutton->setText(QCoreApplication::translate("Planning", "Monitor", nullptr));
        Quitbutton->setText(QCoreApplication::translate("Planning", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Planning: public Ui_Planning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANNING_H
