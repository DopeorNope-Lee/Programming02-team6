#include "monitoring2.h"
#include "monitoring_edit.h"
#include "ui_monitoring2.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>
#include <QString>

Monitoring2::Monitoring2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Monitoring2)
{
    ui->setupUi(this);
    this->setWindowTitle("By Period");
}

Monitoring2::~Monitoring2()
{
    delete ui;
}

void Monitoring2::on_pushButton_clicked()
{
    this->close();
}

QString return_month(const int &i)
{
    if (i==0)
        return "Jan";
    else if(i==1)
        return "Feb";
    else if (i==2)
        return "Mar";
    else if (i==3)
        return "Apr";
    else if (i==4)
        return "May";
    else if (i==5)
        return "Jun";
    else if (i==6)
        return "Jul";
    else if (i==7)
        return "Aug";
    else if (i==8)
        return "Sep";
    else if (i==9)
        return "Oct";
    else if (i==10)
        return "Nov";
    else
        return "Dec";
}

void Monitoring2::on_update_btn_clicked()
{
    //initializing
    int count_row = ui->displaywidget->rowCount();
    Monitoring2 obj;
    QSqlQueryModel * modal = new QSqlQueryModel();

    QString year=ui->spinBox->text();

    for ( int i = 0; i < count_row; ++i )
    {
        ui->displaywidget->removeRow(0);
    }


     //planning part
    for (int i=0;i<12;++i)
    {
        QString month=return_month(i);//month
        ui->displaywidget->insertRow(i);
        QSqlQuery qry("select sum(Amount) from Plan where Month='"+month+"'");
        while(qry.next())
        {


            ui->displaywidget->setItem(ui->displaywidget->rowCount()-1,0,new QTableWidgetItem(QString::number(qry.value(0).toInt())));

        }
        qDebug() << (modal->rowCount());


        //expense part
        QSqlQueryModel * modal1 = new QSqlQueryModel();
        QString querystr="select Sum(Amount) from Real where Year="+year+" and Month = '"+month+"'";
        QSqlQuery qry1(querystr);

        while(qry1.next())
        {
            ui->displaywidget->setItem(ui->displaywidget->rowCount()-1,1,new QTableWidgetItem(QString::number(qry1.value(0).toInt())));

        }
        int plan_v= ui->displaywidget->item(i,0)->text().toInt();
        int expense_v=ui->displaywidget->item(i,1)->text().toInt();
        int evaluation_v=plan_v - expense_v;
        ui->displaywidget->setItem(i,2,new QTableWidgetItem(QString::number(evaluation_v)));
        qDebug() << (modal1->rowCount());



        delete modal1;
    }
    delete modal;


}
