#include "mainwindow.h"
#include "./ui_mainwindow.h"



//global value for check key
static int value;//planninng
static int value1;//expense
//global value for check current page
static int cur_page;
//global value for check the seleted row
static int clickedcat;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->connOpen();
    ui->stackedWidget->setCurrentIndex(0);
    this->setWindowTitle("Buddy Budgetting");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_plan_screen()
{
    //remove first
    int count_row = ui->planningWidget->rowCount();
    for ( int i = 0; i < count_row; ++i )
    {
        ui->planningWidget->removeRow(0);
    }
    //update it
    QSqlQueryModel initmodel;
    QString month= ui->plan_combo_month->currentText();
    QSqlQuery initqry("select Key, Category, Amount, Description from Plan where Month='"+month+"'");
    while(initqry.next())
    {
        ui->planningWidget->insertRow(ui->planningWidget->rowCount());
        int transID =initqry.value(0).toInt();
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,0,new QTableWidgetItem(QString::number(transID)));
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,1,new QTableWidgetItem(initqry.value(1).toString()));//category
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,2,new QTableWidgetItem(QString::number(initqry.value(2).toInt())));//amount
        ui->planningWidget->setItem(ui->planningWidget->rowCount()-1,3,new QTableWidgetItem(initqry.value(3).toString()));//description
    }
    qDebug() << (initmodel.rowCount());

}

void MainWindow::update_Expense_screen()
{
    int count_row = ui->ExpenseWidget->rowCount();
    for ( int i = 0; i < count_row; ++i )
    {
            ui->ExpenseWidget->removeRow(0);
    }

    QSqlQueryModel initmodel;
    QSqlQuery initqry("select * from Real");
    while(initqry.next())
    {

        ui->ExpenseWidget->insertRow(ui->ExpenseWidget->rowCount());
        int transID =initqry.value(0).toInt();
        QString day_p = QString::number(initqry.value(1).toInt())+"-" + initqry.value(2).toString() + "-" + QString::number(initqry.value(3).toInt());
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,0,new QTableWidgetItem(QString::number(transID)));
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,1,new QTableWidgetItem(day_p));
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,2,new QTableWidgetItem(initqry.value(4).toString()));//category
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,3,new QTableWidgetItem(QString::number(initqry.value(5).toInt())));//amount
        ui->ExpenseWidget->setItem(ui->ExpenseWidget->rowCount()-1,4,new QTableWidgetItem(initqry.value(6).toString()));//description
    }
    qDebug() << (initmodel.rowCount());
}



void MainWindow::on_main_planning_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    update_plan_screen();


}


void MainWindow::on_main_expense_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    update_Expense_screen();
}


void MainWindow::on_main_monit_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_plan_home_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_plan_expense_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    update_Expense_screen();
}


void MainWindow::on_planmonit_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_Expense_home_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_Expense_planning_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    update_plan_screen();
}

void MainWindow::on_expense_monit_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_monit_home_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_monit_plan_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    update_plan_screen();
}


void MainWindow::on_monit_expense_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    update_Expense_screen();
}

void MainWindow::on_planningWidget_clicked(const QModelIndex &index)
{

    ::value=ui->planningWidget->selectionModel()->currentIndex().row();

}

void MainWindow::on_plan_delete_clicked()
{
    QSqlQuery qry;
    qry.prepare("delete from Plan where Key="+ ui->planningWidget->item(value,0)->text());
    qry.exec();
    update_plan_screen();
}


void MainWindow::on_plan_addButton_clicked()
{
    QSqlQueryModel modal;
    QString Year,Month,Category,Money,Description;
    Year = ui->plan_spinBox->text();
    Month = ui->plan_combo_month->currentText();
    Category = ui->plan_CategoryBox->currentText();
    Money = ui->plan_line_money->text();
    Description = ui->plan_line_descript->text();

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
    }
    else {
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
    //load data and update it onscreen
    update_plan_screen();
    ui->plan_line_descript->clear();
    ui->plan_line_money->clear();

}


void MainWindow::on_expense_Save_btn_clicked()
{
    QString yr = ui->expense_dateEdit->text().left(4);
     QString mon = ui->expense_dateEdit->text().mid(5,3);
     QString dayday = ui->expense_dateEdit->text().right(2);
     QString Year,Month,Day,Category,Money,Description;
     Year = yr;
     Month = mon;
     Day=dayday;
     Category = ui->expense_CategoryBox->currentText();
     Money = ui->expense_line_money->text();
     Description = ui->expense_line_descript->text();
     //save
     QSqlQuery qry1;
     qry1.prepare("insert into Real values(:key,:Year,:Month,:Day,:Category,:Amount,:Description)");
     qry1.bindValue(":Year",Year);
     qry1.bindValue(":Month",Month);
     qry1.bindValue(":Day",Day);
     qry1.bindValue(":Category",Category);
     qry1.bindValue(":Amount",Money);
     qry1.bindValue(":Description",Description);

     if(qry1.exec())
     {
         QMessageBox::about(this,tr("Save"),tr("Data is saved"));

     }
     else {
         QMessageBox::critical(this,tr("Error::"),qry1.lastError().text());
     }

     update_Expense_screen();
     //ADD TO DISPLAY
     ui->expense_line_descript->clear();
     ui->expense_line_money->clear();
}


void MainWindow::on_expense_delete_btn_clicked()
{
    QSqlQuery qry;
    qry.prepare("delete from Real where Key="+ ui->ExpenseWidget->item(value1,0)->text());
    qry.exec();
    update_Expense_screen();
}


void MainWindow::on_ExpenseWidget_clicked(const QModelIndex &index)
{
    ::value1=ui->ExpenseWidget->selectionModel()->currentIndex().row();
}
void MainWindow::exit_message()
{
    QMessageBox MsgBox;
    MsgBox.setWindowTitle("WARNING");
    MsgBox.setInformativeText("Would you like to Exit?  \n");
    MsgBox.setStandardButtons(QMessageBox::Ok |QMessageBox::Cancel);
    MsgBox.setDefaultButton(QMessageBox::Ok);
    if ( MsgBox.exec() == QMessageBox::Ok )
    {

        this->connClose();
        this->close();
        exit(0);
    }
}

void MainWindow::on_exepense_exit_btn_clicked()
{
    exit_message();
}


void MainWindow::on_plan_exit_btn_clicked()
{
    exit_message();
}


void MainWindow::on_main_exit_btn_clicked()
{
    exit_message();
}


void MainWindow::on_monit_exit_btn_clicked()
{
    exit_message();
}


void MainWindow::on_Total_ex_btn_clicked()
{
    Monitoring1 monit1;
    monit1.setModal(true);
    monit1.exec();
}


void MainWindow::on_by_period_btn_clicked()
{
    Monitoring2 monit2;
    monit2.setModal(true);
    monit2.exec();
}




void MainWindow::on_By_category_btn_clicked()
{
    Monitoring3 monit3;
    monit3.setModal(true);
    monit3.exec();
}


void MainWindow::on_plan_combo_month_currentTextChanged(const QString &arg1)
{
    update_plan_screen();
}


void MainWindow::on_plan_spinBox_textChanged(const QString &arg1)
{
    update_plan_screen();
}
void MainWindow::clear_catewidget()
{

    ui->Cate_list->clear();

}

void MainWindow::on_plan_plus_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ::cur_page=1;
    clear_catewidget();
    int plan_cat_num=ui->plan_CategoryBox->count();
    for (int i=0;i<plan_cat_num;++i)
    {
        QString add_a=ui->plan_CategoryBox->itemText(i);
        ui->Cate_list->addItem(add_a);
    }

}


void MainWindow::on_expense_plus_btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ::cur_page=2;
    clear_catewidget();
    int expense_cat_num=ui->expense_CategoryBox->count();
    for (int i=0;i<expense_cat_num;++i)
    {
        QString add_a=ui->expense_CategoryBox->itemText(i);

        ui->Cate_list->addItem(add_a);
    }
}


void MainWindow::on_Category_btn2_clicked()
{
    ui->stackedWidget->setCurrentIndex(::cur_page);
    ui->Cate_list->clear();
}


void MainWindow::on_Category_btn_clicked()
{
    QString addthings = ui->cateline_edit->text();
    ui->Cate_list->addItem(addthings);
    int num=ui->Cate_list->count();
    if (::cur_page==2)
    {
        ui->expense_CategoryBox->clear();
        for (int i=0;i<num;++i)
        {
            QString addingto=ui->Cate_list->item(i)->text();
            ui->expense_CategoryBox->insertItem(i,addingto);
        }
        QMessageBox MsgBox;
        MsgBox.setWindowTitle("Saved");
        MsgBox.setInformativeText(addthings+" saved at category! \n");
        MsgBox.setStandardButtons(QMessageBox::Ok );
        MsgBox.setDefaultButton(QMessageBox::Ok);
        if ( MsgBox.exec() == QMessageBox::Ok )
        {
            MsgBox.close();
        }
    }
    else if(::cur_page==1)
    {
        ui->plan_CategoryBox->clear();
        for (int i=0;i<num;++i)
        {
            QString addingto=ui->Cate_list->item(i)->text();
            ui->plan_CategoryBox->insertItem(i,addingto);
        }
        QMessageBox MsgBox;
        MsgBox.setWindowTitle("Added");
        MsgBox.setInformativeText(addthings+" added at category! \n");
        MsgBox.setStandardButtons(QMessageBox::Ok );
        MsgBox.setDefaultButton(QMessageBox::Ok);
        if ( MsgBox.exec() == QMessageBox::Ok )
        {
            MsgBox.close();
        }

    }
    else{}
    ui->cateline_edit->clear();
}



void MainWindow::on_Cate_list_pressed(const QModelIndex &index)
{
    ::clickedcat=ui->Cate_list->selectionModel()->currentIndex().row();
}


void MainWindow::on_Category_btn_2_clicked()
{
    ui->Cate_list->takeItem(clickedcat);
    int num= ui->Cate_list->count();
    if (::cur_page==2)
    {
        ui->expense_CategoryBox->clear();
        for (int i=0;i<num;++i)
        {
            QString addingto=ui->Cate_list->item(i)->text();
            ui->expense_CategoryBox->insertItem(i,addingto);
        }
    }
    else //planning page
    {
        ui->plan_CategoryBox->clear();
        for (int i=0;i<num;++i)
        {
            QString addingto=ui->Cate_list->item(i)->text();
            ui->plan_CategoryBox->insertItem(i,addingto);
        }
    }
    QMessageBox MsgBox;
    MsgBox.setWindowTitle("Deleted");
    MsgBox.setInformativeText( "Deleted\n");
    MsgBox.setStandardButtons(QMessageBox::Ok );
    MsgBox.setDefaultButton(QMessageBox::Ok);
    if ( MsgBox.exec() == QMessageBox::Ok )
    {
        MsgBox.close();
    }

}

