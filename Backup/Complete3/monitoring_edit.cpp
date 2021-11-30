#include "monitoring_edit.h"
#include "ui_monitoring_edit.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>
#include <QString>
#include <string>
#include <iostream>
#include <sstream>

QString key;

Monitoring_edit::Monitoring_edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Monitoring_edit)
{
    ui->setupUi(this);
}

Monitoring_edit::~Monitoring_edit()
{
    delete ui;
}

void Monitoring_edit::on_pushButton_2_clicked()
{
    this->close();
}


void Monitoring_edit::on_pushButton_3_clicked()
{
    Monitoring_edit obj;
    obj.connOpen();
    QSqlQueryModel * modal=new QSqlQueryModel();

    QSqlQuery* qry=new QSqlQuery(obj.mydb);
    QString month_combo = ui->Month_combo->currentText();
    qry->prepare("select * from Real where Month='"+month_combo+"'");

    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
}




void Monitoring_edit::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();

    Monitoring_edit obj;
    if(!obj.connOpen()){

        qDebug()<<"Fail to open";
        return;
    }

    obj.connOpen();
    QSqlQuery qry;
    qry.prepare("select * from Real where Key='"+val+"'");//Year='"+val+"'or Month='"+val+"'or Day='"+val+"'or Category='"+val+"'or Amount='"+val+"'or Description='"+val+"'");

    if(qry.exec())
    {
        while(qry.next())
        {
            key=qry.value(0).toString();
            ui->Year_edit->setText(qry.value(1).toString());
            ui->Month_edit->setText(qry.value(2).toString());
            ui->Day_edit->setText(qry.value(3).toString());
            ui->Cate_edit->setText(qry.value(4).toString());
            ui->Amount_edit->setText(qry.value(5).toString());
            ui->Desc_edit->setText(qry.value(6).toString());
        }
        obj.connClose();
    }
}


void Monitoring_edit::on_pushButton_clicked()
{
    Monitoring_edit obj;
    QString Year,Month,Day,Category,Amount,Description;
    Year=ui->Year_edit->text();
    Month=ui->Month_edit->text();
    Day=ui->Day_edit->text();
    Category=ui->Cate_edit->text();
    Amount=ui->Amount_edit->text();
    Description=ui->Desc_edit->text();

    obj.connOpen();
    QSqlQuery qry;
    qry.prepare("update Real set Year='"+Year+"',Month='"+Month+"',Day='"+Day+"',Category='"+Category+"',Amount='"+Amount+"',Description='"+Description+"'where Key='"+key+"'");

    if(qry.exec())
    {
        QMessageBox::critical(this,tr("edit"),tr("updated"));
        obj.connClose();
    } else
    {
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }

}

