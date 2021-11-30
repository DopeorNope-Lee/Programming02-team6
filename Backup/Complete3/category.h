#ifndef CATEGORY_H
#define CATEGORY_H

#include <QDialog>
#include <Qstring>
#include "planning.h"

namespace Ui {
class Category;
}

class Category : public QDialog
{
    Q_OBJECT
signals:
    void send(QString str);

public:
    explicit Category(QWidget *parent = nullptr);
    ~Category();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Category *ui;
};

#endif // CATEGORY_H
