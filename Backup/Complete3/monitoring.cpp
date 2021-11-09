#include "monitoring.h"
#include "ui_monitoring.h"
#include "monitoring2.h"
#include "monitoring1.h"
#include "monitoring3.h"
#include "monitoring.h"

Monitoring::Monitoring(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Monitoring)
{
    ui->setupUi(this);
    this->setWindowTitle("Monitoring");
}

Monitoring::~Monitoring()
{
    delete ui;
}

void Monitoring::on_pushButton_clicked()
{
    Monitoring1 monitor1;
    monitor1.setModal(true);
    monitor1.exec();
}


void Monitoring::on_pushButton_4_clicked()
{
    this->close();
}


void Monitoring::on_pushButton_2_clicked()
{
    Monitoring2 monitor2;
    monitor2.setModal(true);
    monitor2.exec();
}


void Monitoring::on_pushButton_3_clicked()
{
    Monitoring3 monitor3;
    monitor3.setModal(true);
    monitor3.exec();
}

