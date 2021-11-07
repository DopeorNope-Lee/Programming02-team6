#ifndef ADD_EXPENSE_H
#define ADD_EXPENSE_H
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMainWindow>

#include <QDialog>

namespace Ui {
class add_expense;
}

class add_expense : public QDialog
{
    Q_OBJECT

public:
    explicit add_expense(QWidget *parent = nullptr);
    ~add_expense();
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

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::add_expense *ui;
};

#endif // ADD_EXPENSE_H
