#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include "monitoring1.h"
#include "monitoring2.h"
#include "monitoring3.h"
#include <QFileInfo>
#include <QMessageBox>
#include <QTableWidget>
#include <QDebug>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSqlDatabase mydb;
    bool connOpen(){
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("./database.db");

        if(!mydb.open()){

            qDebug() << ("Failed to open the database");
            return false;
        } else {
            qDebug() <<("Connected");
            return true;
        }
    }
    void connClose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    void update_Expense_screen();
    void update_plan_screen();
    void exit_message();

private slots:


    void on_main_planning_btn_clicked();

    void on_main_expense_btn_clicked();

    void on_main_monit_btn_clicked();

    void on_plan_home_btn_clicked();

    void on_plan_expense_btn_clicked();

    void on_planmonit_btn_clicked();

    void on_Expense_home_btn_clicked();

    void on_Expense_planning_btn_clicked();

    void on_expense_monit_btn_clicked();

    void on_monit_home_btn_clicked();

    void on_monit_plan_btn_clicked();

    void on_monit_expense_btn_clicked();

    void on_planningWidget_clicked(const QModelIndex &index);

    void on_plan_delete_clicked();

    void on_plan_addButton_clicked();

    void on_expense_Save_btn_clicked();

    void on_expense_delete_btn_clicked();

    void on_ExpenseWidget_clicked(const QModelIndex &index);

    void on_exepense_exit_btn_clicked();

    void on_plan_exit_btn_clicked();


    void on_main_exit_btn_clicked();

    void on_monit_exit_btn_clicked();

    void on_Total_ex_btn_clicked();

    void on_by_period_btn_clicked();

    void on_By_category_btn_clicked();

    void clear_catewidget();
    void on_plan_combo_month_currentTextChanged(const QString &arg1);

    void on_plan_spinBox_textChanged(const QString &arg1);

    void on_plan_plus_btn_clicked();

    void on_expense_plus_btn_clicked();

    void on_Category_btn2_clicked();

    void on_Category_btn_clicked();


    void on_Cate_list_pressed(const QModelIndex &index);

    void on_Category_btn_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
