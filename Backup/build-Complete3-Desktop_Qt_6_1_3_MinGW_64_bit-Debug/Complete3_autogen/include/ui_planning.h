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
#include <QtWidgets/QComboBox>
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

class Ui_Planning
{
public:
    QFrame *line;
    QLabel *planning;
    QFrame *line_2;
    QFrame *line_3;
    QTableWidget *planningWidget;
    QLabel *label_5;
    QWidget *layoutWidget;
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
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *line_money_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *line_descript_2;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *year;
    QLineEdit *Text_year;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *month;
    QComboBox *combo_month;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *addButton;
    QPushButton *deleteButton_2;
    QPushButton *cancle_Button_3;

    void setupUi(QDialog *Planning)
    {
        if (Planning->objectName().isEmpty())
            Planning->setObjectName(QString::fromUtf8("Planning"));
        Planning->resize(783, 325);
        line = new QFrame(Planning);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(730, 70, 51, 211));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        planning = new QLabel(Planning);
        planning->setObjectName(QString::fromUtf8("planning"));
        planning->setGeometry(QRect(50, 30, 711, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(12);
        font.setBold(true);
        planning->setFont(font);
        planning->setFrameShape(QFrame::WinPanel);
        line_2 = new QFrame(Planning);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(460, 70, 311, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(Planning);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(430, 270, 331, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        planningWidget = new QTableWidget(Planning);
        if (planningWidget->columnCount() < 3)
            planningWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        planningWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        planningWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        planningWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        planningWidget->setObjectName(QString::fromUtf8("planningWidget"));
        planningWidget->setGeometry(QRect(50, 110, 361, 191));
        label_5 = new QLabel(Planning);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(430, 70, 54, 12));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setBold(true);
        label_5->setFont(font1);
        layoutWidget = new QWidget(Planning);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(430, 90, 321, 157));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        category_2 = new QLabel(layoutWidget);
        category_2->setObjectName(QString::fromUtf8("category_2"));
        category_2->setFont(font1);

        verticalLayout->addWidget(category_2);

        money_2 = new QLabel(layoutWidget);
        money_2->setObjectName(QString::fromUtf8("money_2"));
        money_2->setFont(font1);

        verticalLayout->addWidget(money_2);

        description_2 = new QLabel(layoutWidget);
        description_2->setObjectName(QString::fromUtf8("description_2"));
        description_2->setFont(font1);

        verticalLayout->addWidget(description_2);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        CategoryBox = new QComboBox(layoutWidget);
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
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(80, 24));
        pushButton->setMaximumSize(QSize(16777215, 24));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_10->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        line_money_2 = new QLineEdit(layoutWidget);
        line_money_2->setObjectName(QString::fromUtf8("line_money_2"));

        horizontalLayout_11->addWidget(line_money_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        horizontalLayout_11->addWidget(label);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        line_descript_2 = new QLineEdit(layoutWidget);
        line_descript_2->setObjectName(QString::fromUtf8("line_descript_2"));

        horizontalLayout_12->addWidget(line_descript_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_12->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout_12);


        horizontalLayout_2->addLayout(verticalLayout_3);

        layoutWidget1 = new QWidget(Planning);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 70, 151, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        year = new QLabel(layoutWidget1);
        year->setObjectName(QString::fromUtf8("year"));

        horizontalLayout_4->addWidget(year);

        Text_year = new QLineEdit(layoutWidget1);
        Text_year->setObjectName(QString::fromUtf8("Text_year"));

        horizontalLayout_4->addWidget(Text_year);

        layoutWidget_2 = new QWidget(Planning);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(200, 70, 171, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        month = new QLabel(layoutWidget_2);
        month->setObjectName(QString::fromUtf8("month"));

        horizontalLayout_3->addWidget(month);

        combo_month = new QComboBox(layoutWidget_2);
        combo_month->addItem(QString());
        combo_month->addItem(QString());
        combo_month->addItem(QString());
        combo_month->addItem(QString());
        combo_month->addItem(QString());
        combo_month->addItem(QString());
        combo_month->addItem(QString());
        combo_month->addItem(QString());
        combo_month->addItem(QString());
        combo_month->addItem(QString());
        combo_month->addItem(QString());
        combo_month->addItem(QString());
        combo_month->setObjectName(QString::fromUtf8("combo_month"));

        horizontalLayout_3->addWidget(combo_month);

        layoutWidget_4 = new QWidget(Planning);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(460, 250, 256, 26));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(layoutWidget_4);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout_6->addWidget(addButton);

        deleteButton_2 = new QPushButton(layoutWidget_4);
        deleteButton_2->setObjectName(QString::fromUtf8("deleteButton_2"));

        horizontalLayout_6->addWidget(deleteButton_2);

        cancle_Button_3 = new QPushButton(layoutWidget_4);
        cancle_Button_3->setObjectName(QString::fromUtf8("cancle_Button_3"));

        horizontalLayout_6->addWidget(cancle_Button_3);


        retranslateUi(Planning);

        QMetaObject::connectSlotsByName(Planning);
    } // setupUi

    void retranslateUi(QDialog *Planning)
    {
        Planning->setWindowTitle(QCoreApplication::translate("Planning", "Dialog", nullptr));
        planning->setText(QCoreApplication::translate("Planning", "Planning", nullptr));
        QTableWidgetItem *___qtablewidgetitem = planningWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Planning", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = planningWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Planning", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = planningWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Planning", "Descriptions", nullptr));
        label_5->setText(QCoreApplication::translate("Planning", "Input", nullptr));
        category_2->setText(QCoreApplication::translate("Planning", "Category", nullptr));
        money_2->setText(QCoreApplication::translate("Planning", "Money", nullptr));
        description_2->setText(QCoreApplication::translate("Planning", "Description", nullptr));
        CategoryBox->setItemText(0, QCoreApplication::translate("Planning", "Food", nullptr));
        CategoryBox->setItemText(1, QCoreApplication::translate("Planning", "Education", nullptr));
        CategoryBox->setItemText(2, QCoreApplication::translate("Planning", "Transportation", nullptr));
        CategoryBox->setItemText(3, QCoreApplication::translate("Planning", "Clothes", nullptr));
        CategoryBox->setItemText(4, QCoreApplication::translate("Planning", "Entertainment", nullptr));
        CategoryBox->setItemText(5, QCoreApplication::translate("Planning", "Communication fee", nullptr));
        CategoryBox->setItemText(6, QCoreApplication::translate("Planning", "If you want add more input name and press +", nullptr));

        pushButton->setText(QCoreApplication::translate("Planning", "+", nullptr));
        label->setText(QCoreApplication::translate("Planning", "$", nullptr));
        label_3->setText(QString());
        year->setText(QCoreApplication::translate("Planning", "Year ", nullptr));
        month->setText(QCoreApplication::translate("Planning", "Month", nullptr));
        combo_month->setItemText(0, QCoreApplication::translate("Planning", "Jan", nullptr));
        combo_month->setItemText(1, QCoreApplication::translate("Planning", "Feb", nullptr));
        combo_month->setItemText(2, QCoreApplication::translate("Planning", "Mar", nullptr));
        combo_month->setItemText(3, QCoreApplication::translate("Planning", "Apr", nullptr));
        combo_month->setItemText(4, QCoreApplication::translate("Planning", "May", nullptr));
        combo_month->setItemText(5, QCoreApplication::translate("Planning", "Jun", nullptr));
        combo_month->setItemText(6, QCoreApplication::translate("Planning", "Jul", nullptr));
        combo_month->setItemText(7, QCoreApplication::translate("Planning", "Aug", nullptr));
        combo_month->setItemText(8, QCoreApplication::translate("Planning", "Sep", nullptr));
        combo_month->setItemText(9, QCoreApplication::translate("Planning", "Oct", nullptr));
        combo_month->setItemText(10, QCoreApplication::translate("Planning", "Nov", nullptr));
        combo_month->setItemText(11, QCoreApplication::translate("Planning", "Dec", nullptr));

        addButton->setText(QCoreApplication::translate("Planning", "Add", nullptr));
        deleteButton_2->setText(QCoreApplication::translate("Planning", "Delete", nullptr));
        cancle_Button_3->setText(QCoreApplication::translate("Planning", "Cancle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Planning: public Ui_Planning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANNING_H
