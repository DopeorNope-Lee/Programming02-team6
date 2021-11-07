#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "plandialog.h"
#include "ui_plandialog.h"
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

