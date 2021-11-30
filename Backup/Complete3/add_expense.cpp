#include "add_expense.h"
#include "ui_add_expense.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QTableWidget>
#include <QDebug>

static int value;

add_expense::add_expense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_expense)
{
    ui->setupUi(this);
    this->setWindowTitle("Expense");
    this->connOpen();
    QSqlQueryModel initmodel;
    QSqlQuery initqry("select * from Real");
    while(initqry.next())
    {
        ui->ExpenseWidget->insertRow(ui->ExpenseWidget->rowCount());
        int transID =initqry.value(0).toInt();
        QString day_p = QString::number(initqry.value(1).toInt())+"-" + initqry.value(2).toString() + "-" + QString::number(initqry.value(3).toInt());
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,0,new QTableWidgetItem(QString::number(transID)));
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,1,new QTableWidgetItem(day_p));
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,2,new QTableWidgetItem(initqry.value(4).toString()));//category
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,3,new QTableWidgetItem(QString::number(initqry.value(5).toInt())));//amount
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,4,new QTableWidgetItem(initqry.value(6).toString()));//description
    }
    qDebug() << (initmodel.rowCount());

}


add_expense::~add_expense()

{
    this->connClose();
    delete ui;
}



void add_expense::on_pushButton_clicked()
{
    //update Display
    int count_row = ui->ExpenseWidget->rowCount();
    for ( int i = 0; i < count_row; ++i )
    {
        ui->ExpenseWidget->removeRow(0);
    }

    add_expense obj;
    //update database
    //for SQL
    QString yr = ui->dateEdit->text().left(4);
    QString mon = ui->dateEdit->text().mid(5,3);
    QString dayday = ui->dateEdit->text().right(2);
    QString Year,Month,Day,Category,Money,Description;
    Year = yr;
    Month = mon;
    Day=dayday;
    Category = ui->CategoryBox->currentText();
    Money = ui->line_money_2->text();
    Description = ui->line_descript_2->text();
    //save
    QSqlQuery qry1;
    qry1.prepare("insert into Real values(:key,:Year,:Month,:Day,:Category,:Amount,:Description)");
    qry1.bindValue(":Year",Year);
    qry1.bindValue(":Month",Month);
    qry1.bindValue(":Day",Day);
    qry1.bindValue(":Category",Category);
    qry1.bindValue(":Amount",Money);
    qry1.bindValue(":Description",Description);

    if(qry1.exec())
    {
        QMessageBox::about(this,tr("Save"),tr("Data is saved"));

    }
    else {
        QMessageBox::critical(this,tr("Error::"),qry1.lastError().text());
    }

    QSqlQueryModel modal;
    QSqlQuery qry("select * from Real");

    while(qry.next())
    {
        ui->ExpenseWidget->insertRow(ui->ExpenseWidget->rowCount());
        int transID =qry.value(0).toInt();
        QString day_p = QString::number(qry.value(1).toInt())+"-" + qry.value(2).toString() + "-" + QString::number(qry.value(3).toInt());
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,0,new QTableWidgetItem(QString::number(transID)));
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,1,new QTableWidgetItem(day_p));
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,2,new QTableWidgetItem(qry.value(4).toString()));//category
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,3,new QTableWidgetItem(QString::number(qry.value(5).toInt())));//amount
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,4,new QTableWidgetItem(qry.value(6).toString()));//description
    }
    qDebug() << (modal.rowCount());
    //ADD TO DISPLAY
    ui->lineEdit->clear();
    ui->line_descript_2->clear();
    ui->line_money_2->clear();
}


void add_expense::on_pushButton_4_clicked()
{
    this->connClose();
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
    ui->lineEdit->clear();
}



void add_expense::on_ExpenseWidget_clicked(const QModelIndex &index)
{
    ::value=ui->ExpenseWidget->selectionModel()->currentIndex().row();
}


void add_expense::on_DEL_btn_clicked()
{
    add_expense obj;
    QSqlQuery qry;
    qry.prepare("delete from Real where Key="+ ui->ExpenseWidget->item(value,0)->text());
    qry.exec();

    int count_row = ui->ExpenseWidget->rowCount();
    for ( int i = 0; i < count_row; ++i )
    {
        ui->ExpenseWidget->removeRow(0);
    }


    //update database
    QSqlQueryModel modal;

    //load data and display it.
    QSqlQuery qry1("select * from Real");
    while(qry1.next())
    {
        ui->ExpenseWidget->insertRow(ui->ExpenseWidget->rowCount());
        int transID =qry1.value(0).toInt();
        QString day_p = QString::number(qry1.value(1).toInt())+"-" + qry1.value(2).toString() + "-" + QString::number(qry1.value(3).toInt());
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,0,new QTableWidgetItem(QString::number(transID)));
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,1,new QTableWidgetItem(day_p));
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,2,new QTableWidgetItem(qry1.value(4).toString()));//category
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,3,new QTableWidgetItem(QString::number(qry1.value(5).toInt())));//amount
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,4,new QTableWidgetItem(qry1.value(6).toString()));//description
    }

    qDebug() << (modal.rowCount());

}

