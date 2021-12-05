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
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *Year_edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *Month_edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *Day_edit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *Cate_edit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *Amount_edit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *Desc_edit;
    QLabel *label_7;

    void setupUi(QDialog *Monitoring_edit)
    {
        if (Monitoring_edit->objectName().isEmpty())
            Monitoring_edit->setObjectName(QString::fromUtf8("Monitoring_edit"));
        Monitoring_edit->resize(543, 309);
        pushButton = new QPushButton(Monitoring_edit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 270, 113, 32));
        pushButton_2 = new QPushButton(Monitoring_edit);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 270, 113, 32));
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

        layoutWidget1 = new QWidget(Monitoring_edit);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 60, 201, 194));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        Year_edit = new QLineEdit(layoutWidget1);
        Year_edit->setObjectName(QString::fromUtf8("Year_edit"));

        horizontalLayout->addWidget(Year_edit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        Month_edit = new QLineEdit(layoutWidget1);
        Month_edit->setObjectName(QString::fromUtf8("Month_edit"));

        horizontalLayout_2->addWidget(Month_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        Day_edit = new QLineEdit(layoutWidget1);
        Day_edit->setObjectName(QString::fromUtf8("Day_edit"));

        horizontalLayout_3->addWidget(Day_edit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        Cate_edit = new QLineEdit(layoutWidget1);
        Cate_edit->setObjectName(QString::fromUtf8("Cate_edit"));

        horizontalLayout_4->addWidget(Cate_edit);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        Amount_edit = new QLineEdit(layoutWidget1);
        Amount_edit->setObjectName(QString::fromUtf8("Amount_edit"));

        horizontalLayout_5->addWidget(Amount_edit);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        Desc_edit = new QLineEdit(layoutWidget1);
        Desc_edit->setObjectName(QString::fromUtf8("Desc_edit"));

        horizontalLayout_7->addWidget(Desc_edit);


        verticalLayout_4->addLayout(horizontalLayout_7);

        label_7 = new QLabel(Monitoring_edit);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 250, 271, 16));

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
        label->setText(QCoreApplication::translate("Monitoring_edit", "Year", nullptr));
        label_2->setText(QCoreApplication::translate("Monitoring_edit", "Month", nullptr));
        label_3->setText(QCoreApplication::translate("Monitoring_edit", "Day", nullptr));
        label_4->setText(QCoreApplication::translate("Monitoring_edit", "Category", nullptr));
        label_5->setText(QCoreApplication::translate("Monitoring_edit", "Amount", nullptr));
        label_6->setText(QCoreApplication::translate("Monitoring_edit", "Description", nullptr));
        label_7->setText(QCoreApplication::translate("Monitoring_edit", "*Double click Key section you want to edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Monitoring_edit: public Ui_Monitoring_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITORING_EDIT_H
