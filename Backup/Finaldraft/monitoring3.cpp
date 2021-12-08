#include "monitoring3.h"
#include "ui_monitoring3.h"


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
    //initializing
    int count_row = ui->Plantable->rowCount();
    for ( int i = 0; i < count_row; ++i )
    {
        ui->Plantable->removeRow(0);
    }
    int count_row2 = ui->Expensetable->rowCount();
    for ( int i = 0; i < count_row2; ++i )
    {
        ui->Expensetable->removeRow(0);
    }

    QString year=ui->YearspinBox->text();
    QString month=ui->monthspinBox->currentText();
    QSqlQueryModel * modal = new QSqlQueryModel();

    //planning part
    QSqlQuery qry("select Category, Sum(Amount) from Plan where Month = '"+month+"' group by Category");
    while(qry.next())
    {
        ui->Plantable->insertRow(ui->Plantable->rowCount());
        QString textcat =qry.value(0).toString();
        ui->Plantable->setItem(ui->Plantable->rowCount()-1,0,new QTableWidgetItem(textcat));
        ui->Plantable->setItem(ui->Plantable->rowCount()-1,1,new QTableWidgetItem(QString::number(qry.value(1).toInt())));

    }

    qDebug() << (modal->rowCount());
    delete modal;
    //expense part
    QSqlQueryModel * modal1 = new QSqlQueryModel();
    QString querystr="select Category, Sum(Amount) from Real where Year="+year+" and Month = '"+month+"' group by Category";
    QSqlQuery qry1(querystr);
    while(qry1.next())
    {
        ui->Expensetable->insertRow(ui->Expensetable->rowCount());
        QString textcat1 =qry1.value(0).toString();
        ui->Expensetable->setItem(ui->Expensetable->rowCount()-1,0,new QTableWidgetItem(textcat1));
        ui->Expensetable->setItem(ui->Expensetable->rowCount()-1,1,new QTableWidgetItem(QString::number(qry1.value(1).toInt())));

    }
    qDebug() << (modal1->rowCount());
    delete modal1;
}
