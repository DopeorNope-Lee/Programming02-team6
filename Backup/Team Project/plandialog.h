#ifndef PLANDIALOG_H
#define PLANDIALOG_H

#include <QDialog>

namespace Ui {
class planDialog;
}

class planDialog : public QDialog
{
    Q_OBJECT

public:
    explicit planDialog(QWidget *parent = nullptr);
    ~planDialog();

private slots:
    void on_closeButton_clicked();

private:
    Ui::planDialog *ui;
};

#endif // PLANDIALOG_H
