#ifndef MONITORING_EDIT_H
#define MONITORING_EDIT_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>
#include <QString>
namespace Ui {
class Monitoring_edit;
}

class Monitoring_edit : public QDialog
{
    Q_OBJECT

public:
    explicit Monitoring_edit(QWidget *parent = nullptr);
    ~Monitoring_edit();
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
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_clicked();

private:
    Ui::Monitoring_edit *ui;
};

#endif // MONITORING_EDIT_H
