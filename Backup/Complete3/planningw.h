#ifndef PLANNINGW_H
#define PLANNINGW_H

#include <QWidget>
#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QComboBox>
#include <Qstring>
#include "category.h"

namespace Ui {
class Planningw;
}

class Planningw : public QWidget
{
    Q_OBJECT

public:
    explicit Planningw(QWidget *parent = nullptr);
    ~Planningw();

private slots:
    void on_pushButton_clicked();

    void on_CategoryBox_activated(const QString &arg1);
public slots:
    void receive(QString str);

private:
    Ui::Planningw *ui;
};

#endif // PLANNINGW_H
