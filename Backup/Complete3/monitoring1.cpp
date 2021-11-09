#include "monitoring1.h"
#include "ui_monitoring1.h"
#include "monitoring2.h"
#include "monitoring3.h"
#include "monitoring.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>
#include <QString>


Monitoring1::Monitoring1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Monitoring1)
{
    ui->setupUi(this);
    this->setWindowTitle("Total Expense");
}

Monitoring1::~Monitoring1()
{
    delete ui;
}

void Monitoring1::on_pushButton_clicked()
{
    this->close();
}


void Monitoring1::on_pushButton_3_clicked()
{


}


void Monitoring1::on_pushButton_2_clicked()
{
    Monitoring1 obj;
    QSqlQueryModel * modal = new QSqlQueryModel();
    obj.connOpen();
    QSqlQuery* qry;
    qry=new QSqlQuery(obj.mydb);
    qry -> prepare("select Year,Month, Day, Category, Amount,Description from Real");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    obj.connClose();
    qDebug() << (modal->rowCount());
}



void Monitoring1::on_pushButton_4_clicked()
{
    ui->comboBox->clear();
    Monitoring1 obj;
    QSqlQueryModel * modal = new QSqlQueryModel();

    obj.connOpen();
    QSqlQuery qry("select distinct Category from Real");
    while(qry.next())
    {
        ui->comboBox->addItem(qry.value(0).toString());

    }
    ui->comboBox->addItem("ALL");
    obj.connClose();
    qDebug() << (modal->rowCount());
}

