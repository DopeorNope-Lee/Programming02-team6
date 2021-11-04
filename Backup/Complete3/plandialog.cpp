#include "plandialog.h"
#include "ui_plandialog.h"
#include "mainwindow.h"
#include "add_expense.h"
#include "ui_add_expense.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>

planDialog::planDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::planDialog)
{
    ui->setupUi(this);
    setWindowTitle("Planning");
}

planDialog::~planDialog()
{
    delete ui;
}

void planDialog::on_closeButton_clicked()
{
    hide();
}


void planDialog::on_AddButton_clicked()
{
    add_expense adding_exp;
    adding_exp.setModal(true);
    adding_exp.exec();
}

