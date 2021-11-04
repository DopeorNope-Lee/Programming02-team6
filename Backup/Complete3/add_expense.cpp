#include "add_expense.h"
#include "ui_add_expense.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>


add_expense::add_expense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_expense)
{
    ui->setupUi(this);
}

add_expense::~add_expense()
{
    delete ui;
}

void add_expense::on_pushButton_clicked()
{
    add_expense obj;
    QString Year,Month,Week,Day,Category,Money;
    Year=ui->Text_year->text();
    Month=ui->Text_month->text();
    Week=ui->Text_week->text();
    Day=ui->Text_day->text();
    Category=ui->Text_category->text();
    Money=ui->Text_money->text();

    obj.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into expense values(:Year,:Month,:Week,:Day,:Category,:Money)");
    qry.bindValue(":Year",Year);
    qry.bindValue(":Month",Month);
    qry.bindValue(":Week",Week);
    qry.bindValue(":Day",Day);
    qry.bindValue(":Category",Category);
    qry.bindValue(":Money",Money);

    if(qry.exec())
    {
        QMessageBox::about(this,tr("Save"),tr("Data is saved"));
        obj.connClose();
    }
    else {
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }

}


void add_expense::on_pushButton_4_clicked()
{
    close();
}

