#ifndef ADDCONTACTDIALOG_H
#define ADDCONTACTDIALOG_H

#include <QDialog>

namespace Ui {
class addcontactDialog;
}

class addcontactDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addcontactDialog(QWidget *parent = nullptr);
    ~addcontactDialog();

private:
    Ui::addcontactDialog *ui;
};

#endif // ADDCONTACTDIALOG_H
