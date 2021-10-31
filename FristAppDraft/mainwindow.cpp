#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "planning.h"
#include <QApplication>
#include <QSqlDriver>
#include <QSqlDatabase>
#include <QSqlQuery>

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


void MainWindow::on_Planningbutton_clicked()
{
    Planning planning;
    planning.show();



}

