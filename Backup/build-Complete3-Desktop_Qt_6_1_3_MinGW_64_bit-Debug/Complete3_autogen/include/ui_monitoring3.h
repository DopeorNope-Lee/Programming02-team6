/********************************************************************************
** Form generated from reading UI file 'monitoring3.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITORING3_H
#define UI_MONITORING3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Monitoring3
{
public:
    QFrame *line;
    QLabel *category;
    QPushButton *cancleButton;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *plan_label;
    QLabel *expense_label;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *Plantable;
    QTableWidget *Expensetable;
    QLabel *background;
    QLabel *background_in;
    QComboBox *monthspinBox;
    QLabel *month_label;
    QSpinBox *YearspinBox;
    QLabel *year_label;

    void setupUi(QDialog *Monitoring3)
    {
        if (Monitoring3->objectName().isEmpty())
            Monitoring3->setObjectName(QString::fromUtf8("Monitoring3"));
        Monitoring3->resize(558, 405);
        line = new QFrame(Monitoring3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(270, 80, 20, 281));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        category = new QLabel(Monitoring3);
        category->setObjectName(QString::fromUtf8("category"));
        category->setGeometry(QRect(10, 5, 91, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(11);
        font.setBold(true);
        category->setFont(font);
        cancleButton = new QPushButton(Monitoring3);
        cancleButton->setObjectName(QString::fromUtf8("cancleButton"));
        cancleButton->setGeometry(QRect(460, 360, 80, 20));
        cancleButton->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:rgb(0,0,0)"));
        pushButton = new QPushButton(Monitoring3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 40, 86, 24));
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:rgb(0,0,0)"));
        layoutWidget = new QWidget(Monitoring3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 80, 521, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        plan_label = new QLabel(layoutWidget);
        plan_label->setObjectName(QString::fromUtf8("plan_label"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\352\265\264\353\246\274")});
        font1.setPointSize(8);
        plan_label->setFont(font1);

        horizontalLayout_2->addWidget(plan_label);

        expense_label = new QLabel(layoutWidget);
        expense_label->setObjectName(QString::fromUtf8("expense_label"));
        expense_label->setFont(font1);

        horizontalLayout_2->addWidget(expense_label);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Plantable = new QTableWidget(layoutWidget);
        if (Plantable->columnCount() < 2)
            Plantable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        Plantable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        Plantable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        Plantable->setObjectName(QString::fromUtf8("Plantable"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\352\265\264\353\246\274")});
        Plantable->setFont(font2);

        horizontalLayout_3->addWidget(Plantable);

        Expensetable = new QTableWidget(layoutWidget);
        if (Expensetable->columnCount() < 2)
            Expensetable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        Expensetable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        Expensetable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        Expensetable->setObjectName(QString::fromUtf8("Expensetable"));
        Expensetable->setFont(font2);

        horizontalLayout_3->addWidget(Expensetable);


        verticalLayout->addLayout(horizontalLayout_3);

        background = new QLabel(Monitoring3);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(-7, -9, 571, 421));
        background->setStyleSheet(QString::fromUtf8("background-color:rgb(176, 193, 255)"));
        background->setFrameShape(QFrame::WinPanel);
        background_in = new QLabel(Monitoring3);
        background_in->setObjectName(QString::fromUtf8("background_in"));
        background_in->setGeometry(QRect(10, 31, 541, 361));
        background_in->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255)"));
        background_in->setFrameShape(QFrame::WinPanel);
        monthspinBox = new QComboBox(Monitoring3);
        monthspinBox->addItem(QString());
        monthspinBox->addItem(QString());
        monthspinBox->addItem(QString());
        monthspinBox->addItem(QString());
        monthspinBox->addItem(QString());
        monthspinBox->addItem(QString());
        monthspinBox->addItem(QString());
        monthspinBox->addItem(QString());
        monthspinBox->addItem(QString());
        monthspinBox->addItem(QString());
        monthspinBox->addItem(QString());
        monthspinBox->addItem(QString());
        monthspinBox->setObjectName(QString::fromUtf8("monthspinBox"));
        monthspinBox->setGeometry(QRect(210, 40, 61, 23));
        month_label = new QLabel(Monitoring3);
        month_label->setObjectName(QString::fromUtf8("month_label"));
        month_label->setGeometry(QRect(160, 40, 82, 24));
        YearspinBox = new QSpinBox(Monitoring3);
        YearspinBox->setObjectName(QString::fromUtf8("YearspinBox"));
        YearspinBox->setGeometry(QRect(50, 40, 101, 24));
        YearspinBox->setMinimum(2000);
        YearspinBox->setMaximum(2030);
        YearspinBox->setValue(2021);
        year_label = new QLabel(Monitoring3);
        year_label->setObjectName(QString::fromUtf8("year_label"));
        year_label->setGeometry(QRect(20, 40, 41, 24));
        background->raise();
        background_in->raise();
        line->raise();
        category->raise();
        cancleButton->raise();
        pushButton->raise();
        layoutWidget->raise();
        monthspinBox->raise();
        month_label->raise();
        YearspinBox->raise();
        year_label->raise();

        retranslateUi(Monitoring3);

        QMetaObject::connectSlotsByName(Monitoring3);
    } // setupUi

    void retranslateUi(QDialog *Monitoring3)
    {
        Monitoring3->setWindowTitle(QCoreApplication::translate("Monitoring3", "Dialog", nullptr));
        category->setText(QCoreApplication::translate("Monitoring3", "<By category>", nullptr));
        cancleButton->setText(QCoreApplication::translate("Monitoring3", "Close", nullptr));
        pushButton->setText(QCoreApplication::translate("Monitoring3", "Import", nullptr));
        plan_label->setText(QCoreApplication::translate("Monitoring3", "<Plan>", nullptr));
        expense_label->setText(QCoreApplication::translate("Monitoring3", "<Expense>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = Plantable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Monitoring3", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = Plantable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Monitoring3", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = Expensetable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Monitoring3", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = Expensetable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Monitoring3", "Amount", nullptr));
        background->setText(QString());
        background_in->setText(QString());
        monthspinBox->setItemText(0, QCoreApplication::translate("Monitoring3", "Jan", nullptr));
        monthspinBox->setItemText(1, QCoreApplication::translate("Monitoring3", "Feb", nullptr));
        monthspinBox->setItemText(2, QCoreApplication::translate("Monitoring3", "Mar", nullptr));
        monthspinBox->setItemText(3, QCoreApplication::translate("Monitoring3", "Apr", nullptr));
        monthspinBox->setItemText(4, QCoreApplication::translate("Monitoring3", "May", nullptr));
        monthspinBox->setItemText(5, QCoreApplication::translate("Monitoring3", "Jun", nullptr));
        monthspinBox->setItemText(6, QCoreApplication::translate("Monitoring3", "July", nullptr));
        monthspinBox->setItemText(7, QCoreApplication::translate("Monitoring3", "Aug", nullptr));
        monthspinBox->setItemText(8, QCoreApplication::translate("Monitoring3", "Sep", nullptr));
        monthspinBox->setItemText(9, QCoreApplication::translate("Monitoring3", "Oct", nullptr));
        monthspinBox->setItemText(10, QCoreApplication::translate("Monitoring3", "Nov", nullptr));
        monthspinBox->setItemText(11, QCoreApplication::translate("Monitoring3", "Dec", nullptr));

        monthspinBox->setCurrentText(QCoreApplication::translate("Monitoring3", "Jan", nullptr));
        monthspinBox->setPlaceholderText(QString());
        month_label->setText(QCoreApplication::translate("Monitoring3", "Month", nullptr));
        year_label->setText(QCoreApplication::translate("Monitoring3", "Year", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Monitoring3: public Ui_Monitoring3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITORING3_H
