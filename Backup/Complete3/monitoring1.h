#ifndef MONITORING1_H
#define MONITORING1_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>
#include <QString>

namespace Ui {
class Monitoring1;
}

class Monitoring1 : public QDialog
{
    Q_OBJECT

public:
    explicit Monitoring1(QWidget *parent = nullptr);
    ~Monitoring1();
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

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Monitoring1 *ui;
};

#endif // MONITORING1_H
