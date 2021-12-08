/********************************************************************************
** Form generated from reading UI file 'monitoring_edit.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITORING_EDIT_H
#define UI_MONITORING_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Monitoring_edit
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *Month_combo;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QLabel *label_7;
    QLineEdit *Year_edit;
    QLineEdit *Month_edit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *Day_edit;
    QLabel *label_4;
    QLineEdit *Cate_edit;
    QLabel *label_5;
    QLineEdit *Amount_edit;
    QLabel *label_6;
    QLineEdit *Desc_edit;
    QLabel *background;

    void setupUi(QDialog *Monitoring_edit)
    {
        if (Monitoring_edit->objectName().isEmpty())
            Monitoring_edit->setObjectName(QString::fromUtf8("Monitoring_edit"));
        Monitoring_edit->resize(543, 309);
        pushButton = new QPushButton(Monitoring_edit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 270, 113, 32));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:black;"));
        pushButton_2 = new QPushButton(Monitoring_edit);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(415, 270, 113, 32));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:black;"));
        layoutWidget = new QWidget(Monitoring_edit);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(270, 10, 258, 242));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        Month_combo = new QComboBox(layoutWidget);
        Month_combo->addItem(QString());
        Month_combo->addItem(QString());
        Month_combo->addItem(QString());
        Month_combo->addItem(QString());
        Month_combo->addItem(QString());
        Month_combo->addItem(QString());
        Month_combo->addItem(QString());
        Month_combo->addItem(QString());
        Month_combo->addItem(QString());
        Month_combo->addItem(QString());
        Month_combo->addItem(QString());
        Month_combo->addItem(QString());
        Month_combo->setObjectName(QString::fromUtf8("Month_combo"));

        horizontalLayout_6->addWidget(Month_combo);

        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_6->addWidget(pushButton_3);


        verticalLayout_3->addLayout(horizontalLayout_6);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_3->addWidget(tableView);

        label_7 = new QLabel(Monitoring_edit);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 250, 271, 16));
        Year_edit = new QLineEdit(Monitoring_edit);
        Year_edit->setObjectName(QString::fromUtf8("Year_edit"));
        Year_edit->setGeometry(QRect(90, 40, 160, 22));
        Month_edit = new QLineEdit(Monitoring_edit);
        Month_edit->setObjectName(QString::fromUtf8("Month_edit"));
        Month_edit->setGeometry(QRect(90, 80, 160, 22));
        label = new QLabel(Monitoring_edit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 31, 21));
        label_2 = new QLabel(Monitoring_edit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 51, 22));
        label_3 = new QLabel(Monitoring_edit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 22, 22));
        Day_edit = new QLineEdit(Monitoring_edit);
        Day_edit->setObjectName(QString::fromUtf8("Day_edit"));
        Day_edit->setGeometry(QRect(90, 120, 160, 22));
        label_4 = new QLabel(Monitoring_edit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 155, 51, 22));
        Cate_edit = new QLineEdit(Monitoring_edit);
        Cate_edit->setObjectName(QString::fromUtf8("Cate_edit"));
        Cate_edit->setGeometry(QRect(90, 155, 160, 22));
        label_5 = new QLabel(Monitoring_edit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 190, 43, 22));
        Amount_edit = new QLineEdit(Monitoring_edit);
        Amount_edit->setObjectName(QString::fromUtf8("Amount_edit"));
        Amount_edit->setGeometry(QRect(90, 190, 160, 22));
        label_6 = new QLabel(Monitoring_edit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 230, 64, 22));
        Desc_edit = new QLineEdit(Monitoring_edit);
        Desc_edit->setObjectName(QString::fromUtf8("Desc_edit"));
        Desc_edit->setGeometry(QRect(90, 230, 160, 22));
        background = new QLabel(Monitoring_edit);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(-10, 0, 561, 321));
        background->setStyleSheet(QString::fromUtf8("background-color:rgb(243, 243, 255)"));
        background->raise();
        pushButton->raise();
        pushButton_2->raise();
        layoutWidget->raise();
        label_7->raise();
        Year_edit->raise();
        Month_edit->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        Day_edit->raise();
        label_4->raise();
        Cate_edit->raise();
        label_5->raise();
        Amount_edit->raise();
        label_6->raise();
        Desc_edit->raise();

        retranslateUi(Monitoring_edit);

        QMetaObject::connectSlotsByName(Monitoring_edit);
    } // setupUi

    void retranslateUi(QDialog *Monitoring_edit)
    {
        Monitoring_edit->setWindowTitle(QCoreApplication::translate("Monitoring_edit", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Monitoring_edit", "Saved", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Monitoring_edit", "Close", nullptr));
        Month_combo->setItemText(0, QCoreApplication::translate("Monitoring_edit", "Jan", nullptr));
        Month_combo->setItemText(1, QCoreApplication::translate("Monitoring_edit", "Feb", nullptr));
        Month_combo->setItemText(2, QCoreApplication::translate("Monitoring_edit", "Mar", nullptr));
        Month_combo->setItemText(3, QCoreApplication::translate("Monitoring_edit", "Apr", nullptr));
        Month_combo->setItemText(4, QCoreApplication::translate("Monitoring_edit", "May", nullptr));
        Month_combo->setItemText(5, QCoreApplication::translate("Monitoring_edit", "Jun", nullptr));
        Month_combo->setItemText(6, QCoreApplication::translate("Monitoring_edit", "Jul", nullptr));
        Month_combo->setItemText(7, QCoreApplication::translate("Monitoring_edit", "Aug", nullptr));
        Month_combo->setItemText(8, QCoreApplication::translate("Monitoring_edit", "Sep", nullptr));
        Month_combo->setItemText(9, QCoreApplication::translate("Monitoring_edit", "Oct", nullptr));
        Month_combo->setItemText(10, QCoreApplication::translate("Monitoring_edit", "Nov", nullptr));
        Month_combo->setItemText(11, QCoreApplication::translate("Monitoring_edit", "Dec", nullptr));

        pushButton_3->setText(QCoreApplication::translate("Monitoring_edit", "Show", nullptr));
        label_7->setText(QCoreApplication::translate("Monitoring_edit", "*Double click Key section you want to edit", nullptr));
        label->setText(QCoreApplication::translate("Monitoring_edit", "Year", nullptr));
        label_2->setText(QCoreApplication::translate("Monitoring_edit", "Month", nullptr));
        label_3->setText(QCoreApplication::translate("Monitoring_edit", "Day", nullptr));
        label_4->setText(QCoreApplication::translate("Monitoring_edit", "Category", nullptr));
        label_5->setText(QCoreApplication::translate("Monitoring_edit", "Amount", nullptr));
        label_6->setText(QCoreApplication::translate("Monitoring_edit", "Description", nullptr));
        background->setText(QCoreApplication::translate("Monitoring_edit", "l", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Monitoring_edit: public Ui_Monitoring_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITORING_EDIT_H
