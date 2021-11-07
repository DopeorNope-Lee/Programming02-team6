#include "planningw.h"
#include "ui_planningw.h"
#include "category.h"
#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QComboBox>
#include <QString>



Planningw::Planningw(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Planningw)
{
    ui->setupUi(this);
}

Planningw::~Planningw()
{
    delete ui;
}
void Planningw::receive(QString str)
{
    qDebug() << str;
    ui->CategoryBox->addItem(str);
}

void Planningw::on_pushButton_clicked()
{
    Category cate;
    cate.setModal(true);
    cate.exec();
}


void Planningw::on_CategoryBox_activated(const QString &arg1)
{
}

