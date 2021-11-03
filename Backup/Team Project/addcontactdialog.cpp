#include "addcontactdialog.h"
#include "ui_addcontactdialog.h"

addcontactDialog::addcontactDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addcontactDialog)
{
    ui->setupUi(this);
}

addcontactDialog::~addcontactDialog()
{
    delete ui;
}
