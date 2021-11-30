#ifndef MONITORING2_H
#define MONITORING2_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>
#include <QString>
namespace Ui {
class Monitoring2;
}

class Monitoring2 : public QDialog
{
    Q_OBJECT

public:
    explicit Monitoring2(QWidget *parent = nullptr);
    ~Monitoring2();

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



   void on_update_btn_clicked();

private:
    Ui::Monitoring2 *ui;
};

#endif // MONITORING2_H

