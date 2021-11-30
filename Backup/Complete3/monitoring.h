#ifndef MONITORING_H
#define MONITORING_H

#include <QDialog>
#include "monitoring1.h"
#include "monitoring2.h"
#include "monitoring3.h"
namespace Ui {
class Monitoring;
}

class Monitoring : public QDialog
{
    Q_OBJECT

public:
    explicit Monitoring(QWidget *parent = nullptr);
    ~Monitoring();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Monitoring *ui;
};

#endif // MONITORING_H
