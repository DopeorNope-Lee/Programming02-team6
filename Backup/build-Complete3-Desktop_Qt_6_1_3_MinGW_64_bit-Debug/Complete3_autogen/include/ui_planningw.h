/********************************************************************************
** Form generated from reading UI file 'planningw.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANNINGW_H
#define UI_PLANNINGW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_Planningw
{
public:
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *category_2;
    QLabel *money_2;
    QLabel *description_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *CategoryBox;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *line_money_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *line_descript_2;
    QLabel *label_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *month;
    QComboBox *combo_month;
    QPushButton *cancle_Button_3;
    QPushButton *pushButton;
    QFrame *line_3;
    QPushButton *deleteButton_2;
    QLabel *label_5;
    QLabel *planning;
    QFrame *line_2;
    QTableWidget *planningWidget;
    QPushButton *addButton;
    QLabel *label_7;
    QFrame *line;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *year;
    QLineEdit *line_year;
    QLabel *label_2;

    void setupUi(QWidget *Planningw)
    {
        if (Planningw->objectName().isEmpty())
            Planningw->setObjectName(QString::fromUtf8("Planningw"));
        Planningw->resize(740, 300);
        layoutWidget_4 = new QWidget(Planningw);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(350, 230, 171, 25));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        layoutWidget = new QWidget(Planningw);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(390, 70, 301, 157));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        category_2 = new QLabel(layoutWidget);
        category_2->setObjectName(QString::fromUtf8("category_2"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setBold(true);
        category_2->setFont(font);

        verticalLayout->addWidget(category_2);

        money_2 = new QLabel(layoutWidget);
        money_2->setObjectName(QString::fromUtf8("money_2"));
        money_2->setFont(font);

        verticalLayout->addWidget(money_2);

        description_2 = new QLabel(layoutWidget);
        description_2->setObjectName(QString::fromUtf8("description_2"));
        description_2->setFont(font);

        verticalLayout->addWidget(description_2);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        CategoryBox = new QComboBox(layoutWidget);
        CategoryBox->addItem(QString());
        CategoryBox->addItem(QString());
        CategoryBox->addItem(QString());
        CategoryBox->addItem(QString());
        CategoryBox->addItem(QString());
        CategoryBox->addItem(QString());
        CategoryBox->addItem(QString());
        CategoryBox->setObjectName(QString::fromUtf8("CategoryBox"));

        horizontalLayout_10->addWidget(CategoryBox);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        line_money_2 = new QLineEdit(layoutWidget);
        line_money_2->setObjectName(QString::fromUtf8("line_money_2"));

        horizontalLayout_11->addWidget(line_money_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

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

        layoutWidget_2 = new QWidget(Planningw);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(160, 50, 171, 25));
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

        cancle_Button_3 = new QPushButton(Planningw);
        cancle_Button_3->setObjectName(QString::fromUtf8("cancle_Button_3"));
        cancle_Button_3->setGeometry(QRect(610, 230, 80, 20));
        pushButton = new QPushButton(Planningw);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(690, 80, 21, 21));
        line_3 = new QFrame(Planningw);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(390, 250, 331, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        deleteButton_2 = new QPushButton(Planningw);
        deleteButton_2->setObjectName(QString::fromUtf8("deleteButton_2"));
        deleteButton_2->setGeometry(QRect(470, 230, 51, 20));
        label_5 = new QLabel(Planningw);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(390, 50, 54, 12));
        label_5->setFont(font);
        planning = new QLabel(Planningw);
        planning->setObjectName(QString::fromUtf8("planning"));
        planning->setGeometry(QRect(10, 10, 581, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setPointSize(12);
        font1.setBold(true);
        planning->setFont(font1);
        planning->setFrameShape(QFrame::WinPanel);
        line_2 = new QFrame(Planningw);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(420, 50, 311, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        planningWidget = new QTableWidget(Planningw);
        if (planningWidget->columnCount() < 3)
            planningWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        planningWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        planningWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        planningWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        planningWidget->setObjectName(QString::fromUtf8("planningWidget"));
        planningWidget->setGeometry(QRect(10, 90, 361, 191));
        addButton = new QPushButton(Planningw);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(390, 230, 61, 20));
        label_7 = new QLabel(Planningw);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(580, 230, 54, 12));
        label_7->setFont(font);
        line = new QFrame(Planningw);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(690, 50, 51, 211));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget_3 = new QWidget(Planningw);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 50, 314, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        year = new QLabel(layoutWidget_3);
        year->setObjectName(QString::fromUtf8("year"));

        horizontalLayout_4->addWidget(year);

        line_year = new QLineEdit(layoutWidget_3);
        line_year->setObjectName(QString::fromUtf8("line_year"));

        horizontalLayout_4->addWidget(line_year);

        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);


        retranslateUi(Planningw);

        QMetaObject::connectSlotsByName(Planningw);
    } // setupUi

    void retranslateUi(QWidget *Planningw)
    {
        Planningw->setWindowTitle(QCoreApplication::translate("Planningw", "Form", nullptr));
        category_2->setText(QCoreApplication::translate("Planningw", "Category", nullptr));
        money_2->setText(QCoreApplication::translate("Planningw", "Money", nullptr));
        description_2->setText(QCoreApplication::translate("Planningw", "Description", nullptr));
        CategoryBox->setItemText(0, QCoreApplication::translate("Planningw", "Food", nullptr));
        CategoryBox->setItemText(1, QCoreApplication::translate("Planningw", "Education", nullptr));
        CategoryBox->setItemText(2, QCoreApplication::translate("Planningw", "Transportation", nullptr));
        CategoryBox->setItemText(3, QCoreApplication::translate("Planningw", "Clothes", nullptr));
        CategoryBox->setItemText(4, QCoreApplication::translate("Planningw", "Entertainment", nullptr));
        CategoryBox->setItemText(5, QCoreApplication::translate("Planningw", "Communication fee", nullptr));
        CategoryBox->setItemText(6, QCoreApplication::translate("Planningw", "If you want add more press +", nullptr));

        label->setText(QCoreApplication::translate("Planningw", "$", nullptr));
        label_3->setText(QString());
        month->setText(QCoreApplication::translate("Planningw", "Month", nullptr));
        combo_month->setItemText(0, QCoreApplication::translate("Planningw", "January", nullptr));
        combo_month->setItemText(1, QCoreApplication::translate("Planningw", "February", nullptr));
        combo_month->setItemText(2, QCoreApplication::translate("Planningw", "March", nullptr));
        combo_month->setItemText(3, QCoreApplication::translate("Planningw", "April", nullptr));
        combo_month->setItemText(4, QCoreApplication::translate("Planningw", "May", nullptr));
        combo_month->setItemText(5, QCoreApplication::translate("Planningw", "June", nullptr));
        combo_month->setItemText(6, QCoreApplication::translate("Planningw", "July", nullptr));
        combo_month->setItemText(7, QCoreApplication::translate("Planningw", "August", nullptr));
        combo_month->setItemText(8, QCoreApplication::translate("Planningw", "September", nullptr));
        combo_month->setItemText(9, QCoreApplication::translate("Planningw", "October", nullptr));
        combo_month->setItemText(10, QCoreApplication::translate("Planningw", "November", nullptr));
        combo_month->setItemText(11, QCoreApplication::translate("Planningw", "December", nullptr));

        cancle_Button_3->setText(QCoreApplication::translate("Planningw", "Cancle", nullptr));
        pushButton->setText(QCoreApplication::translate("Planningw", "+", nullptr));
        deleteButton_2->setText(QCoreApplication::translate("Planningw", "Delete", nullptr));
        label_5->setText(QCoreApplication::translate("Planningw", "Input", nullptr));
        planning->setText(QCoreApplication::translate("Planningw", "Planning", nullptr));
        QTableWidgetItem *___qtablewidgetitem = planningWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Planningw", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = planningWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Planningw", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = planningWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Planningw", "Descriptions", nullptr));
        addButton->setText(QCoreApplication::translate("Planningw", "Add", nullptr));
        label_7->setText(QCoreApplication::translate("Planningw", "Input", nullptr));
        year->setText(QCoreApplication::translate("Planningw", "Year ", nullptr));
        line_year->setText(QCoreApplication::translate("Planningw", "2021", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Planningw: public Ui_Planningw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANNINGW_H
