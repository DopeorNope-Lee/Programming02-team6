#include "planning.h"
#include "ui_planning.h"
#include "category.h"
#include "ui_category.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>
#include <QString>

static int value;

Planning::Planning(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Planning)
{
    ui->setupUi(this);
    this->setWindowTitle("Planning");
    this->connOpen();
    QSqlQueryModel initmodel;
    QString month= ui->combo_month->currentText();
    QSqlQuery initqry("select Key, Category, Amount, Description from Plan where Month='"+month+"'");
    while(initqry.next())
    {
        ui->planningWidget->insertRow(ui->planningWidget->rowCount());
        int transID =initqry.value(0).toInt();
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,0,new QTableWidgetItem(QString::number(transID)));
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,1,new QTableWidgetItem(initqry.value(1).toString()));//category
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,2,new QTableWidgetItem(QString::number(initqry.value(2).toInt())));//amount
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,3,new QTableWidgetItem(initqry.value(3).toString()));//description
    }
    qDebug() << (initmodel.rowCount());




}
Planning::~Planning()
{
    delete ui;
}
/*
void Planning::receive(QString str)
{
    qDebug() << str;
    ui->CategoryBox->addItem(str);
}
*/
void Planning::on_pushButton_clicked()
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


void Planning::on_addButton_clicked()
{
    //update Display
    int count_row = ui->planningWidget->rowCount();
    for ( int i = 0; i < count_row; ++i )
    {
        ui->planningWidget->removeRow(0);
    }

    Planning obj;
    //update database
    QSqlQueryModel modal;


    QString Year,Month,Category,Money,Description;
    Year = ui->spinBox->text();
    Month = ui->combo_month->currentText();
    Category = ui->CategoryBox->currentText();
    Money = ui->line_money_2->text();
    Description = ui->line_descript_2->text();


    QSqlQuery qry;
    qry.prepare("insert into Plan values(:Key,:Year,:Month,:Category,:Amount,:Description)");
    qry.bindValue(":Year",Year);
    qry.bindValue(":Month",Month);
    qry.bindValue(":Category",Category);
    qry.bindValue(":Amount",Money);
    qry.bindValue(":Description",Description);


    if(qry.exec())
    {
        QMessageBox::about(this,tr("Save"),tr("Data is saved"));
    }
    else {
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
    //load data and display it.
    QSqlQuery qry1("select Key, Category, Amount, Description from Plan");
    while(qry1.next())
    {
        ui->planningWidget->insertRow(ui->planningWidget->rowCount());
        int transID =qry1.value(0).toInt();
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,0,new QTableWidgetItem(QString::number(transID)));
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,1,new QTableWidgetItem(qry1.value(1).toString()));//category
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,2,new QTableWidgetItem(QString::number(qry1.value(2).toInt())));//amount
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,3,new QTableWidgetItem(qry1.value(3).toString()));//description
    }
    qDebug() << (modal.rowCount());

    //start saving data

    ui->lineEdit->clear();
    ui->line_descript_2->clear();
    ui->line_money_2->clear();
}




void Planning::on_cancle_Button_3_clicked()
{
    this->connClose();
    this->close();
}




void Planning::on_deleteButton_2_clicked()
{
    QSqlQuery qry;
    qry.prepare("delete from Plan where Key="+ ui->planningWidget->item(value,0)->text());
    qry.exec();
    //initiallizing
    int count_row = ui->planningWidget->rowCount();
    for ( int i = 0; i < count_row; ++i )
    {
        ui->planningWidget->removeRow(0);
    }
    QSqlQueryModel modal;
    QSqlQuery qry1("select Key, Category, Amount, Description from Plan");
    while(qry1.next())
    {
        ui->planningWidget->insertRow(ui->planningWidget->rowCount());
        int transID =qry1.value(0).toInt();
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,0,new QTableWidgetItem(QString::number(transID)));
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,1,new QTableWidgetItem(qry1.value(1).toString()));//category
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,2,new QTableWidgetItem(QString::number(qry1.value(2).toInt())));//amount
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,3,new QTableWidgetItem(qry1.value(3).toString()));//description
    }
    qDebug() << (modal.rowCount());


}


void Planning::on_planningWidget_clicked(const QModelIndex &index)
{

    ::value=ui->planningWidget->selectionModel()->currentIndex().row();

}

