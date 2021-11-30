/********************************************************************************
** Form generated from reading UI file 'monitoring.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITORING_H
#define UI_MONITORING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Monitoring
{
public:
    QLabel *mornitoring;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *background;
    QLabel *background_in;
    QLabel *monitoring_icon1;
    QLabel *monitoring_icon2;
    QLabel *monitoring_icon3;
    QLabel *monitoring_icon;

    void setupUi(QDialog *Monitoring)
    {
        if (Monitoring->objectName().isEmpty())
            Monitoring->setObjectName(QString::fromUtf8("Monitoring"));
        Monitoring->resize(573, 317);
        mornitoring = new QLabel(Monitoring);
        mornitoring->setObjectName(QString::fromUtf8("mornitoring"));
        mornitoring->setGeometry(QRect(60, 10, 531, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(14);
        font.setBold(true);
        mornitoring->setFont(font);
        mornitoring->setFrameShape(QFrame::NoFrame);
        pushButton = new QPushButton(Monitoring);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 190, 111, 20));
        pushButton_4 = new QPushButton(Monitoring);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(460, 260, 80, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\352\265\264\353\246\274")});
        font1.setPointSize(10);
        font1.setBold(false);
        pushButton_4->setFont(font1);
        pushButton_2 = new QPushButton(Monitoring);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 190, 101, 20));
        pushButton_3 = new QPushButton(Monitoring);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(400, 190, 101, 20));
        background = new QLabel(Monitoring);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 581, 321));
        background->setStyleSheet(QString::fromUtf8("background-color:rgb(176, 193, 255)"));
        background_in = new QLabel(Monitoring);
        background_in->setObjectName(QString::fromUtf8("background_in"));
        background_in->setGeometry(QRect(20, 70, 521, 161));
        background_in->setStyleSheet(QString::fromUtf8("background-color:rgb(243, 243, 255)"));
        background_in->setFrameShape(QFrame::WinPanel);
        monitoring_icon1 = new QLabel(Monitoring);
        monitoring_icon1->setObjectName(QString::fromUtf8("monitoring_icon1"));
        monitoring_icon1->setGeometry(QRect(50, 80, 91, 91));
        monitoring_icon1->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/expense1.png)"));
        monitoring_icon2 = new QLabel(Monitoring);
        monitoring_icon2->setObjectName(QString::fromUtf8("monitoring_icon2"));
        monitoring_icon2->setGeometry(QRect(230, 90, 91, 91));
        monitoring_icon2->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/expense2.png)"));
        monitoring_icon3 = new QLabel(Monitoring);
        monitoring_icon3->setObjectName(QString::fromUtf8("monitoring_icon3"));
        monitoring_icon3->setGeometry(QRect(400, 80, 91, 91));
        monitoring_icon3->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/expense3.png)"));
        monitoring_icon = new QLabel(Monitoring);
        monitoring_icon->setObjectName(QString::fromUtf8("monitoring_icon"));
        monitoring_icon->setGeometry(QRect(10, 10, 54, 41));
        monitoring_icon->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/monitoring.png)"));
        background->raise();
        background_in->raise();
        pushButton->raise();
        pushButton_4->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        monitoring_icon1->raise();
        monitoring_icon2->raise();
        monitoring_icon3->raise();
        monitoring_icon->raise();
        mornitoring->raise();

        retranslateUi(Monitoring);

        QMetaObject::connectSlotsByName(Monitoring);
    } // setupUi

    void retranslateUi(QDialog *Monitoring)
    {
        Monitoring->setWindowTitle(QCoreApplication::translate("Monitoring", "Dialog", nullptr));
        mornitoring->setText(QCoreApplication::translate("Monitoring", "Monitoring", nullptr));
        pushButton->setText(QCoreApplication::translate("Monitoring", "Total expense", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Monitoring", "Close", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Monitoring", "By Year,Month", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Monitoring", "By Category", nullptr));
        background->setText(QString());
        background_in->setText(QString());
        monitoring_icon1->setText(QString());
        monitoring_icon2->setText(QString());
        monitoring_icon3->setText(QString());
        monitoring_icon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Monitoring: public Ui_Monitoring {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITORING_H
