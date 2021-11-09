#include "monitoring3.h"
#include "ui_monitoring3.h"
#include "monitoring2.h"
#include "monitoring1.h"
#include "monitoring.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>


Monitoring3::Monitoring3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Monitoring3)
{
    ui->setupUi(this);
    this->setWindowTitle("By Category");
}

Monitoring3::~Monitoring3()
{
    delete ui;
}

void Monitoring3::on_cancleButton_clicked()
{
    this->close();
}


void Monitoring3::on_pushButton_clicked()
{
    QString year=ui->YearspinBox->text();
    QString month=ui->monthspinBox->currentText();

    Monitoring1 obj;
    QSqlQueryModel * modal = new QSqlQueryModel();
    obj.connOpen();
    QSqlQuery qry;
    qry.exec("SELECT Year Month Category Amount FROM Plan");
    while(qry.next())
    {
        QString textcat = qry.value(2).toString();
        int amount= qry.value(3).toInt();
        bool flag = true;
        for (int i =0; i < ui->Plantable->rowCount()-1;++i)
            if(textcat==ui->Plantable->item(i,0)->text())
            {
                flag=false;
                int k = ui->Plantable->item(i,1)->text().toInt();
                ui->Plantable->setItem(i,1, new QTableWidgetItem(QString::number(k+amount)));
            }
        if (flag==true)
        {
            ui->Plantable->setItem(ui->Plantable->rowCount()-1, 0, new QTableWidgetItem(textcat));
            ui->Plantable->setItem(ui->Plantable->rowCount()-1, 1, new QTableWidgetItem(QString::number(amount)));
        }
        else
        {

        }


    }
    obj.connClose();
    qDebug() << (modal->rowCount());

}

