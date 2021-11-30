/********************************************************************************
** Form generated from reading UI file 'add_expense.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_EXPENSE_H
#define UI_ADD_EXPENSE_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_expense
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *category_2;
    QLabel *money_2;
    QLabel *description_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_2;
    QComboBox *CategoryBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *line_money_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *line_descript_2;
    QLabel *label_3;
    QLabel *label_5;
    QTableWidget *ExpenseWidget;
    QFrame *line_2;
    QDateEdit *dateEdit;
    QFrame *line_3;
    QFrame *line;
    QLabel *background;
    QLabel *background_in;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *expense_icon;
    QLabel *expense;
    QPushButton *pushButton;
    QPushButton *DEL_btn;
    QPushButton *pushButton_4;

    void setupUi(QDialog *add_expense)
    {
        if (add_expense->objectName().isEmpty())
            add_expense->setObjectName(QString::fromUtf8("add_expense"));
        add_expense->resize(1000, 308);
        layoutWidget_2 = new QWidget(add_expense);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(550, 80, 404, 151));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        category_2 = new QLabel(layoutWidget_2);
        category_2->setObjectName(QString::fromUtf8("category_2"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setBold(true);
        category_2->setFont(font);

        verticalLayout->addWidget(category_2);

        money_2 = new QLabel(layoutWidget_2);
        money_2->setObjectName(QString::fromUtf8("money_2"));
        money_2->setFont(font);

        verticalLayout->addWidget(money_2);

        description_2 = new QLabel(layoutWidget_2);
        description_2->setObjectName(QString::fromUtf8("description_2"));
        description_2->setFont(font);

        verticalLayout->addWidget(description_2);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        CategoryBox = new QComboBox(layoutWidget_2);
        CategoryBox->addItem(QString());
        CategoryBox->addItem(QString());
        CategoryBox->addItem(QString());
        CategoryBox->addItem(QString());
        CategoryBox->addItem(QString());
        CategoryBox->addItem(QString());
        CategoryBox->addItem(QString());
        CategoryBox->setObjectName(QString::fromUtf8("CategoryBox"));

        verticalLayout_2->addWidget(CategoryBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_5 = new QPushButton(layoutWidget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(80, 24));
        pushButton_5->setMaximumSize(QSize(16777215, 24));

        horizontalLayout->addWidget(pushButton_5);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_10->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        line_money_2 = new QLineEdit(layoutWidget_2);
        line_money_2->setObjectName(QString::fromUtf8("line_money_2"));

        horizontalLayout_11->addWidget(line_money_2);

        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout_11->addWidget(label);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        line_descript_2 = new QLineEdit(layoutWidget_2);
        line_descript_2->setObjectName(QString::fromUtf8("line_descript_2"));

        horizontalLayout_12->addWidget(line_descript_2);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_12->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout_12);


        horizontalLayout_2->addLayout(verticalLayout_3);

        label_5 = new QLabel(add_expense);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(550, 60, 54, 12));
        label_5->setFont(font);
        ExpenseWidget = new QTableWidget(add_expense);
        if (ExpenseWidget->columnCount() < 5)
            ExpenseWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ExpenseWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ExpenseWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ExpenseWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ExpenseWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ExpenseWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        ExpenseWidget->setObjectName(QString::fromUtf8("ExpenseWidget"));
        ExpenseWidget->setGeometry(QRect(20, 100, 521, 171));
        line_2 = new QFrame(add_expense);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(580, 60, 391, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        dateEdit = new QDateEdit(add_expense);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(20, 60, 181, 21));
        dateEdit->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        dateEdit->setDateTime(QDateTime(QDate(2021, 11, 7), QTime(0, 0, 0)));
        dateEdit->setMinimumDate(QDate(1753, 9, 14));
        dateEdit->setCurrentSection(QDateTimeEdit::YearSection);
        line_3 = new QFrame(add_expense);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(550, 270, 421, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line = new QFrame(add_expense);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(940, 60, 51, 221));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        background = new QLabel(add_expense);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(-7, -10, 1011, 321));
        background->setStyleSheet(QString::fromUtf8("background-color:rgb(176, 193, 255)"));
        background->setFrameShape(QFrame::WinPanel);
        background_in = new QLabel(add_expense);
        background_in->setObjectName(QString::fromUtf8("background_in"));
        background_in->setGeometry(QRect(10, 50, 971, 241));
        background_in->setStyleSheet(QString::fromUtf8("background-color:rgb(243, 243, 255)"));
        background_in->setFrameShape(QFrame::WinPanel);
        layoutWidget = new QWidget(add_expense);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 121, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        expense_icon = new QLabel(layoutWidget);
        expense_icon->setObjectName(QString::fromUtf8("expense_icon"));
        expense_icon->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/expense.png)"));

        horizontalLayout_4->addWidget(expense_icon);

        expense = new QLabel(layoutWidget);
        expense->setObjectName(QString::fromUtf8("expense"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setPointSize(14);
        font1.setBold(true);
        expense->setFont(font1);

        horizontalLayout_4->addWidget(expense);

        pushButton = new QPushButton(add_expense);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(690, 250, 71, 24));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:rgb(0,0,0);\n"
""));
        DEL_btn = new QPushButton(add_expense);
        DEL_btn->setObjectName(QString::fromUtf8("DEL_btn"));
        DEL_btn->setGeometry(QRect(780, 250, 71, 24));
        DEL_btn->setAutoFillBackground(false);
        DEL_btn->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:rgb(0,0,0);"));
        pushButton_4 = new QPushButton(add_expense);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(870, 250, 71, 24));
        pushButton_4->setAutoFillBackground(false);
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:rgb(0,0,0);"));
        background->raise();
        background_in->raise();
        layoutWidget_2->raise();
        label_5->raise();
        ExpenseWidget->raise();
        line_2->raise();
        dateEdit->raise();
        line_3->raise();
        line->raise();
        layoutWidget->raise();
        pushButton->raise();
        DEL_btn->raise();
        pushButton_4->raise();

        retranslateUi(add_expense);

        QMetaObject::connectSlotsByName(add_expense);
    } // setupUi

    void retranslateUi(QDialog *add_expense)
    {
        add_expense->setWindowTitle(QCoreApplication::translate("add_expense", "Dialog", nullptr));
        category_2->setText(QCoreApplication::translate("add_expense", "Category", nullptr));
        money_2->setText(QCoreApplication::translate("add_expense", "Money", nullptr));
        description_2->setText(QCoreApplication::translate("add_expense", "Description", nullptr));
        CategoryBox->setItemText(0, QCoreApplication::translate("add_expense", "Food", nullptr));
        CategoryBox->setItemText(1, QCoreApplication::translate("add_expense", "Education", nullptr));
        CategoryBox->setItemText(2, QCoreApplication::translate("add_expense", "Transportation", nullptr));
        CategoryBox->setItemText(3, QCoreApplication::translate("add_expense", "Clothes", nullptr));
        CategoryBox->setItemText(4, QCoreApplication::translate("add_expense", "Entertainment", nullptr));
        CategoryBox->setItemText(5, QCoreApplication::translate("add_expense", "Communication fee", nullptr));
        CategoryBox->setItemText(6, QCoreApplication::translate("add_expense", "If you want add more input name and press +", nullptr));

        pushButton_5->setText(QCoreApplication::translate("add_expense", "+", nullptr));
        label->setText(QCoreApplication::translate("add_expense", "$", nullptr));
        label_3->setText(QString());
        label_5->setText(QCoreApplication::translate("add_expense", "Input", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ExpenseWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("add_expense", "#of Trans", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ExpenseWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("add_expense", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ExpenseWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("add_expense", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ExpenseWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("add_expense", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = ExpenseWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("add_expense", "Descriptions", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("add_expense", "yyyy-MMM-dd", nullptr));
        background->setText(QString());
        background_in->setText(QString());
        expense_icon->setText(QString());
        expense->setText(QCoreApplication::translate("add_expense", "Exspense", nullptr));
        pushButton->setText(QCoreApplication::translate("add_expense", "Save", nullptr));
        DEL_btn->setText(QCoreApplication::translate("add_expense", "Delete", nullptr));
        pushButton_4->setText(QCoreApplication::translate("add_expense", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_expense: public Ui_add_expense {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_EXPENSE_H
