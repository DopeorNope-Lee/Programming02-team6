/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *mainpage;
    QLabel *main_label;
    QPushButton *main_planning_btn;
    QPushButton *main_expense_btn;
    QPushButton *main_monit_btn;
    QPushButton *main_exit_btn;
    QWidget *planpage;
    QLabel *plan_label;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *plan_horizontalLayout;
    QPushButton *plan_home_btn;
    QPushButton *plan_home_btn_2;
    QPushButton *plan_expense_btn;
    QPushButton *planmonit_btn;
    QPushButton *plan_exit_btn;
    QLabel *plan_label_5;
    QSpinBox *plan_spinBox;
    QFrame *plan_line;
    QFrame *plan_line_2;
    QFrame *plan_line_3;
    QTableWidget *planningWidget;
    QLabel *plan_year;
    QLabel *plan_label_6;
    QLabel *planning_name;
    QPushButton *plan_addButton;
    QPushButton *plan_delete;
    QComboBox *plan_combo_month;
    QLabel *plan_month;
    QComboBox *plan_CategoryBox;
    QPushButton *plan_plus_btn;
    QLabel *plan_category_2;
    QLabel *plan_money_2;
    QLabel *plan_description_2;
    QLineEdit *plan_line_money;
    QLabel *plan_label_3;
    QLineEdit *plan_line_descript;
    QWidget *expensepage;
    QLabel *expense_lable;
    QLabel *expense_lable_3;
    QDateEdit *expense_dateEdit;
    QTableWidget *ExpenseWidget;
    QFrame *expense_line;
    QFrame *expense_line_2;
    QLabel *expense_lable_2;
    QPushButton *expense_Save_btn;
    QPushButton *expense_delete_btn;
    QFrame *expense_line_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *expense_horizontalLayout;
    QPushButton *Expense_home_btn;
    QPushButton *Expense_planning_btn;
    QPushButton *Expense_planning_btn_2;
    QPushButton *expense_monit_btn;
    QPushButton *exepense_exit_btn;
    QLabel *expense_name;
    QComboBox *expense_CategoryBox;
    QPushButton *expense_plus_btn;
    QLabel *expense_category;
    QLabel *money_4;
    QLabel *expense_description;
    QLineEdit *expense_line_money;
    QLabel *expense_label;
    QLineEdit *expense_line_descript;
    QWidget *mon_page;
    QPushButton *by_period_btn;
    QLabel *monitoring_icon2;
    QPushButton *Total_ex_btn;
    QLabel *monitoring_icon1;
    QLabel *background_in_2;
    QLabel *monitoring_icon3;
    QLabel *background_2;
    QPushButton *By_category_btn;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *monit_horizontalLayout;
    QPushButton *monit_home_btn;
    QPushButton *monit_plan_btn;
    QPushButton *monit_expense_btn;
    QPushButton *monit_exit_btn_2;
    QPushButton *monit_exit_btn;
    QWidget *layoutWidget;
    QHBoxLayout *monit_horizontalLayout_2;
    QLabel *momitoring_name;
    QWidget *page;
    QListWidget *Cate_list;
    QPushButton *Category_btn;
    QPushButton *Category_btn_2;
    QPushButton *Category_btn2;
    QLineEdit *cateline_edit;
    QLabel *cate_label;
    QLabel *cate_label_2;
    QLabel *cate_label_3;
    QLabel *cate_label_4;
    QLabel *background_in;
    QLabel *background;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1060, 600);
        MainWindow->setMinimumSize(QSize(1060, 600));
        MainWindow->setMaximumSize(QSize(1060, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1061, 571));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        mainpage = new QWidget();
        mainpage->setObjectName(QString::fromUtf8("mainpage"));
        main_label = new QLabel(mainpage);
        main_label->setObjectName(QString::fromUtf8("main_label"));
        main_label->setGeometry(QRect(-10, 0, 1071, 601));
        main_label->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/mainwindow1 (1).png)\n"
""));
        main_planning_btn = new QPushButton(mainpage);
        main_planning_btn->setObjectName(QString::fromUtf8("main_planning_btn"));
        main_planning_btn->setGeometry(QRect(50, 480, 201, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(18);
        font.setBold(true);
        main_planning_btn->setFont(font);
        main_planning_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button.png)"));
        main_expense_btn = new QPushButton(mainpage);
        main_expense_btn->setObjectName(QString::fromUtf8("main_expense_btn"));
        main_expense_btn->setGeometry(QRect(310, 480, 201, 51));
        main_expense_btn->setFont(font);
        main_expense_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button.png)"));
        main_monit_btn = new QPushButton(mainpage);
        main_monit_btn->setObjectName(QString::fromUtf8("main_monit_btn"));
        main_monit_btn->setGeometry(QRect(560, 480, 201, 51));
        main_monit_btn->setFont(font);
        main_monit_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button.png)"));
        main_exit_btn = new QPushButton(mainpage);
        main_exit_btn->setObjectName(QString::fromUtf8("main_exit_btn"));
        main_exit_btn->setGeometry(QRect(810, 480, 201, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setPointSize(16);
        font1.setBold(true);
        main_exit_btn->setFont(font1);
        main_exit_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button.png)"));
        stackedWidget->addWidget(mainpage);
        planpage = new QWidget();
        planpage->setObjectName(QString::fromUtf8("planpage"));
        plan_label = new QLabel(planpage);
        plan_label->setObjectName(QString::fromUtf8("plan_label"));
        plan_label->setGeometry(QRect(0, 0, 1061, 571));
        plan_label->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/image-p.png)"));
        horizontalLayoutWidget_3 = new QWidget(planpage);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(200, 470, 661, 111));
        plan_horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_3);
        plan_horizontalLayout->setObjectName(QString::fromUtf8("plan_horizontalLayout"));
        plan_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        plan_home_btn = new QPushButton(horizontalLayoutWidget_3);
        plan_home_btn->setObjectName(QString::fromUtf8("plan_home_btn"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Agency FB")});
        font2.setPointSize(14);
        font2.setBold(true);
        plan_home_btn->setFont(font2);
        plan_home_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button2.png)"));

        plan_horizontalLayout->addWidget(plan_home_btn);

        plan_home_btn_2 = new QPushButton(horizontalLayoutWidget_3);
        plan_home_btn_2->setObjectName(QString::fromUtf8("plan_home_btn_2"));
        plan_home_btn_2->setFont(font2);
        plan_home_btn_2->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button3.png)"));

        plan_horizontalLayout->addWidget(plan_home_btn_2);

        plan_expense_btn = new QPushButton(horizontalLayoutWidget_3);
        plan_expense_btn->setObjectName(QString::fromUtf8("plan_expense_btn"));
        plan_expense_btn->setFont(font2);
        plan_expense_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button2.png)"));

        plan_horizontalLayout->addWidget(plan_expense_btn);

        planmonit_btn = new QPushButton(horizontalLayoutWidget_3);
        planmonit_btn->setObjectName(QString::fromUtf8("planmonit_btn"));
        planmonit_btn->setFont(font2);
        planmonit_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button2.png)"));

        plan_horizontalLayout->addWidget(planmonit_btn);

        plan_exit_btn = new QPushButton(horizontalLayoutWidget_3);
        plan_exit_btn->setObjectName(QString::fromUtf8("plan_exit_btn"));
        plan_exit_btn->setFont(font2);
        plan_exit_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button2.png)"));

        plan_horizontalLayout->addWidget(plan_exit_btn);

        plan_label_5 = new QLabel(planpage);
        plan_label_5->setObjectName(QString::fromUtf8("plan_label_5"));
        plan_label_5->setGeometry(QRect(540, 110, 54, 16));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Agency FB")});
        font3.setPointSize(11);
        font3.setBold(true);
        plan_label_5->setFont(font3);
        plan_spinBox = new QSpinBox(planpage);
        plan_spinBox->setObjectName(QString::fromUtf8("plan_spinBox"));
        plan_spinBox->setGeometry(QRect(70, 80, 81, 24));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\352\265\264\353\246\274")});
        plan_spinBox->setFont(font4);
        plan_spinBox->setMaximum(3000);
        plan_spinBox->setValue(2021);
        plan_line = new QFrame(planpage);
        plan_line->setObjectName(QString::fromUtf8("plan_line"));
        plan_line->setGeometry(QRect(980, 110, 51, 331));
        plan_line->setFrameShape(QFrame::VLine);
        plan_line->setFrameShadow(QFrame::Sunken);
        plan_line_2 = new QFrame(planpage);
        plan_line_2->setObjectName(QString::fromUtf8("plan_line_2"));
        plan_line_2->setGeometry(QRect(570, 110, 451, 20));
        plan_line_2->setFrameShape(QFrame::HLine);
        plan_line_2->setFrameShadow(QFrame::Sunken);
        plan_line_3 = new QFrame(planpage);
        plan_line_3->setObjectName(QString::fromUtf8("plan_line_3"));
        plan_line_3->setGeometry(QRect(540, 420, 481, 20));
        plan_line_3->setFrameShape(QFrame::HLine);
        plan_line_3->setFrameShadow(QFrame::Sunken);
        planningWidget = new QTableWidget(planpage);
        if (planningWidget->columnCount() < 4)
            planningWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        planningWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        planningWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        planningWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        planningWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        planningWidget->setObjectName(QString::fromUtf8("planningWidget"));
        planningWidget->setGeometry(QRect(30, 120, 501, 311));
        planningWidget->setFont(font4);
        plan_year = new QLabel(planpage);
        plan_year->setObjectName(QString::fromUtf8("plan_year"));
        plan_year->setGeometry(QRect(30, 80, 41, 25));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\352\265\264\353\246\274")});
        font5.setPointSize(10);
        plan_year->setFont(font5);
        plan_label_6 = new QLabel(planpage);
        plan_label_6->setObjectName(QString::fromUtf8("plan_label_6"));
        plan_label_6->setGeometry(QRect(20, 70, 1021, 411));
        plan_label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255)"));
        plan_label_6->setFrameShape(QFrame::WinPanel);
        planning_name = new QLabel(planpage);
        planning_name->setObjectName(QString::fromUtf8("planning_name"));
        planning_name->setGeometry(QRect(70, 10, 101, 39));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Agency FB")});
        font6.setPointSize(20);
        font6.setBold(true);
        planning_name->setFont(font6);
        planning_name->setFrameShape(QFrame::NoFrame);
        plan_addButton = new QPushButton(planpage);
        plan_addButton->setObjectName(QString::fromUtf8("plan_addButton"));
        plan_addButton->setGeometry(QRect(793, 390, 91, 21));
        plan_addButton->setFont(font4);
        plan_addButton->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:black;\n"
""));
        plan_delete = new QPushButton(planpage);
        plan_delete->setObjectName(QString::fromUtf8("plan_delete"));
        plan_delete->setGeometry(QRect(900, 390, 91, 21));
        plan_delete->setFont(font4);
        plan_delete->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:black;\n"
""));
        plan_combo_month = new QComboBox(planpage);
        plan_combo_month->addItem(QString());
        plan_combo_month->addItem(QString());
        plan_combo_month->addItem(QString());
        plan_combo_month->addItem(QString());
        plan_combo_month->addItem(QString());
        plan_combo_month->addItem(QString());
        plan_combo_month->addItem(QString());
        plan_combo_month->addItem(QString());
        plan_combo_month->addItem(QString());
        plan_combo_month->addItem(QString());
        plan_combo_month->addItem(QString());
        plan_combo_month->addItem(QString());
        plan_combo_month->setObjectName(QString::fromUtf8("plan_combo_month"));
        plan_combo_month->setGeometry(QRect(230, 80, 81, 24));
        plan_combo_month->setFont(font4);
        plan_month = new QLabel(planpage);
        plan_month->setObjectName(QString::fromUtf8("plan_month"));
        plan_month->setGeometry(QRect(180, 80, 61, 23));
        plan_month->setFont(font5);
        plan_CategoryBox = new QComboBox(planpage);
        plan_CategoryBox->addItem(QString());
        plan_CategoryBox->addItem(QString());
        plan_CategoryBox->addItem(QString());
        plan_CategoryBox->addItem(QString());
        plan_CategoryBox->addItem(QString());
        plan_CategoryBox->addItem(QString());
        plan_CategoryBox->setObjectName(QString::fromUtf8("plan_CategoryBox"));
        plan_CategoryBox->setGeometry(QRect(620, 170, 261, 22));
        plan_CategoryBox->setMaximumSize(QSize(286, 22));
        plan_plus_btn = new QPushButton(planpage);
        plan_plus_btn->setObjectName(QString::fromUtf8("plan_plus_btn"));
        plan_plus_btn->setGeometry(QRect(890, 170, 80, 24));
        plan_plus_btn->setMinimumSize(QSize(80, 24));
        plan_plus_btn->setMaximumSize(QSize(88, 24));
        plan_category_2 = new QLabel(planpage);
        plan_category_2->setObjectName(QString::fromUtf8("plan_category_2"));
        plan_category_2->setGeometry(QRect(560, 145, 47, 72));
        plan_category_2->setMaximumSize(QSize(47, 72));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Agency FB")});
        font7.setBold(true);
        plan_category_2->setFont(font7);
        plan_money_2 = new QLabel(planpage);
        plan_money_2->setObjectName(QString::fromUtf8("plan_money_2"));
        plan_money_2->setGeometry(QRect(560, 225, 47, 71));
        plan_money_2->setMaximumSize(QSize(47, 71));
        plan_money_2->setFont(font7);
        plan_description_2 = new QLabel(planpage);
        plan_description_2->setObjectName(QString::fromUtf8("plan_description_2"));
        plan_description_2->setGeometry(QRect(560, 300, 47, 72));
        plan_description_2->setMaximumSize(QSize(47, 72));
        plan_description_2->setFont(font7);
        plan_line_money = new QLineEdit(planpage);
        plan_line_money->setObjectName(QString::fromUtf8("plan_line_money"));
        plan_line_money->setGeometry(QRect(620, 250, 331, 22));
        plan_line_money->setMaximumSize(QSize(368, 22));
        plan_label_3 = new QLabel(planpage);
        plan_label_3->setObjectName(QString::fromUtf8("plan_label_3"));
        plan_label_3->setGeometry(QRect(960, 250, 16, 22));
        plan_label_3->setFont(font7);
        plan_line_descript = new QLineEdit(planpage);
        plan_line_descript->setObjectName(QString::fromUtf8("plan_line_descript"));
        plan_line_descript->setGeometry(QRect(620, 325, 351, 22));
        plan_line_descript->setMaximumSize(QSize(368, 22));
        stackedWidget->addWidget(planpage);
        plan_label->raise();
        plan_label_6->raise();
        horizontalLayoutWidget_3->raise();
        plan_label_5->raise();
        plan_line->raise();
        plan_line_2->raise();
        plan_line_3->raise();
        planningWidget->raise();
        plan_spinBox->raise();
        plan_year->raise();
        planning_name->raise();
        plan_addButton->raise();
        plan_delete->raise();
        plan_combo_month->raise();
        plan_month->raise();
        plan_CategoryBox->raise();
        plan_plus_btn->raise();
        plan_category_2->raise();
        plan_money_2->raise();
        plan_description_2->raise();
        plan_line_money->raise();
        plan_label_3->raise();
        plan_line_descript->raise();
        expensepage = new QWidget();
        expensepage->setObjectName(QString::fromUtf8("expensepage"));
        expense_lable = new QLabel(expensepage);
        expense_lable->setObjectName(QString::fromUtf8("expense_lable"));
        expense_lable->setGeometry(QRect(0, 0, 1061, 581));
        expense_lable->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/image-e.png)"));
        expense_lable_3 = new QLabel(expensepage);
        expense_lable_3->setObjectName(QString::fromUtf8("expense_lable_3"));
        expense_lable_3->setGeometry(QRect(20, 70, 1021, 411));
        expense_lable_3->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255)"));
        expense_lable_3->setFrameShape(QFrame::WinPanel);
        expense_dateEdit = new QDateEdit(expensepage);
        expense_dateEdit->setObjectName(QString::fromUtf8("expense_dateEdit"));
        expense_dateEdit->setGeometry(QRect(30, 80, 181, 31));
        expense_dateEdit->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        expense_dateEdit->setDateTime(QDateTime(QDate(2021, 11, 7), QTime(0, 0, 0)));
        expense_dateEdit->setMinimumDate(QDate(1753, 9, 14));
        expense_dateEdit->setCurrentSection(QDateTimeEdit::YearSection);
        ExpenseWidget = new QTableWidget(expensepage);
        if (ExpenseWidget->columnCount() < 5)
            ExpenseWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ExpenseWidget->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ExpenseWidget->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ExpenseWidget->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        ExpenseWidget->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        ExpenseWidget->setHorizontalHeaderItem(4, __qtablewidgetitem8);
        ExpenseWidget->setObjectName(QString::fromUtf8("ExpenseWidget"));
        ExpenseWidget->setGeometry(QRect(30, 120, 501, 311));
        ExpenseWidget->setFont(font4);
        expense_line = new QFrame(expensepage);
        expense_line->setObjectName(QString::fromUtf8("expense_line"));
        expense_line->setGeometry(QRect(540, 420, 481, 20));
        expense_line->setFrameShape(QFrame::HLine);
        expense_line->setFrameShadow(QFrame::Sunken);
        expense_line_2 = new QFrame(expensepage);
        expense_line_2->setObjectName(QString::fromUtf8("expense_line_2"));
        expense_line_2->setGeometry(QRect(570, 110, 451, 20));
        expense_line_2->setFrameShape(QFrame::HLine);
        expense_line_2->setFrameShadow(QFrame::Sunken);
        expense_lable_2 = new QLabel(expensepage);
        expense_lable_2->setObjectName(QString::fromUtf8("expense_lable_2"));
        expense_lable_2->setGeometry(QRect(540, 110, 54, 16));
        expense_lable_2->setFont(font3);
        expense_Save_btn = new QPushButton(expensepage);
        expense_Save_btn->setObjectName(QString::fromUtf8("expense_Save_btn"));
        expense_Save_btn->setGeometry(QRect(793, 390, 91, 21));
        expense_Save_btn->setFont(font4);
        expense_Save_btn->setAutoFillBackground(false);
        expense_Save_btn->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:rgb(0,0,0);\n"
""));
        expense_delete_btn = new QPushButton(expensepage);
        expense_delete_btn->setObjectName(QString::fromUtf8("expense_delete_btn"));
        expense_delete_btn->setGeometry(QRect(900, 390, 91, 21));
        expense_delete_btn->setFont(font4);
        expense_delete_btn->setAutoFillBackground(false);
        expense_delete_btn->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:rgb(0,0,0);"));
        expense_line_3 = new QFrame(expensepage);
        expense_line_3->setObjectName(QString::fromUtf8("expense_line_3"));
        expense_line_3->setGeometry(QRect(980, 110, 51, 331));
        expense_line_3->setFrameShape(QFrame::VLine);
        expense_line_3->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_4 = new QWidget(expensepage);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(200, 470, 661, 111));
        expense_horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_4);
        expense_horizontalLayout->setObjectName(QString::fromUtf8("expense_horizontalLayout"));
        expense_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Expense_home_btn = new QPushButton(horizontalLayoutWidget_4);
        Expense_home_btn->setObjectName(QString::fromUtf8("Expense_home_btn"));
        Expense_home_btn->setFont(font2);
        Expense_home_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button2.png)"));

        expense_horizontalLayout->addWidget(Expense_home_btn);

        Expense_planning_btn = new QPushButton(horizontalLayoutWidget_4);
        Expense_planning_btn->setObjectName(QString::fromUtf8("Expense_planning_btn"));
        Expense_planning_btn->setFont(font2);
        Expense_planning_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button2.png)"));

        expense_horizontalLayout->addWidget(Expense_planning_btn);

        Expense_planning_btn_2 = new QPushButton(horizontalLayoutWidget_4);
        Expense_planning_btn_2->setObjectName(QString::fromUtf8("Expense_planning_btn_2"));
        Expense_planning_btn_2->setFont(font2);
        Expense_planning_btn_2->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button3.png)"));

        expense_horizontalLayout->addWidget(Expense_planning_btn_2);

        expense_monit_btn = new QPushButton(horizontalLayoutWidget_4);
        expense_monit_btn->setObjectName(QString::fromUtf8("expense_monit_btn"));
        expense_monit_btn->setFont(font2);
        expense_monit_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button2.png)"));

        expense_horizontalLayout->addWidget(expense_monit_btn);

        exepense_exit_btn = new QPushButton(horizontalLayoutWidget_4);
        exepense_exit_btn->setObjectName(QString::fromUtf8("exepense_exit_btn"));
        exepense_exit_btn->setFont(font2);
        exepense_exit_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button2.png)"));

        expense_horizontalLayout->addWidget(exepense_exit_btn);

        expense_name = new QLabel(expensepage);
        expense_name->setObjectName(QString::fromUtf8("expense_name"));
        expense_name->setGeometry(QRect(70, 10, 101, 39));
        expense_name->setFont(font6);
        expense_CategoryBox = new QComboBox(expensepage);
        expense_CategoryBox->addItem(QString());
        expense_CategoryBox->addItem(QString());
        expense_CategoryBox->addItem(QString());
        expense_CategoryBox->addItem(QString());
        expense_CategoryBox->addItem(QString());
        expense_CategoryBox->addItem(QString());
        expense_CategoryBox->setObjectName(QString::fromUtf8("expense_CategoryBox"));
        expense_CategoryBox->setGeometry(QRect(620, 170, 261, 22));
        expense_CategoryBox->setMaximumSize(QSize(286, 22));
        expense_plus_btn = new QPushButton(expensepage);
        expense_plus_btn->setObjectName(QString::fromUtf8("expense_plus_btn"));
        expense_plus_btn->setGeometry(QRect(890, 170, 80, 24));
        expense_plus_btn->setMinimumSize(QSize(80, 24));
        expense_plus_btn->setMaximumSize(QSize(88, 24));
        expense_category = new QLabel(expensepage);
        expense_category->setObjectName(QString::fromUtf8("expense_category"));
        expense_category->setGeometry(QRect(560, 145, 47, 72));
        expense_category->setMaximumSize(QSize(47, 72));
        expense_category->setFont(font7);
        money_4 = new QLabel(expensepage);
        money_4->setObjectName(QString::fromUtf8("money_4"));
        money_4->setGeometry(QRect(560, 225, 47, 71));
        money_4->setMaximumSize(QSize(47, 71));
        money_4->setFont(font7);
        expense_description = new QLabel(expensepage);
        expense_description->setObjectName(QString::fromUtf8("expense_description"));
        expense_description->setGeometry(QRect(560, 300, 47, 72));
        expense_description->setMaximumSize(QSize(47, 72));
        expense_description->setFont(font7);
        expense_line_money = new QLineEdit(expensepage);
        expense_line_money->setObjectName(QString::fromUtf8("expense_line_money"));
        expense_line_money->setGeometry(QRect(620, 250, 331, 22));
        expense_line_money->setMaximumSize(QSize(368, 22));
        expense_label = new QLabel(expensepage);
        expense_label->setObjectName(QString::fromUtf8("expense_label"));
        expense_label->setGeometry(QRect(960, 250, 16, 22));
        expense_label->setFont(font7);
        expense_line_descript = new QLineEdit(expensepage);
        expense_line_descript->setObjectName(QString::fromUtf8("expense_line_descript"));
        expense_line_descript->setGeometry(QRect(620, 325, 351, 22));
        expense_line_descript->setMaximumSize(QSize(368, 22));
        stackedWidget->addWidget(expensepage);
        expense_lable->raise();
        expense_lable_3->raise();
        expense_dateEdit->raise();
        ExpenseWidget->raise();
        expense_line->raise();
        expense_line_2->raise();
        expense_lable_2->raise();
        expense_line_3->raise();
        horizontalLayoutWidget_4->raise();
        expense_Save_btn->raise();
        expense_delete_btn->raise();
        expense_name->raise();
        expense_CategoryBox->raise();
        expense_plus_btn->raise();
        expense_category->raise();
        money_4->raise();
        expense_description->raise();
        expense_line_money->raise();
        expense_label->raise();
        expense_line_descript->raise();
        mon_page = new QWidget();
        mon_page->setObjectName(QString::fromUtf8("mon_page"));
        by_period_btn = new QPushButton(mon_page);
        by_period_btn->setObjectName(QString::fromUtf8("by_period_btn"));
        by_period_btn->setGeometry(QRect(480, 360, 101, 31));
        monitoring_icon2 = new QLabel(mon_page);
        monitoring_icon2->setObjectName(QString::fromUtf8("monitoring_icon2"));
        monitoring_icon2->setGeometry(QRect(480, 230, 91, 91));
        monitoring_icon2->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/expense2.png)"));
        Total_ex_btn = new QPushButton(mon_page);
        Total_ex_btn->setObjectName(QString::fromUtf8("Total_ex_btn"));
        Total_ex_btn->setGeometry(QRect(230, 360, 111, 31));
        monitoring_icon1 = new QLabel(mon_page);
        monitoring_icon1->setObjectName(QString::fromUtf8("monitoring_icon1"));
        monitoring_icon1->setGeometry(QRect(240, 220, 91, 91));
        monitoring_icon1->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/expense1.png)"));
        background_in_2 = new QLabel(mon_page);
        background_in_2->setObjectName(QString::fromUtf8("background_in_2"));
        background_in_2->setGeometry(QRect(180, 160, 701, 281));
        background_in_2->setStyleSheet(QString::fromUtf8("background-color:rgb(243, 243, 255)"));
        background_in_2->setFrameShape(QFrame::WinPanel);
        monitoring_icon3 = new QLabel(mon_page);
        monitoring_icon3->setObjectName(QString::fromUtf8("monitoring_icon3"));
        monitoring_icon3->setGeometry(QRect(720, 220, 91, 101));
        monitoring_icon3->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/expense3.png)"));
        background_2 = new QLabel(mon_page);
        background_2->setObjectName(QString::fromUtf8("background_2"));
        background_2->setGeometry(QRect(-360, -20, 1431, 601));
        background_2->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/image-m.png)"));
        By_category_btn = new QPushButton(mon_page);
        By_category_btn->setObjectName(QString::fromUtf8("By_category_btn"));
        By_category_btn->setGeometry(QRect(720, 360, 101, 31));
        horizontalLayoutWidget_5 = new QWidget(mon_page);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(200, 470, 661, 111));
        monit_horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_5);
        monit_horizontalLayout->setObjectName(QString::fromUtf8("monit_horizontalLayout"));
        monit_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        monit_home_btn = new QPushButton(horizontalLayoutWidget_5);
        monit_home_btn->setObjectName(QString::fromUtf8("monit_home_btn"));
        monit_home_btn->setFont(font2);
        monit_home_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button2.png)"));

        monit_horizontalLayout->addWidget(monit_home_btn);

        monit_plan_btn = new QPushButton(horizontalLayoutWidget_5);
        monit_plan_btn->setObjectName(QString::fromUtf8("monit_plan_btn"));
        monit_plan_btn->setFont(font2);
        monit_plan_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button2.png)"));

        monit_horizontalLayout->addWidget(monit_plan_btn);

        monit_expense_btn = new QPushButton(horizontalLayoutWidget_5);
        monit_expense_btn->setObjectName(QString::fromUtf8("monit_expense_btn"));
        monit_expense_btn->setFont(font2);
        monit_expense_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button2.png)"));

        monit_horizontalLayout->addWidget(monit_expense_btn);

        monit_exit_btn_2 = new QPushButton(horizontalLayoutWidget_5);
        monit_exit_btn_2->setObjectName(QString::fromUtf8("monit_exit_btn_2"));
        monit_exit_btn_2->setFont(font2);
        monit_exit_btn_2->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button3.png)"));

        monit_horizontalLayout->addWidget(monit_exit_btn_2);

        monit_exit_btn = new QPushButton(horizontalLayoutWidget_5);
        monit_exit_btn->setObjectName(QString::fromUtf8("monit_exit_btn"));
        monit_exit_btn->setFont(font2);
        monit_exit_btn->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/button2.png)"));

        monit_horizontalLayout->addWidget(monit_exit_btn);

        layoutWidget = new QWidget(mon_page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 141, 51));
        monit_horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        monit_horizontalLayout_2->setObjectName(QString::fromUtf8("monit_horizontalLayout_2"));
        monit_horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        momitoring_name = new QLabel(mon_page);
        momitoring_name->setObjectName(QString::fromUtf8("momitoring_name"));
        momitoring_name->setGeometry(QRect(223, 80, 111, 31));
        momitoring_name->setFont(font6);
        stackedWidget->addWidget(mon_page);
        layoutWidget->raise();
        background_2->raise();
        background_in_2->raise();
        by_period_btn->raise();
        monitoring_icon2->raise();
        Total_ex_btn->raise();
        monitoring_icon1->raise();
        monitoring_icon3->raise();
        By_category_btn->raise();
        horizontalLayoutWidget_5->raise();
        momitoring_name->raise();
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        Cate_list = new QListWidget(page);
        Cate_list->setObjectName(QString::fromUtf8("Cate_list"));
        Cate_list->setGeometry(QRect(40, 70, 441, 401));
        Category_btn = new QPushButton(page);
        Category_btn->setObjectName(QString::fromUtf8("Category_btn"));
        Category_btn->setGeometry(QRect(580, 390, 86, 41));
        Category_btn->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:black;\n"
""));
        Category_btn_2 = new QPushButton(page);
        Category_btn_2->setObjectName(QString::fromUtf8("Category_btn_2"));
        Category_btn_2->setGeometry(QRect(700, 390, 86, 41));
        Category_btn_2->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:black;"));
        Category_btn2 = new QPushButton(page);
        Category_btn2->setObjectName(QString::fromUtf8("Category_btn2"));
        Category_btn2->setGeometry(QRect(820, 390, 86, 41));
        Category_btn2->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:black;"));
        cateline_edit = new QLineEdit(page);
        cateline_edit->setObjectName(QString::fromUtf8("cateline_edit"));
        cateline_edit->setGeometry(QRect(580, 295, 391, 41));
        cate_label = new QLabel(page);
        cate_label->setObjectName(QString::fromUtf8("cate_label"));
        cate_label->setGeometry(QRect(520, 80, 201, 31));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Arial")});
        font8.setPointSize(18);
        font8.setBold(true);
        cate_label->setFont(font8);
        cate_label_2 = new QLabel(page);
        cate_label_2->setObjectName(QString::fromUtf8("cate_label_2"));
        cate_label_2->setGeometry(QRect(520, 150, 361, 31));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Arial")});
        font9.setPointSize(14);
        font9.setBold(true);
        cate_label_2->setFont(font9);
        cate_label_3 = new QLabel(page);
        cate_label_3->setObjectName(QString::fromUtf8("cate_label_3"));
        cate_label_3->setGeometry(QRect(520, 210, 381, 31));
        cate_label_3->setFont(font9);
        cate_label_4 = new QLabel(page);
        cate_label_4->setObjectName(QString::fromUtf8("cate_label_4"));
        cate_label_4->setGeometry(QRect(510, 300, 71, 31));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Arial")});
        font10.setPointSize(16);
        font10.setBold(true);
        cate_label_4->setFont(font10);
        background_in = new QLabel(page);
        background_in->setObjectName(QString::fromUtf8("background_in"));
        background_in->setGeometry(QRect(20, 30, 1011, 471));
        background_in->setStyleSheet(QString::fromUtf8("background-color:rgb(243, 243, 255)"));
        background_in->setFrameShape(QFrame::WinPanel);
        background = new QLabel(page);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 1061, 571));
        background->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/background.png)"));
        stackedWidget->addWidget(page);
        background->raise();
        background_in->raise();
        Cate_list->raise();
        Category_btn->raise();
        Category_btn_2->raise();
        Category_btn2->raise();
        cateline_edit->raise();
        cate_label->raise();
        cate_label_2->raise();
        cate_label_3->raise();
        cate_label_4->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        main_label->setText(QString());
        main_planning_btn->setText(QCoreApplication::translate("MainWindow", "Planning", nullptr));
        main_expense_btn->setText(QCoreApplication::translate("MainWindow", "Expense", nullptr));
        main_monit_btn->setText(QCoreApplication::translate("MainWindow", "Monitoring", nullptr));
        main_exit_btn->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        plan_label->setText(QString());
        plan_home_btn->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        plan_home_btn_2->setText(QCoreApplication::translate("MainWindow", "Planning", nullptr));
        plan_expense_btn->setText(QCoreApplication::translate("MainWindow", "Expense", nullptr));
        planmonit_btn->setText(QCoreApplication::translate("MainWindow", "Monitoring", nullptr));
        plan_exit_btn->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        plan_label_5->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        QTableWidgetItem *___qtablewidgetitem = planningWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "# of Trans", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = planningWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = planningWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = planningWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Descriptions", nullptr));
        plan_year->setText(QCoreApplication::translate("MainWindow", "Year ", nullptr));
        plan_label_6->setText(QString());
        planning_name->setText(QCoreApplication::translate("MainWindow", "Planning  ", nullptr));
        plan_addButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        plan_delete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        plan_combo_month->setItemText(0, QCoreApplication::translate("MainWindow", "Jan", nullptr));
        plan_combo_month->setItemText(1, QCoreApplication::translate("MainWindow", "Feb", nullptr));
        plan_combo_month->setItemText(2, QCoreApplication::translate("MainWindow", "Mar", nullptr));
        plan_combo_month->setItemText(3, QCoreApplication::translate("MainWindow", "Apr", nullptr));
        plan_combo_month->setItemText(4, QCoreApplication::translate("MainWindow", "May", nullptr));
        plan_combo_month->setItemText(5, QCoreApplication::translate("MainWindow", "Jun", nullptr));
        plan_combo_month->setItemText(6, QCoreApplication::translate("MainWindow", "Jul", nullptr));
        plan_combo_month->setItemText(7, QCoreApplication::translate("MainWindow", "Aug", nullptr));
        plan_combo_month->setItemText(8, QCoreApplication::translate("MainWindow", "Sep", nullptr));
        plan_combo_month->setItemText(9, QCoreApplication::translate("MainWindow", "Oct", nullptr));
        plan_combo_month->setItemText(10, QCoreApplication::translate("MainWindow", "Nov", nullptr));
        plan_combo_month->setItemText(11, QCoreApplication::translate("MainWindow", "Dec", nullptr));

        plan_month->setText(QCoreApplication::translate("MainWindow", "Month", nullptr));
        plan_CategoryBox->setItemText(0, QCoreApplication::translate("MainWindow", "Food", nullptr));
        plan_CategoryBox->setItemText(1, QCoreApplication::translate("MainWindow", "Education", nullptr));
        plan_CategoryBox->setItemText(2, QCoreApplication::translate("MainWindow", "Transportation", nullptr));
        plan_CategoryBox->setItemText(3, QCoreApplication::translate("MainWindow", "Clothes", nullptr));
        plan_CategoryBox->setItemText(4, QCoreApplication::translate("MainWindow", "Entertainment", nullptr));
        plan_CategoryBox->setItemText(5, QCoreApplication::translate("MainWindow", "Communication fee", nullptr));

        plan_plus_btn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        plan_category_2->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        plan_money_2->setText(QCoreApplication::translate("MainWindow", "Money", nullptr));
        plan_description_2->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        plan_label_3->setText(QCoreApplication::translate("MainWindow", "$", nullptr));
        expense_lable->setText(QString());
        expense_lable_3->setText(QString());
        expense_dateEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "yyyy-MMM-dd", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = ExpenseWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "#of Trans", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = ExpenseWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = ExpenseWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = ExpenseWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = ExpenseWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Descriptions", nullptr));
        expense_lable_2->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        expense_Save_btn->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        expense_delete_btn->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        Expense_home_btn->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        Expense_planning_btn->setText(QCoreApplication::translate("MainWindow", "Planning", nullptr));
        Expense_planning_btn_2->setText(QCoreApplication::translate("MainWindow", "Expense", nullptr));
        expense_monit_btn->setText(QCoreApplication::translate("MainWindow", "Monitoring", nullptr));
        exepense_exit_btn->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        expense_name->setText(QCoreApplication::translate("MainWindow", "Exspense  ", nullptr));
        expense_CategoryBox->setItemText(0, QCoreApplication::translate("MainWindow", "Food", nullptr));
        expense_CategoryBox->setItemText(1, QCoreApplication::translate("MainWindow", "Education", nullptr));
        expense_CategoryBox->setItemText(2, QCoreApplication::translate("MainWindow", "Transportation", nullptr));
        expense_CategoryBox->setItemText(3, QCoreApplication::translate("MainWindow", "Clothes", nullptr));
        expense_CategoryBox->setItemText(4, QCoreApplication::translate("MainWindow", "Entertainment", nullptr));
        expense_CategoryBox->setItemText(5, QCoreApplication::translate("MainWindow", "Communication fee", nullptr));

        expense_plus_btn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        expense_category->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        money_4->setText(QCoreApplication::translate("MainWindow", "Money", nullptr));
        expense_description->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        expense_label->setText(QCoreApplication::translate("MainWindow", "$", nullptr));
        by_period_btn->setText(QCoreApplication::translate("MainWindow", "By Year,Month", nullptr));
        monitoring_icon2->setText(QString());
        Total_ex_btn->setText(QCoreApplication::translate("MainWindow", "Total expense", nullptr));
        monitoring_icon1->setText(QString());
        background_in_2->setText(QString());
        monitoring_icon3->setText(QString());
        background_2->setText(QString());
        By_category_btn->setText(QCoreApplication::translate("MainWindow", "By Category", nullptr));
        monit_home_btn->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        monit_plan_btn->setText(QCoreApplication::translate("MainWindow", "Planning", nullptr));
        monit_expense_btn->setText(QCoreApplication::translate("MainWindow", "Expense", nullptr));
        monit_exit_btn_2->setText(QCoreApplication::translate("MainWindow", "Monitoring", nullptr));
        monit_exit_btn->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        momitoring_name->setText(QCoreApplication::translate("MainWindow", "Monitoring", nullptr));
        Category_btn->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        Category_btn_2->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        Category_btn2->setText(QCoreApplication::translate("MainWindow", "Go to back", nullptr));
        cate_label->setText(QCoreApplication::translate("MainWindow", "<Category Edit>", nullptr));
        cate_label_2->setText(QCoreApplication::translate("MainWindow", "If you want to delete category items,", nullptr));
        cate_label_3->setText(QCoreApplication::translate("MainWindow", "click the item and click the delete button.", nullptr));
        cate_label_4->setText(QCoreApplication::translate("MainWindow", "Input : ", nullptr));
        background_in->setText(QString());
        background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
