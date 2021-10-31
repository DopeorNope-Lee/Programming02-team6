#include "planning.h"
#include "ui_planning.h"

Planning::Planning(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Planning)
{
    ui->setupUi(this);
}

Planning::~Planning()
{
    delete ui;
}
