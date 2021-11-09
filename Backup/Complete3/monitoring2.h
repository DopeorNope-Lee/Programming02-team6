#ifndef MONITORING2_H
#define MONITORING2_H

#include <QDialog>

namespace Ui {
class Monitoring2;
}

class Monitoring2 : public QDialog
{
    Q_OBJECT

public:
    explicit Monitoring2(QWidget *parent = nullptr);
    ~Monitoring2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Monitoring2 *ui;
};

#endif // MONITORING2_H
