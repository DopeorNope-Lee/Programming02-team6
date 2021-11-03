#include "plandialog.h"
#include "ui_plandialog.h"
#include "mainwindow.h"
planDialog::planDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::planDialog)
{
    ui->setupUi(this);
}

planDialog::~planDialog()
{
    delete ui;
}

void planDialog::on_closeButton_clicked()
{
    hide();
}

