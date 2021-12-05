/********************************************************************************
** Form generated from reading UI file 'monitoring2.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITORING2_H
#define UI_MONITORING2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Monitoring2
{
public:
    QLabel *label;
    QTableWidget *tableWidget_2;
    QTableWidget *displaywidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *update_btn;
    QPushButton *pushButton;
    QLabel *background;
    QLabel *background_in;
    QLabel *label_2;
    QSpinBox *spinBox;

    void setupUi(QDialog *Monitoring2)
    {
        if (Monitoring2->objectName().isEmpty())
            Monitoring2->setObjectName(QString::fromUtf8("Monitoring2"));
        Monitoring2->resize(487, 428);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        Monitoring2->setFont(font);
        label = new QLabel(Monitoring2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 121, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setPointSize(11);
        font1.setBold(true);
        label->setFont(font1);
        tableWidget_2 = new QTableWidget(Monitoring2);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(20, 320, 431, 51));
        displaywidget = new QTableWidget(Monitoring2);
        if (displaywidget->columnCount() < 3)
            displaywidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        displaywidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        displaywidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        displaywidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (displaywidget->rowCount() < 12)
            displaywidget->setRowCount(12);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        displaywidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        displaywidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        displaywidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        displaywidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        displaywidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        displaywidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        displaywidget->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        displaywidget->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        displaywidget->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        displaywidget->setVerticalHeaderItem(9, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        displaywidget->setVerticalHeaderItem(10, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        displaywidget->setVerticalHeaderItem(11, __qtablewidgetitem14);
        displaywidget->setObjectName(QString::fromUtf8("displaywidget"));
        displaywidget->setGeometry(QRect(20, 80, 431, 251));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\352\265\264\353\246\274")});
        displaywidget->setFont(font2);
        layoutWidget = new QWidget(Monitoring2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 390, 175, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        update_btn = new QPushButton(layoutWidget);
        update_btn->setObjectName(QString::fromUtf8("update_btn"));
        update_btn->setFont(font2);
        update_btn->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:rgb(0,0,0)"));

        horizontalLayout_2->addWidget(update_btn);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:rgb(0,0,0);"));

        horizontalLayout_2->addWidget(pushButton);

        background = new QLabel(Monitoring2);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(-7, -4, 501, 431));
        background->setStyleSheet(QString::fromUtf8("background-color:rgb(176, 193, 255)"));
        background_in = new QLabel(Monitoring2);
        background_in->setObjectName(QString::fromUtf8("background_in"));
        background_in->setGeometry(QRect(10, 40, 461, 381));
        background_in->setStyleSheet(QString::fromUtf8("background-color:rgb(243, 243, 255)"));
        background_in->setFrameShape(QFrame::WinPanel);
        label_2 = new QLabel(Monitoring2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 137, 24));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\352\265\264\353\246\274")});
        font3.setPointSize(10);
        font3.setBold(false);
        label_2->setFont(font3);
        spinBox = new QSpinBox(Monitoring2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(80, 50, 91, 24));
        spinBox->setFont(font2);
        spinBox->setMinimum(2000);
        spinBox->setMaximum(2030);
        spinBox->setValue(2021);
        background->raise();
        background_in->raise();
        layoutWidget->raise();
        label->raise();
        tableWidget_2->raise();
        displaywidget->raise();
        label_2->raise();
        spinBox->raise();
        spinBox->raise();
        label_2->raise();

        retranslateUi(Monitoring2);

        QMetaObject::connectSlotsByName(Monitoring2);
    } // setupUi

    void retranslateUi(QDialog *Monitoring2)
    {
        Monitoring2->setWindowTitle(QCoreApplication::translate("Monitoring2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Monitoring2", "<By year and month>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = displaywidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Monitoring2", "Total Plan", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = displaywidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Monitoring2", "Total Expense", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = displaywidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Monitoring2", "Evaluation", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = displaywidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Monitoring2", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = displaywidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Monitoring2", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = displaywidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Monitoring2", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = displaywidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Monitoring2", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = displaywidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Monitoring2", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = displaywidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Monitoring2", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = displaywidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Monitoring2", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = displaywidget->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Monitoring2", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = displaywidget->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Monitoring2", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = displaywidget->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Monitoring2", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = displaywidget->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Monitoring2", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = displaywidget->verticalHeaderItem(11);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Monitoring2", "12", nullptr));
        update_btn->setText(QCoreApplication::translate("Monitoring2", "Update", nullptr));
        pushButton->setText(QCoreApplication::translate("Monitoring2", "Cancel", nullptr));
        background->setText(QString());
        background_in->setText(QString());
        label_2->setText(QCoreApplication::translate("Monitoring2", "  <Year>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Monitoring2: public Ui_Monitoring2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITORING2_H
