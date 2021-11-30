/********************************************************************************
** Form generated from reading UI file 'category.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATEGORY_H
#define UI_CATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Category
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Category)
    {
        if (Category->objectName().isEmpty())
            Category->setObjectName(QString::fromUtf8("Category"));
        Category->resize(418, 83);
        pushButton = new QPushButton(Category);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 30, 61, 24));
        lineEdit = new QLineEdit(Category);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 30, 241, 23));
        pushButton_2 = new QPushButton(Category);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 30, 61, 24));

        retranslateUi(Category);

        QMetaObject::connectSlotsByName(Category);
    } // setupUi

    void retranslateUi(QDialog *Category)
    {
        Category->setWindowTitle(QCoreApplication::translate("Category", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Category", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Category", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Category: public Ui_Category {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATEGORY_H
