#include "planning.h"
#include "ui_planning.h"
#include "category.h"
#include "ui_category.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>
#include <QDebug>
#include <QString>

Planning::Planning(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Planning)
{
    ui->setupUi(this);
    this->setWindowTitle("Planning");

}
Planning::~Planning()
{
    delete ui;
}
/*
void Planning::receive(QString str)
{
    qDebug() << str;
    ui->CategoryBox->addItem(str);
}
*/
void Planning::on_pushButton_clicked()
{
    ui->CategoryBox->insertItem(ui->CategoryBox->count()-1,ui->lineEdit->text());
    QMessageBox MsgBox;
    MsgBox.setWindowTitle("Saved");
    MsgBox.setInformativeText(ui->lineEdit->text()+" saved at category! \n");
    MsgBox.setStandardButtons(QMessageBox::Ok );
    MsgBox.setDefaultButton(QMessageBox::Ok);
    if ( MsgBox.exec() == QMessageBox::Ok )
    {
        MsgBox.close();
    }
    //Category cate;
   // cate.setModal(true);
   // cate.exec();
}


void Planning::on_CategoryBox_activated(const QString &arg1)
{
}


void Planning::on_addButton_clicked()
{
    //ADD TO DISPLAY
    ui->planningWidget->insertRow(ui->planningWidget->rowCount());
    int amount= ui->line_money_2->text().toInt();//amount
    QString textcat = ui->CategoryBox->currentText();
    QString des= ui->line_descript_2->text();//description

    ui->planningWidget->setItem(ui->planningWidget->rowCount()-1, 0, new QTableWidgetItem(textcat));
    ui->planningWidget->setItem(ui->planningWidget->rowCount()-1, 1, new QTableWidgetItem(QString::number(amount)));
    ui->planningWidget->setItem(ui->planningWidget->rowCount()-1, 2, new QTableWidgetItem(des));

    //
    Planning obj;
    QString Key,Year,Month,Category,Money,Description;
    Year = ui->spinBox->text();
    Month = ui->combo_month->currentText();
    Category = ui->CategoryBox->currentText();
    Money = ui->line_money_2->text();
    Description = ui->line_descript_2->text();

    obj.connOpen();

    QSqlQuery qry;
    qry.prepare("insert into Plan values(:Key,:Year,:Month,:Category,:Amount,:Description)");
    qry.bindValue(":Year",Year);
    qry.bindValue(":Month",Month);
    qry.bindValue(":Category",Category);
    qry.bindValue(":Amount",Money);
    qry.bindValue(":Description",Description);


    if(qry.exec())
    {
        QMessageBox::about(this,tr("Save"),tr("Data is saved"));
        obj.connClose();
    }
    else {
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }


}




void Planning::on_cancle_Button_3_clicked()
{
    this->close();
}




void Planning::on_deleteButton_2_clicked()
{
    Planning obj;
    QString Key,Year,Month,Category,Money,Description;
    Year = ui->spinBox->text();
    Month = ui->combo_month->currentText();
    Category = ui->CategoryBox->currentText();
    Money = ui->line_money_2->text();
    Description = ui->line_descript_2->text();
    obj.connOpen();

    QSqlQuery qry;
    qry.prepare("Delete from Plan where Key ='"+Key+"'");
    qry.bindValue(":Year",Year);
    qry.bindValue(":Month",Month);
    qry.bindValue(":Category",Category);
    qry.bindValue(":Amount",Money);
    qry.bindValue(":Description",Description);


    if(qry.exec())
    {
        QMessageBox::about(this,tr("Delete"),tr("Deleted"));
        obj.connClose();
    }
    else {
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}

