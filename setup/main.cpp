#include "mainwindow.h"
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlQuery>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
