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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *mainpage;
    QLabel *main_label;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *main_horizontalLayout;
    QPushButton *main_planning_btn_2;
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
    QWidget *layoutWidget;
    QHBoxLayout *plan_horizontalLayout_4;
    QVBoxLayout *plan_verticalLayout;
    QLabel *plan_category_2;
    QLabel *plan_money_2;
    QLabel *plan_description_2;
    QVBoxLayout *plan_verticalLayout_3;
    QHBoxLayout *plan_horizontalLayout_10;
    QVBoxLayout *plan_verticalLayout_2;
    QComboBox *plan_CategoryBox;
    QHBoxLayout *plan_horizontalLayout_2;
    QLineEdit *plan_lineEdit;
    QPushButton *plan_plus_btn;
    QHBoxLayout *plan_horizontalLayout_11;
    QLineEdit *plan_line_money;
    QLabel *plan_label_3;
    QHBoxLayout *plan_horizontalLayout_12;
    QLineEdit *plan_line_descript;
    QLabel *plan_lable;
    QLabel *plan_label_5;
    QSpinBox *plan_spinBox;
    QFrame *plan_line;
    QWidget *layoutWidget_2;
    QHBoxLayout *plan_horizontalLayout_5;
    QLabel *plan_month;
    QComboBox *plan_combo_month;
    QFrame *plan_line_2;
    QFrame *plan_line_3;
    QWidget *layoutWidget_4;
    QHBoxLayout *plan_horizontalLayout_6;
    QPushButton *plan_addButton;
    QPushButton *plan_delete;
    QTableWidget *planningWidget;
    QLabel *plan_year;
    QLabel *plan_label_6;
    QLabel *planning_name;
    QLabel *plan_label_7;
    QWidget *expensepage;
    QLabel *expense_lable;
    QLabel *expense_lable_3;
    QDateEdit *expense_dateEdit;
    QTableWidget *ExpenseWidget;
    QWidget *layoutWidget_3;
    QHBoxLayout *expense_horizontalLayout_3;
    QVBoxLayout *expense_verticalLayout;
    QLabel *expense_category;
    QLabel *money_4;
    QLabel *expense_description;
    QVBoxLayout *expense_verticalLayout_2;
    QHBoxLayout *expense_horizontalLayout_4;
    QVBoxLayout *expense_verticalLayout_3;
    QComboBox *expense_CategoryBox;
    QHBoxLayout *expense_horizontalLayout_5;
    QLineEdit *expense_lineEdit;
    QPushButton *expense_plus_btn;
    QHBoxLayout *expense_horizontalLayout_6;
    QLineEdit *expense_line_money;
    QLabel *expense_label;
    QHBoxLayout *expense_horizontalLayout_7;
    QLineEdit *expense_line_descript;
    QLabel *expense_label_2;
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
    QLabel *expense_lable_4;
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
    QWidget *layoutWidget1;
    QHBoxLayout *monit_horizontalLayout_2;
    QLabel *monitoring_icon;
    QLabel *mornitoring;

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
        main_label->setGeometry(QRect(0, 0, 1061, 571));
        main_label->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/mainwindow.jpg);\n"
""));
        horizontalLayoutWidget_2 = new QWidget(mainpage);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(220, 440, 661, 111));
        main_horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        main_horizontalLayout->setObjectName(QString::fromUtf8("main_horizontalLayout"));
        main_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        main_planning_btn_2 = new QPushButton(horizontalLayoutWidget_2);
        main_planning_btn_2->setObjectName(QString::fromUtf8("main_planning_btn_2"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(14);
        font.setBold(true);
        main_planning_btn_2->setFont(font);
        main_planning_btn_2->setStyleSheet(QString::fromUtf8(""));

        main_horizontalLayout->addWidget(main_planning_btn_2);

        main_planning_btn = new QPushButton(horizontalLayoutWidget_2);
        main_planning_btn->setObjectName(QString::fromUtf8("main_planning_btn"));
        main_planning_btn->setFont(font);
        main_planning_btn->setStyleSheet(QString::fromUtf8(""));

        main_horizontalLayout->addWidget(main_planning_btn);

        main_expense_btn = new QPushButton(horizontalLayoutWidget_2);
        main_expense_btn->setObjectName(QString::fromUtf8("main_expense_btn"));
        main_expense_btn->setFont(font);
        main_expense_btn->setStyleSheet(QString::fromUtf8(""));

        main_horizontalLayout->addWidget(main_expense_btn);

        main_monit_btn = new QPushButton(horizontalLayoutWidget_2);
        main_monit_btn->setObjectName(QString::fromUtf8("main_monit_btn"));
        main_monit_btn->setFont(font);
        main_monit_btn->setStyleSheet(QString::fromUtf8(""));

        main_horizontalLayout->addWidget(main_monit_btn);

        main_exit_btn = new QPushButton(horizontalLayoutWidget_2);
        main_exit_btn->setObjectName(QString::fromUtf8("main_exit_btn"));
        main_exit_btn->setFont(font);
        main_exit_btn->setStyleSheet(QString::fromUtf8(""));

        main_horizontalLayout->addWidget(main_exit_btn);

        stackedWidget->addWidget(mainpage);
        planpage = new QWidget();
        planpage->setObjectName(QString::fromUtf8("planpage"));
        plan_label = new QLabel(planpage);
        plan_label->setObjectName(QString::fromUtf8("plan_label"));
        plan_label->setGeometry(QRect(0, 0, 1061, 581));
        plan_label->setStyleSheet(QString::fromUtf8("background-color:rgb(176, 193, 255)"));
        horizontalLayoutWidget_3 = new QWidget(planpage);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(210, 440, 661, 111));
        plan_horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_3);
        plan_horizontalLayout->setObjectName(QString::fromUtf8("plan_horizontalLayout"));
        plan_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        plan_home_btn = new QPushButton(horizontalLayoutWidget_3);
        plan_home_btn->setObjectName(QString::fromUtf8("plan_home_btn"));
        plan_home_btn->setFont(font);
        plan_home_btn->setStyleSheet(QString::fromUtf8(""));

        plan_horizontalLayout->addWidget(plan_home_btn);

        plan_home_btn_2 = new QPushButton(horizontalLayoutWidget_3);
        plan_home_btn_2->setObjectName(QString::fromUtf8("plan_home_btn_2"));
        plan_home_btn_2->setFont(font);
        plan_home_btn_2->setStyleSheet(QString::fromUtf8(""));

        plan_horizontalLayout->addWidget(plan_home_btn_2);

        plan_expense_btn = new QPushButton(horizontalLayoutWidget_3);
        plan_expense_btn->setObjectName(QString::fromUtf8("plan_expense_btn"));
        plan_expense_btn->setFont(font);
        plan_expense_btn->setStyleSheet(QString::fromUtf8(""));

        plan_horizontalLayout->addWidget(plan_expense_btn);

        planmonit_btn = new QPushButton(horizontalLayoutWidget_3);
        planmonit_btn->setObjectName(QString::fromUtf8("planmonit_btn"));
        planmonit_btn->setFont(font);
        planmonit_btn->setStyleSheet(QString::fromUtf8(""));

        plan_horizontalLayout->addWidget(planmonit_btn);

        plan_exit_btn = new QPushButton(horizontalLayoutWidget_3);
        plan_exit_btn->setObjectName(QString::fromUtf8("plan_exit_btn"));
        plan_exit_btn->setFont(font);
        plan_exit_btn->setStyleSheet(QString::fromUtf8(""));

        plan_horizontalLayout->addWidget(plan_exit_btn);

        layoutWidget = new QWidget(planpage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(550, 140, 441, 231));
        plan_horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        plan_horizontalLayout_4->setObjectName(QString::fromUtf8("plan_horizontalLayout_4"));
        plan_horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        plan_verticalLayout = new QVBoxLayout();
        plan_verticalLayout->setObjectName(QString::fromUtf8("plan_verticalLayout"));
        plan_category_2 = new QLabel(layoutWidget);
        plan_category_2->setObjectName(QString::fromUtf8("plan_category_2"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setBold(true);
        plan_category_2->setFont(font1);

        plan_verticalLayout->addWidget(plan_category_2);

        plan_money_2 = new QLabel(layoutWidget);
        plan_money_2->setObjectName(QString::fromUtf8("plan_money_2"));
        plan_money_2->setFont(font1);

        plan_verticalLayout->addWidget(plan_money_2);

        plan_description_2 = new QLabel(layoutWidget);
        plan_description_2->setObjectName(QString::fromUtf8("plan_description_2"));
        plan_description_2->setFont(font1);

        plan_verticalLayout->addWidget(plan_description_2);


        plan_horizontalLayout_4->addLayout(plan_verticalLayout);

        plan_verticalLayout_3 = new QVBoxLayout();
        plan_verticalLayout_3->setObjectName(QString::fromUtf8("plan_verticalLayout_3"));
        plan_horizontalLayout_10 = new QHBoxLayout();
        plan_horizontalLayout_10->setObjectName(QString::fromUtf8("plan_horizontalLayout_10"));
        plan_verticalLayout_2 = new QVBoxLayout();
        plan_verticalLayout_2->setObjectName(QString::fromUtf8("plan_verticalLayout_2"));
        plan_CategoryBox = new QComboBox(layoutWidget);
        plan_CategoryBox->addItem(QString());
        plan_CategoryBox->addItem(QString());
        plan_CategoryBox->addItem(QString());
        plan_CategoryBox->addItem(QString());
        plan_CategoryBox->addItem(QString());
        plan_CategoryBox->addItem(QString());
        plan_CategoryBox->addItem(QString());
        plan_CategoryBox->setObjectName(QString::fromUtf8("plan_CategoryBox"));

        plan_verticalLayout_2->addWidget(plan_CategoryBox);

        plan_horizontalLayout_2 = new QHBoxLayout();
        plan_horizontalLayout_2->setObjectName(QString::fromUtf8("plan_horizontalLayout_2"));
        plan_lineEdit = new QLineEdit(layoutWidget);
        plan_lineEdit->setObjectName(QString::fromUtf8("plan_lineEdit"));

        plan_horizontalLayout_2->addWidget(plan_lineEdit);

        plan_plus_btn = new QPushButton(layoutWidget);
        plan_plus_btn->setObjectName(QString::fromUtf8("plan_plus_btn"));
        plan_plus_btn->setMinimumSize(QSize(80, 24));
        plan_plus_btn->setMaximumSize(QSize(16777215, 24));

        plan_horizontalLayout_2->addWidget(plan_plus_btn);


        plan_verticalLayout_2->addLayout(plan_horizontalLayout_2);


        plan_horizontalLayout_10->addLayout(plan_verticalLayout_2);


        plan_verticalLayout_3->addLayout(plan_horizontalLayout_10);

        plan_horizontalLayout_11 = new QHBoxLayout();
        plan_horizontalLayout_11->setObjectName(QString::fromUtf8("plan_horizontalLayout_11"));
        plan_line_money = new QLineEdit(layoutWidget);
        plan_line_money->setObjectName(QString::fromUtf8("plan_line_money"));

        plan_horizontalLayout_11->addWidget(plan_line_money);

        plan_label_3 = new QLabel(layoutWidget);
        plan_label_3->setObjectName(QString::fromUtf8("plan_label_3"));
        plan_label_3->setFont(font1);

        plan_horizontalLayout_11->addWidget(plan_label_3);


        plan_verticalLayout_3->addLayout(plan_horizontalLayout_11);

        plan_horizontalLayout_12 = new QHBoxLayout();
        plan_horizontalLayout_12->setObjectName(QString::fromUtf8("plan_horizontalLayout_12"));
        plan_line_descript = new QLineEdit(layoutWidget);
        plan_line_descript->setObjectName(QString::fromUtf8("plan_line_descript"));

        plan_horizontalLayout_12->addWidget(plan_line_descript);

        plan_lable = new QLabel(layoutWidget);
        plan_lable->setObjectName(QString::fromUtf8("plan_lable"));

        plan_horizontalLayout_12->addWidget(plan_lable);


        plan_verticalLayout_3->addLayout(plan_horizontalLayout_12);


        plan_horizontalLayout_4->addLayout(plan_verticalLayout_3);

        plan_label_5 = new QLabel(planpage);
        plan_label_5->setObjectName(QString::fromUtf8("plan_label_5"));
        plan_label_5->setGeometry(QRect(540, 110, 54, 12));
        plan_label_5->setFont(font1);
        plan_spinBox = new QSpinBox(planpage);
        plan_spinBox->setObjectName(QString::fromUtf8("plan_spinBox"));
        plan_spinBox->setGeometry(QRect(70, 80, 81, 24));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\352\265\264\353\246\274")});
        plan_spinBox->setFont(font2);
        plan_spinBox->setMaximum(3000);
        plan_spinBox->setValue(2021);
        plan_line = new QFrame(planpage);
        plan_line->setObjectName(QString::fromUtf8("plan_line"));
        plan_line->setGeometry(QRect(980, 90, 51, 351));
        plan_line->setFrameShape(QFrame::VLine);
        plan_line->setFrameShadow(QFrame::Sunken);
        layoutWidget_2 = new QWidget(planpage);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(150, 80, 171, 25));
        plan_horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        plan_horizontalLayout_5->setObjectName(QString::fromUtf8("plan_horizontalLayout_5"));
        plan_horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        plan_month = new QLabel(layoutWidget_2);
        plan_month->setObjectName(QString::fromUtf8("plan_month"));
        plan_month->setFont(font2);

        plan_horizontalLayout_5->addWidget(plan_month);

        plan_combo_month = new QComboBox(layoutWidget_2);
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
        plan_combo_month->setFont(font2);

        plan_horizontalLayout_5->addWidget(plan_combo_month);

        plan_combo_month->raise();
        plan_month->raise();
        plan_line_2 = new QFrame(planpage);
        plan_line_2->setObjectName(QString::fromUtf8("plan_line_2"));
        plan_line_2->setGeometry(QRect(530, 90, 481, 20));
        plan_line_2->setFrameShape(QFrame::HLine);
        plan_line_2->setFrameShadow(QFrame::Sunken);
        plan_line_3 = new QFrame(planpage);
        plan_line_3->setObjectName(QString::fromUtf8("plan_line_3"));
        plan_line_3->setGeometry(QRect(520, 420, 491, 20));
        plan_line_3->setFrameShape(QFrame::HLine);
        plan_line_3->setFrameShadow(QFrame::Sunken);
        layoutWidget_4 = new QWidget(planpage);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(700, 390, 256, 26));
        plan_horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        plan_horizontalLayout_6->setObjectName(QString::fromUtf8("plan_horizontalLayout_6"));
        plan_horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        plan_addButton = new QPushButton(layoutWidget_4);
        plan_addButton->setObjectName(QString::fromUtf8("plan_addButton"));
        plan_addButton->setFont(font2);
        plan_addButton->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:black;\n"
""));

        plan_horizontalLayout_6->addWidget(plan_addButton);

        plan_delete = new QPushButton(layoutWidget_4);
        plan_delete->setObjectName(QString::fromUtf8("plan_delete"));
        plan_delete->setFont(font2);
        plan_delete->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:black;\n"
""));

        plan_horizontalLayout_6->addWidget(plan_delete);

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
        planningWidget->setGeometry(QRect(30, 120, 501, 301));
        planningWidget->setFont(font2);
        plan_year = new QLabel(planpage);
        plan_year->setObjectName(QString::fromUtf8("plan_year"));
        plan_year->setGeometry(QRect(30, 80, 41, 25));
        plan_year->setFont(font2);
        plan_label_6 = new QLabel(planpage);
        plan_label_6->setObjectName(QString::fromUtf8("plan_label_6"));
        plan_label_6->setGeometry(QRect(20, 60, 1021, 411));
        plan_label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255)"));
        planning_name = new QLabel(planpage);
        planning_name->setObjectName(QString::fromUtf8("planning_name"));
        planning_name->setGeometry(QRect(70, 10, 58, 49));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Agency FB")});
        font3.setPointSize(12);
        font3.setBold(true);
        planning_name->setFont(font3);
        planning_name->setFrameShape(QFrame::NoFrame);
        plan_label_7 = new QLabel(planpage);
        plan_label_7->setObjectName(QString::fromUtf8("plan_label_7"));
        plan_label_7->setGeometry(QRect(20, 10, 41, 49));
        plan_label_7->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/planning.png)\n"
"\n"
""));
        stackedWidget->addWidget(planpage);
        plan_label->raise();
        plan_label_6->raise();
        layoutWidget->raise();
        horizontalLayoutWidget_3->raise();
        plan_label_5->raise();
        plan_line->raise();
        layoutWidget_2->raise();
        plan_line_2->raise();
        plan_line_3->raise();
        layoutWidget_4->raise();
        planningWidget->raise();
        plan_spinBox->raise();
        plan_year->raise();
        planning_name->raise();
        plan_label_7->raise();
        expensepage = new QWidget();
        expensepage->setObjectName(QString::fromUtf8("expensepage"));
        expense_lable = new QLabel(expensepage);
        expense_lable->setObjectName(QString::fromUtf8("expense_lable"));
        expense_lable->setGeometry(QRect(0, 0, 1061, 581));
        expense_lable->setStyleSheet(QString::fromUtf8("background-color:rgb(176, 193, 255)"));
        expense_lable_3 = new QLabel(expensepage);
        expense_lable_3->setObjectName(QString::fromUtf8("expense_lable_3"));
        expense_lable_3->setGeometry(QRect(20, 60, 1021, 411));
        expense_lable_3->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 243, 255)"));
        expense_dateEdit = new QDateEdit(expensepage);
        expense_dateEdit->setObjectName(QString::fromUtf8("expense_dateEdit"));
        expense_dateEdit->setGeometry(QRect(30, 70, 181, 21));
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
        ExpenseWidget->setGeometry(QRect(30, 110, 571, 301));
        layoutWidget_3 = new QWidget(expensepage);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(620, 140, 404, 211));
        expense_horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        expense_horizontalLayout_3->setObjectName(QString::fromUtf8("expense_horizontalLayout_3"));
        expense_horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        expense_verticalLayout = new QVBoxLayout();
        expense_verticalLayout->setObjectName(QString::fromUtf8("expense_verticalLayout"));
        expense_category = new QLabel(layoutWidget_3);
        expense_category->setObjectName(QString::fromUtf8("expense_category"));
        expense_category->setFont(font1);

        expense_verticalLayout->addWidget(expense_category);

        money_4 = new QLabel(layoutWidget_3);
        money_4->setObjectName(QString::fromUtf8("money_4"));
        money_4->setFont(font1);

        expense_verticalLayout->addWidget(money_4);

        expense_description = new QLabel(layoutWidget_3);
        expense_description->setObjectName(QString::fromUtf8("expense_description"));
        expense_description->setFont(font1);

        expense_verticalLayout->addWidget(expense_description);


        expense_horizontalLayout_3->addLayout(expense_verticalLayout);

        expense_verticalLayout_2 = new QVBoxLayout();
        expense_verticalLayout_2->setObjectName(QString::fromUtf8("expense_verticalLayout_2"));
        expense_horizontalLayout_4 = new QHBoxLayout();
        expense_horizontalLayout_4->setObjectName(QString::fromUtf8("expense_horizontalLayout_4"));
        expense_verticalLayout_3 = new QVBoxLayout();
        expense_verticalLayout_3->setObjectName(QString::fromUtf8("expense_verticalLayout_3"));
        expense_CategoryBox = new QComboBox(layoutWidget_3);
        expense_CategoryBox->addItem(QString());
        expense_CategoryBox->addItem(QString());
        expense_CategoryBox->addItem(QString());
        expense_CategoryBox->addItem(QString());
        expense_CategoryBox->addItem(QString());
        expense_CategoryBox->addItem(QString());
        expense_CategoryBox->addItem(QString());
        expense_CategoryBox->setObjectName(QString::fromUtf8("expense_CategoryBox"));

        expense_verticalLayout_3->addWidget(expense_CategoryBox);

        expense_horizontalLayout_5 = new QHBoxLayout();
        expense_horizontalLayout_5->setObjectName(QString::fromUtf8("expense_horizontalLayout_5"));
        expense_lineEdit = new QLineEdit(layoutWidget_3);
        expense_lineEdit->setObjectName(QString::fromUtf8("expense_lineEdit"));

        expense_horizontalLayout_5->addWidget(expense_lineEdit);

        expense_plus_btn = new QPushButton(layoutWidget_3);
        expense_plus_btn->setObjectName(QString::fromUtf8("expense_plus_btn"));
        expense_plus_btn->setMinimumSize(QSize(80, 24));
        expense_plus_btn->setMaximumSize(QSize(16777215, 24));

        expense_horizontalLayout_5->addWidget(expense_plus_btn);


        expense_verticalLayout_3->addLayout(expense_horizontalLayout_5);


        expense_horizontalLayout_4->addLayout(expense_verticalLayout_3);


        expense_verticalLayout_2->addLayout(expense_horizontalLayout_4);

        expense_horizontalLayout_6 = new QHBoxLayout();
        expense_horizontalLayout_6->setObjectName(QString::fromUtf8("expense_horizontalLayout_6"));
        expense_line_money = new QLineEdit(layoutWidget_3);
        expense_line_money->setObjectName(QString::fromUtf8("expense_line_money"));

        expense_horizontalLayout_6->addWidget(expense_line_money);

        expense_label = new QLabel(layoutWidget_3);
        expense_label->setObjectName(QString::fromUtf8("expense_label"));
        expense_label->setFont(font1);

        expense_horizontalLayout_6->addWidget(expense_label);


        expense_verticalLayout_2->addLayout(expense_horizontalLayout_6);

        expense_horizontalLayout_7 = new QHBoxLayout();
        expense_horizontalLayout_7->setObjectName(QString::fromUtf8("expense_horizontalLayout_7"));
        expense_line_descript = new QLineEdit(layoutWidget_3);
        expense_line_descript->setObjectName(QString::fromUtf8("expense_line_descript"));

        expense_horizontalLayout_7->addWidget(expense_line_descript);

        expense_label_2 = new QLabel(layoutWidget_3);
        expense_label_2->setObjectName(QString::fromUtf8("expense_label_2"));

        expense_horizontalLayout_7->addWidget(expense_label_2);


        expense_verticalLayout_2->addLayout(expense_horizontalLayout_7);


        expense_horizontalLayout_3->addLayout(expense_verticalLayout_2);

        expense_line = new QFrame(expensepage);
        expense_line->setObjectName(QString::fromUtf8("expense_line"));
        expense_line->setGeometry(QRect(590, 420, 451, 20));
        expense_line->setFrameShape(QFrame::HLine);
        expense_line->setFrameShadow(QFrame::Sunken);
        expense_line_2 = new QFrame(expensepage);
        expense_line_2->setObjectName(QString::fromUtf8("expense_line_2"));
        expense_line_2->setGeometry(QRect(650, 100, 391, 20));
        expense_line_2->setFrameShape(QFrame::HLine);
        expense_line_2->setFrameShadow(QFrame::Sunken);
        expense_lable_2 = new QLabel(expensepage);
        expense_lable_2->setObjectName(QString::fromUtf8("expense_lable_2"));
        expense_lable_2->setGeometry(QRect(620, 100, 54, 12));
        expense_lable_2->setFont(font1);
        expense_Save_btn = new QPushButton(expensepage);
        expense_Save_btn->setObjectName(QString::fromUtf8("expense_Save_btn"));
        expense_Save_btn->setGeometry(QRect(850, 360, 71, 24));
        expense_Save_btn->setAutoFillBackground(false);
        expense_Save_btn->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:rgb(0,0,0);\n"
""));
        expense_delete_btn = new QPushButton(expensepage);
        expense_delete_btn->setObjectName(QString::fromUtf8("expense_delete_btn"));
        expense_delete_btn->setGeometry(QRect(940, 360, 71, 24));
        expense_delete_btn->setAutoFillBackground(false);
        expense_delete_btn->setStyleSheet(QString::fromUtf8("background-color:rgb(203, 211, 255);\n"
"color:rgb(0,0,0);"));
        expense_line_3 = new QFrame(expensepage);
        expense_line_3->setObjectName(QString::fromUtf8("expense_line_3"));
        expense_line_3->setGeometry(QRect(1010, 90, 51, 351));
        expense_line_3->setFrameShape(QFrame::VLine);
        expense_line_3->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_4 = new QWidget(expensepage);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(230, 450, 661, 111));
        expense_horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_4);
        expense_horizontalLayout->setObjectName(QString::fromUtf8("expense_horizontalLayout"));
        expense_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Expense_home_btn = new QPushButton(horizontalLayoutWidget_4);
        Expense_home_btn->setObjectName(QString::fromUtf8("Expense_home_btn"));
        Expense_home_btn->setFont(font);
        Expense_home_btn->setStyleSheet(QString::fromUtf8(""));

        expense_horizontalLayout->addWidget(Expense_home_btn);

        Expense_planning_btn = new QPushButton(horizontalLayoutWidget_4);
        Expense_planning_btn->setObjectName(QString::fromUtf8("Expense_planning_btn"));
        Expense_planning_btn->setFont(font);
        Expense_planning_btn->setStyleSheet(QString::fromUtf8(""));

        expense_horizontalLayout->addWidget(Expense_planning_btn);

        Expense_planning_btn_2 = new QPushButton(horizontalLayoutWidget_4);
        Expense_planning_btn_2->setObjectName(QString::fromUtf8("Expense_planning_btn_2"));
        Expense_planning_btn_2->setFont(font);
        Expense_planning_btn_2->setStyleSheet(QString::fromUtf8(""));

        expense_horizontalLayout->addWidget(Expense_planning_btn_2);

        expense_monit_btn = new QPushButton(horizontalLayoutWidget_4);
        expense_monit_btn->setObjectName(QString::fromUtf8("expense_monit_btn"));
        expense_monit_btn->setFont(font);
        expense_monit_btn->setStyleSheet(QString::fromUtf8(""));

        expense_horizontalLayout->addWidget(expense_monit_btn);

        exepense_exit_btn = new QPushButton(horizontalLayoutWidget_4);
        exepense_exit_btn->setObjectName(QString::fromUtf8("exepense_exit_btn"));
        exepense_exit_btn->setFont(font);
        exepense_exit_btn->setStyleSheet(QString::fromUtf8(""));

        expense_horizontalLayout->addWidget(exepense_exit_btn);

        expense_name = new QLabel(expensepage);
        expense_name->setObjectName(QString::fromUtf8("expense_name"));
        expense_name->setGeometry(QRect(70, 20, 80, 39));
        expense_name->setFont(font);
        expense_lable_4 = new QLabel(expensepage);
        expense_lable_4->setObjectName(QString::fromUtf8("expense_lable_4"));
        expense_lable_4->setGeometry(QRect(20, 20, 51, 39));
        expense_lable_4->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/expense.png);\n"
""));
        stackedWidget->addWidget(expensepage);
        expense_lable->raise();
        expense_lable_3->raise();
        expense_dateEdit->raise();
        ExpenseWidget->raise();
        layoutWidget_3->raise();
        expense_line->raise();
        expense_line_2->raise();
        expense_lable_2->raise();
        expense_line_3->raise();
        horizontalLayoutWidget_4->raise();
        expense_Save_btn->raise();
        expense_delete_btn->raise();
        expense_name->raise();
        expense_lable_4->raise();
        mon_page = new QWidget();
        mon_page->setObjectName(QString::fromUtf8("mon_page"));
        by_period_btn = new QPushButton(mon_page);
        by_period_btn->setObjectName(QString::fromUtf8("by_period_btn"));
        by_period_btn->setGeometry(QRect(490, 430, 101, 20));
        monitoring_icon2 = new QLabel(mon_page);
        monitoring_icon2->setObjectName(QString::fromUtf8("monitoring_icon2"));
        monitoring_icon2->setGeometry(QRect(490, 290, 91, 91));
        monitoring_icon2->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/expense2.png)"));
        Total_ex_btn = new QPushButton(mon_page);
        Total_ex_btn->setObjectName(QString::fromUtf8("Total_ex_btn"));
        Total_ex_btn->setGeometry(QRect(230, 430, 111, 20));
        monitoring_icon1 = new QLabel(mon_page);
        monitoring_icon1->setObjectName(QString::fromUtf8("monitoring_icon1"));
        monitoring_icon1->setGeometry(QRect(250, 280, 91, 91));
        monitoring_icon1->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/expense1.png)"));
        background_in_2 = new QLabel(mon_page);
        background_in_2->setObjectName(QString::fromUtf8("background_in_2"));
        background_in_2->setGeometry(QRect(220, 190, 671, 281));
        background_in_2->setStyleSheet(QString::fromUtf8("background-color:rgb(243, 243, 255)"));
        background_in_2->setFrameShape(QFrame::WinPanel);
        monitoring_icon3 = new QLabel(mon_page);
        monitoring_icon3->setObjectName(QString::fromUtf8("monitoring_icon3"));
        monitoring_icon3->setGeometry(QRect(740, 280, 91, 91));
        monitoring_icon3->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/expense3.png)"));
        background_2 = new QLabel(mon_page);
        background_2->setObjectName(QString::fromUtf8("background_2"));
        background_2->setGeometry(QRect(-370, -20, 1431, 601));
        background_2->setStyleSheet(QString::fromUtf8("background-color:rgb(176, 193, 255)"));
        By_category_btn = new QPushButton(mon_page);
        By_category_btn->setObjectName(QString::fromUtf8("By_category_btn"));
        By_category_btn->setGeometry(QRect(740, 430, 101, 20));
        horizontalLayoutWidget_5 = new QWidget(mon_page);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(220, 460, 771, 111));
        monit_horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_5);
        monit_horizontalLayout->setObjectName(QString::fromUtf8("monit_horizontalLayout"));
        monit_horizontalLayout->setContentsMargins(0, 0, 0, 0);
        monit_home_btn = new QPushButton(horizontalLayoutWidget_5);
        monit_home_btn->setObjectName(QString::fromUtf8("monit_home_btn"));
        monit_home_btn->setFont(font);
        monit_home_btn->setStyleSheet(QString::fromUtf8(""));

        monit_horizontalLayout->addWidget(monit_home_btn);

        monit_plan_btn = new QPushButton(horizontalLayoutWidget_5);
        monit_plan_btn->setObjectName(QString::fromUtf8("monit_plan_btn"));
        monit_plan_btn->setFont(font);
        monit_plan_btn->setStyleSheet(QString::fromUtf8(""));

        monit_horizontalLayout->addWidget(monit_plan_btn);

        monit_expense_btn = new QPushButton(horizontalLayoutWidget_5);
        monit_expense_btn->setObjectName(QString::fromUtf8("monit_expense_btn"));
        monit_expense_btn->setFont(font);
        monit_expense_btn->setStyleSheet(QString::fromUtf8(""));

        monit_horizontalLayout->addWidget(monit_expense_btn);

        monit_exit_btn_2 = new QPushButton(horizontalLayoutWidget_5);
        monit_exit_btn_2->setObjectName(QString::fromUtf8("monit_exit_btn_2"));
        monit_exit_btn_2->setFont(font);
        monit_exit_btn_2->setStyleSheet(QString::fromUtf8(""));

        monit_horizontalLayout->addWidget(monit_exit_btn_2);

        monit_exit_btn = new QPushButton(horizontalLayoutWidget_5);
        monit_exit_btn->setObjectName(QString::fromUtf8("monit_exit_btn"));
        monit_exit_btn->setFont(font);
        monit_exit_btn->setStyleSheet(QString::fromUtf8(""));

        monit_horizontalLayout->addWidget(monit_exit_btn);

        layoutWidget1 = new QWidget(mon_page);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 141, 51));
        monit_horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        monit_horizontalLayout_2->setObjectName(QString::fromUtf8("monit_horizontalLayout_2"));
        monit_horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        monitoring_icon = new QLabel(layoutWidget1);
        monitoring_icon->setObjectName(QString::fromUtf8("monitoring_icon"));
        monitoring_icon->setStyleSheet(QString::fromUtf8("background-image:url(:/resourcefile/monitoring.png)"));

        monit_horizontalLayout_2->addWidget(monitoring_icon);

        mornitoring = new QLabel(layoutWidget1);
        mornitoring->setObjectName(QString::fromUtf8("mornitoring"));
        mornitoring->setFont(font);
        mornitoring->setFrameShape(QFrame::NoFrame);

        monit_horizontalLayout_2->addWidget(mornitoring);

        stackedWidget->addWidget(mon_page);
        layoutWidget1->raise();
        background_2->raise();
        background_in_2->raise();
        by_period_btn->raise();
        monitoring_icon2->raise();
        Total_ex_btn->raise();
        monitoring_icon1->raise();
        monitoring_icon3->raise();
        By_category_btn->raise();
        horizontalLayoutWidget_5->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        main_label->setText(QString());
        main_planning_btn_2->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        main_planning_btn->setText(QCoreApplication::translate("MainWindow", "planning", nullptr));
        main_expense_btn->setText(QCoreApplication::translate("MainWindow", "expense", nullptr));
        main_monit_btn->setText(QCoreApplication::translate("MainWindow", "monitoring", nullptr));
        main_exit_btn->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        plan_label->setText(QString());
        plan_home_btn->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        plan_home_btn_2->setText(QCoreApplication::translate("MainWindow", "Planning", nullptr));
        plan_expense_btn->setText(QCoreApplication::translate("MainWindow", "Expense", nullptr));
        planmonit_btn->setText(QCoreApplication::translate("MainWindow", "Monitoring", nullptr));
        plan_exit_btn->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        plan_category_2->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        plan_money_2->setText(QCoreApplication::translate("MainWindow", "Money", nullptr));
        plan_description_2->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        plan_CategoryBox->setItemText(0, QCoreApplication::translate("MainWindow", "Food", nullptr));
        plan_CategoryBox->setItemText(1, QCoreApplication::translate("MainWindow", "Education", nullptr));
        plan_CategoryBox->setItemText(2, QCoreApplication::translate("MainWindow", "Transportation", nullptr));
        plan_CategoryBox->setItemText(3, QCoreApplication::translate("MainWindow", "Clothes", nullptr));
        plan_CategoryBox->setItemText(4, QCoreApplication::translate("MainWindow", "Entertainment", nullptr));
        plan_CategoryBox->setItemText(5, QCoreApplication::translate("MainWindow", "Communication fee", nullptr));
        plan_CategoryBox->setItemText(6, QCoreApplication::translate("MainWindow", "If you want add more input name and press +", nullptr));

        plan_plus_btn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        plan_label_3->setText(QCoreApplication::translate("MainWindow", "$", nullptr));
        plan_lable->setText(QString());
        plan_label_5->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        plan_month->setText(QCoreApplication::translate("MainWindow", "Month", nullptr));
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

        plan_addButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        plan_delete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
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
        plan_label_7->setText(QString());
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
        expense_category->setText(QCoreApplication::translate("MainWindow", "Category", nullptr));
        money_4->setText(QCoreApplication::translate("MainWindow", "Money", nullptr));
        expense_description->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        expense_CategoryBox->setItemText(0, QCoreApplication::translate("MainWindow", "Food", nullptr));
        expense_CategoryBox->setItemText(1, QCoreApplication::translate("MainWindow", "Education", nullptr));
        expense_CategoryBox->setItemText(2, QCoreApplication::translate("MainWindow", "Transportation", nullptr));
        expense_CategoryBox->setItemText(3, QCoreApplication::translate("MainWindow", "Clothes", nullptr));
        expense_CategoryBox->setItemText(4, QCoreApplication::translate("MainWindow", "Entertainment", nullptr));
        expense_CategoryBox->setItemText(5, QCoreApplication::translate("MainWindow", "Communication fee", nullptr));
        expense_CategoryBox->setItemText(6, QCoreApplication::translate("MainWindow", "If you want add more input name and press +", nullptr));

        expense_plus_btn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        expense_label->setText(QCoreApplication::translate("MainWindow", "$", nullptr));
        expense_label_2->setText(QString());
        expense_lable_2->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        expense_Save_btn->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        expense_delete_btn->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        Expense_home_btn->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        Expense_planning_btn->setText(QCoreApplication::translate("MainWindow", "Planning", nullptr));
        Expense_planning_btn_2->setText(QCoreApplication::translate("MainWindow", "Expense", nullptr));
        expense_monit_btn->setText(QCoreApplication::translate("MainWindow", "Monitoring", nullptr));
        exepense_exit_btn->setText(QCoreApplication::translate("MainWindow", "EXIT", nullptr));
        expense_name->setText(QCoreApplication::translate("MainWindow", "Exspense  ", nullptr));
        expense_lable_4->setText(QString());
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
        monitoring_icon->setText(QString());
        mornitoring->setText(QCoreApplication::translate("MainWindow", "Monitoring", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
