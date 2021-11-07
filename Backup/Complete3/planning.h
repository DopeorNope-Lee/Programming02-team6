#ifndef PLANNING_H
#define PLANNING_H

#include "planning.h"
#include "ui_planning.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>
#include <QString>
namespace Ui {
class Planning;
}

class Planning : public QDialog
{
    Q_OBJECT

public:
    explicit Planning(QWidget *parent = nullptr);
    ~Planning();
    QSqlDatabase mydb;
    bool connOpen(){
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("./database.db");

        if(!mydb.open()){
            qDebug() << ("Failed to open the database");
            return false;
        } else {
            qDebug() <<("Connected");
            return true;
        }
    }
    void connClose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

private slots:
    void on_pushButton_clicked();

    void on_CategoryBox_activated(const QString &arg1);
//public slots:
  //  void receive(QString str);

    void on_addButton_clicked();

    void on_cancle_Button_3_clicked();


private:
    Ui::Planning *ui;
};

#endif // PLANNING_H
