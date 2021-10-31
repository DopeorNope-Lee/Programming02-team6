#include "expense.h"
#include"planning.h"
#include "mainwindow.h"
#include "ui_expense.h"

expense::expense(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::expense)
{
    ui->setupUi(this);
}

expense::~expense()
{
    delete ui;
}
