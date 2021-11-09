#include "monitoring2.h"
#include "ui_monitoring2.h"
#include "monitoring1.h"
#include "monitoring3.h"
#include "monitoring.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>

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

