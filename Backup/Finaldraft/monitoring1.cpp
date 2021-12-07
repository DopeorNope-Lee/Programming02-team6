#include "monitoring1.h"
#include "monitoring_edit.h"
#include "ui_monitoring1.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>
#include <QString>

//in this case if we delete modal=> can load data, so we leave it
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
    Monitoring1 obj;

    QSqlQueryModel * modal = new QSqlQueryModel();
    QString select_month = ui-> month_Box-> currentText();
    QString select_cate = ui-> comboBox -> currentText();
    QSqlQuery* qry;
    qry=new QSqlQuery(obj.mydb);
    if(select_month =="ALL" && select_cate == "ALL")
    {
        qry -> prepare("select * from Real");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);

    }
    else if(select_month == "ALL")
    {
        qry -> prepare("select * from Real where Category='"+select_cate+"'");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);

    }
    else if(select_cate == "ALL")
    {
        qry -> prepare("select * from Real where Month='"+select_month+"'");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);

    }
      else
    {
        qry -> prepare("select * from Real where Category='"+select_cate+"'and Month='"+select_month+"'");
        qry->exec();
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);

    }

    delete qry;


}


void Monitoring1::on_pushButton_2_clicked()
{
    Monitoring1 obj;
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* qry;
    qry=new QSqlQuery(obj.mydb);
    qry -> prepare("select Year,Month, Day, Category, Amount,Description from Real");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    qDebug() << (modal->rowCount());
    delete qry;


}



void Monitoring1::on_pushButton_4_clicked()
{
    ui->comboBox->clear();
    Monitoring1 obj;
    QSqlQueryModel * modal = new QSqlQueryModel();

    QSqlQuery qry("select distinct Category from Real");
    while(qry.next())
    {
        ui->comboBox->addItem(qry.value(0).toString());

    }
    ui->comboBox->addItem("ALL");
    qDebug() << (modal->rowCount());


}


void Monitoring1::on_Edit_btn_clicked()
{
    Monitoring_edit moniedit;
    moniedit.setModal(true);
    moniedit.exec();
}

