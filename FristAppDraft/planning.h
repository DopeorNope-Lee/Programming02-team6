#ifndef PLANNING_H
#define PLANNING_H

#include <QMainWindow>

namespace Ui {
class Planning;
}

class Planning : public QMainWindow
{
    Q_OBJECT

public:
    explicit Planning(QWidget *parent = nullptr);
    ~Planning();

private:
    Ui::Planning *ui;
};

#endif // PLANNING_H
