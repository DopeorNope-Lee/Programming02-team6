#ifndef MONITORING1_H
#define MONITORING1_H
#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>
#include <QString>
#include "monitoring_edit.h"
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


private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_Edit_btn_clicked();

private:
    Ui::Monitoring1 *ui;
};

#endif // MONITORING1_H
