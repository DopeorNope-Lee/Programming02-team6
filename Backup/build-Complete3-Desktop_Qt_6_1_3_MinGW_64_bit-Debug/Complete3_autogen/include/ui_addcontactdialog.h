/********************************************************************************
** Form generated from reading UI file 'addcontactdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONTACTDIALOG_H
#define UI_ADDCONTACTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addcontactDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *addcontactDialog)
    {
        if (addcontactDialog->objectName().isEmpty())
            addcontactDialog->setObjectName(QString::fromUtf8("addcontactDialog"));
        addcontactDialog->resize(283, 159);
        pushButton = new QPushButton(addcontactDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 80, 61, 20));
        pushButton_2 = new QPushButton(addcontactDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 80, 61, 20));
        widget = new QWidget(addcontactDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 221, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        widget1 = new QWidget(addcontactDialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 50, 221, 24));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        retranslateUi(addcontactDialog);

        QMetaObject::connectSlotsByName(addcontactDialog);
    } // setupUi

    void retranslateUi(QDialog *addcontactDialog)
    {
        addcontactDialog->setWindowTitle(QCoreApplication::translate("addcontactDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addcontactDialog", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addcontactDialog", "Cancle", nullptr));
        label->setText(QCoreApplication::translate("addcontactDialog", "Category", nullptr));
        label_2->setText(QCoreApplication::translate("addcontactDialog", "\\", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addcontactDialog: public Ui_addcontactDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONTACTDIALOG_H
