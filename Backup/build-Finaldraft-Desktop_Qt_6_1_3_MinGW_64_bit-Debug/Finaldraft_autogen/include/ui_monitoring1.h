/********************************************************************************
** Form generated from reading UI file 'monitoring1.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITORING1_H
#define UI_MONITORING1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Monitoring1
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTableView *tableView;
    QPushButton *pushButton_4;
    QComboBox *comboBox;
    QComboBox *month_Box;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *Edit_btn;
    QLabel *background;
    QLabel *background_in;

    void setupUi(QDialog *Monitoring1)
    {
        if (Monitoring1->objectName().isEmpty())
            Monitoring1->setObjectName(QString::fromUtf8("Monitoring1"));
        Monitoring1->resize(689, 637);
        label = new QLabel(Monitoring1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 131, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(Monitoring1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 600, 91, 24));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:rgb(0,0,0)"));
        tableView = new QTableView(Monitoring1);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 120, 631, 471));
        pushButton_4 = new QPushButton(Monitoring1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(460, 70, 21, 24));
        comboBox = new QComboBox(Monitoring1);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(280, 70, 171, 23));
        month_Box = new QComboBox(Monitoring1);
        month_Box->addItem(QString());
        month_Box->addItem(QString());
        month_Box->addItem(QString());
        month_Box->addItem(QString());
        month_Box->addItem(QString());
        month_Box->addItem(QString());
        month_Box->addItem(QString());
        month_Box->addItem(QString());
        month_Box->addItem(QString());
        month_Box->addItem(QString());
        month_Box->addItem(QString());
        month_Box->addItem(QString());
        month_Box->addItem(QString());
        month_Box->setObjectName(QString::fromUtf8("month_Box"));
        month_Box->setGeometry(QRect(70, 70, 111, 23));
        label_2 = new QLabel(Monitoring1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 51, 24));
        label_3 = new QLabel(Monitoring1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 70, 81, 24));
        layoutWidget = new QWidget(Monitoring1);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(510, 50, 131, 57));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        Edit_btn = new QPushButton(Monitoring1);
        Edit_btn->setObjectName(QString::fromUtf8("Edit_btn"));
        Edit_btn->setGeometry(QRect(460, 600, 86, 24));
        Edit_btn->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:rgb(0,0,0)\n"
""));
        background = new QLabel(Monitoring1);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 1, 691, 641));
        background->setStyleSheet(QString::fromUtf8("background-color:rgb(176,193,255)"));
        background_in = new QLabel(Monitoring1);
        background_in->setObjectName(QString::fromUtf8("background_in"));
        background_in->setGeometry(QRect(10, 41, 661, 591));
        background_in->setStyleSheet(QString::fromUtf8("background-color:rgb(243,243,255)"));
        background_in->setFrameShape(QFrame::WinPanel);
        background->raise();
        background_in->raise();
        label->raise();
        pushButton->raise();
        tableView->raise();
        pushButton_4->raise();
        comboBox->raise();
        month_Box->raise();
        label_2->raise();
        label_3->raise();
        layoutWidget->raise();
        Edit_btn->raise();

        retranslateUi(Monitoring1);

        QMetaObject::connectSlotsByName(Monitoring1);
    } // setupUi

    void retranslateUi(QDialog *Monitoring1)
    {
        Monitoring1->setWindowTitle(QCoreApplication::translate("Monitoring1", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Monitoring1", "<Total Expense>", nullptr));
        pushButton->setText(QCoreApplication::translate("Monitoring1", "Close", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Monitoring1", "\317\203", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Monitoring1", "press \317\203 button", nullptr));

        month_Box->setItemText(0, QCoreApplication::translate("Monitoring1", "ALL", nullptr));
        month_Box->setItemText(1, QCoreApplication::translate("Monitoring1", "Jan", nullptr));
        month_Box->setItemText(2, QCoreApplication::translate("Monitoring1", "Feb", nullptr));
        month_Box->setItemText(3, QCoreApplication::translate("Monitoring1", "Mar", nullptr));
        month_Box->setItemText(4, QCoreApplication::translate("Monitoring1", "Apr", nullptr));
        month_Box->setItemText(5, QCoreApplication::translate("Monitoring1", "May", nullptr));
        month_Box->setItemText(6, QCoreApplication::translate("Monitoring1", "Jun", nullptr));
        month_Box->setItemText(7, QCoreApplication::translate("Monitoring1", "Jul", nullptr));
        month_Box->setItemText(8, QCoreApplication::translate("Monitoring1", "Aug", nullptr));
        month_Box->setItemText(9, QCoreApplication::translate("Monitoring1", "Sep", nullptr));
        month_Box->setItemText(10, QCoreApplication::translate("Monitoring1", "Oct", nullptr));
        month_Box->setItemText(11, QCoreApplication::translate("Monitoring1", "Nov", nullptr));
        month_Box->setItemText(12, QCoreApplication::translate("Monitoring1", "Dec", nullptr));

        label_2->setText(QCoreApplication::translate("Monitoring1", "Month", nullptr));
        label_3->setText(QCoreApplication::translate("Monitoring1", "Category", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Monitoring1", "Selected Expense", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Monitoring1", "Total Expense", nullptr));
        Edit_btn->setText(QCoreApplication::translate("Monitoring1", "Edit", nullptr));
        background->setText(QString());
        background_in->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Monitoring1: public Ui_Monitoring1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITORING1_H
