#include "category.h"
#include "ui_category.h"
#include "planning.h"
#include "ui_planning.h"
#include <QComboBox>
#include <QString>

Category::Category(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Category)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()), this,  SLOT(on_pushButton_clicked()()));
}

Category::~Category()
{
    delete ui;
}

void Category::on_pushButton_clicked()
{

    QString str= ui->lineEdit->text();
    Planning planning;
    connect(this, SIGNAL(send(QString)), parent(), SLOT(receive(QString)));
    emit send(str);
    this->close();

}


void Category::on_pushButton_2_clicked()
{
    this->close();
}

