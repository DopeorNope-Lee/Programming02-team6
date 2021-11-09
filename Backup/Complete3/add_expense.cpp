#include "add_expense.h"
#include "ui_add_expense.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QTableWidget>
#include <QDebug>

add_expense::add_expense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_expense)
{
    ui->setupUi(this);
    this->setWindowTitle("Expense");
}

add_expense::~add_expense()

{
    delete ui;
}



void add_expense::on_pushButton_clicked()
{
    //ADD TO DISPLAY
    ui->ExpenseWidget->insertRow(ui->ExpenseWidget->rowCount());
    int amount= ui->line_money_2->text().toInt();//amount
    QString textcat = ui->CategoryBox->currentText();
    QString des= ui->line_descript_2->text();//description
    QString dating=ui->dateEdit->text();
    //for SQL
    QString yr = "";
    QString mon = "";
    QString dayday = "";
    for (int i=0;i<4;++i)
    {
        yr+=ui->dateEdit->text()[i];
    };
    for (int i=0;i<3;++i)
    {
        mon+= ui->dateEdit->text()[i+5];
    }
    for (int i=0; i<2 ; ++i)
    {
        dayday+=ui->dateEdit->text()[9+i];
    }
    ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1, 0, new QTableWidgetItem(dating));
    ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1, 1, new QTableWidgetItem(textcat));
    ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1, 2, new QTableWidgetItem(QString::number(amount)));
    ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1, 3, new QTableWidgetItem(des));
    add_expense obj;
    QString Year,Month,Day,Category,Money,Description;
    Year = yr;
    Month = mon;
    Day=dayday;
    Category = ui->CategoryBox->currentText();
    Money = ui->line_money_2->text();
    Description = ui->line_descript_2->text();

    obj.connOpen();

    QSqlQuery qry;
    qry.prepare("insert into Real values(:Key,:Year,:Month,:Day,:Category,:Amount,:Description)");
    qry.bindValue(":Year",Year);
    qry.bindValue(":Month",Month);
    qry.bindValue(":Day",Day);
    qry.bindValue(":Category",Category);
    qry.bindValue(":Amount",Money);
    qry.bindValue(":Description",Description);



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
    this->close();
}


void add_expense::on_pushButton_5_clicked()
{
    ui->CategoryBox->insertItem(ui->CategoryBox->count()-1,ui->lineEdit->text());
    QMessageBox MsgBox;
    MsgBox.setWindowTitle("Saved");
    MsgBox.setInformativeText(ui->lineEdit->text()+" saved at category! \n");
    MsgBox.setStandardButtons(QMessageBox::Ok );
    MsgBox.setDefaultButton(QMessageBox::Ok);
    if ( MsgBox.exec() == QMessageBox::Ok )
    {
        MsgBox.close();
    }
}


