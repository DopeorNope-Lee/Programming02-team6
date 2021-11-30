#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "planning.h"
#include "ui_planning.h"
#include "add_expense.h"
#include "ui_add_expense.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include "stdlib.h"
#include "monitoring2.h"
#include "monitoring1.h"
#include "monitoring3.h"
#include "monitoring.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Buddy Budgetting");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_planning_clicked()
{
    Planning plan;
    plan.setModal(true);
    plan.exec();
}


void MainWindow::on_expense_clicked()
{
    add_expense add_exp;
    add_exp.setModal(true);
    add_exp.exec();
}


void MainWindow::on_exit_clicked()
{

    QMessageBox MsgBox;
    MsgBox.setWindowTitle("WARNING");
    MsgBox.setInformativeText("Would you like to Exit?  \n");
    MsgBox.setStandardButtons(QMessageBox::Ok |QMessageBox::Cancel);
    MsgBox.setDefaultButton(QMessageBox::Ok);
    if ( MsgBox.exec() == QMessageBox::Ok )
    {
        this->close();
        exit(0);
    }

}


void MainWindow::on_mornitoring_clicked()
{
    Monitoring monitor_m;
    monitor_m.setModal(true);
    monitor_m.exec();
}

