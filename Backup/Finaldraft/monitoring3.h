#ifndef MONITORING3_H
#define MONITORING3_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>
#include <QString>

namespace Ui {
class Monitoring3;
}

class Monitoring3 : public QDialog
{
    Q_OBJECT

public:
    explicit Monitoring3(QWidget *parent = nullptr);
    ~Monitoring3();
    QSqlDatabase mydb;



private slots:
    void on_cancleButton_clicked();

    void on_pushButton_clicked();


private:
    Ui::Monitoring3 *ui;
};

#endif // MONITORING3_H
