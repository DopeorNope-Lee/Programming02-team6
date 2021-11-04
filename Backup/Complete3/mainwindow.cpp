#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "plandialog.h"
#include "ui_plandialog.h"
#include "add_expense.h"
#include "ui_add_expense.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include "stdlib.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_planning_clicked()
{
    planDialog plan;
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

