#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>
#include "userdata.h"
#include <QDate>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSql>
#include <QSqlQuery>
#include <QSqlError>

userdata userA;
seatAvailable seat;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //sql

        if(!connOpen())
            ui->label_2->setText("Failed to connect the database");
        else
            ui->label_2->setText("Connected to the database");


    ui->stackedWidget->setCurrentIndex(1);//program initially opens @ login page
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionexit_triggered()
{
    QApplication::exit();
}
void MainWindow::on_PB_back_clicked()
{
   ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_RB_one_way_toggled(bool)
{
    if(ui->RB_one_way->isChecked())
    {
        ui->returnFrame->setVisible(false);
    }
    else
    {
        ui->returnFrame->setVisible(true);
    }

}

//open SecondWindow
void MainWindow::on_PB_find_clicked()
{
    userA.departD = ui->comboBox_2->currentText();
    userA.departdateD = ui->departDate->date();
    userA.returnD = ui->comboBox->currentText();
    userA.returndataD = ui->departDate_2->date();
    //set flight data to array
    if(ui->RB_round_trip->isChecked() && userA.departdateD>userA.returndataD)
    {QMessageBox::warning(this,tr("Warning"),tr("Return day must greater or equals to depart day"));}
    else
    {
        secondWindow = new SecondWindow(this);
        secondWindow->show();
        if(ui->RB_one_way->isChecked())
        {
            userA.tripD = 1;
            secondWindow->setOneWay(1);
            qDebug() << "One-way = 1: ";
        }
        if(ui->RB_round_trip->isChecked())
        {
            userA.tripD = 2;
            secondWindow->setOneWay(0);
            qDebug() << "One-way = 0";
        }
        hide();//hides mainwindow
    }
}

void MainWindow::on_PB_reserve_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_PB_submit_clicked()
{
    userA.reservationID = ui->lineEdit_user->text();

    if( userA.reservationID == "")
    {QMessageBox::warning(this,tr("Warning"),tr("Please enter your reservation ID."));}
    //**database reservation ID confirm

    else
    {
        if(!connOpen())
        {
            qDebug()<<"fail to open db";
            return;
        }

        connOpen();

        QSqlQuery qry;

        qry.prepare("select * from userlist where reservationID='" + userA.reservationID + "'");

        if(qry.exec())
        {
            int count=0;
            while(qry.next())
            {
                count++;
            }
            if(count<=0)
                {QMessageBox::warning(this,tr("Error!"),tr("Reservation with this number not found"));}
            else
            {
                secondWindow = new SecondWindow(this);
                secondWindow->show();
                secondWindow->pageSkip();
                hide();
                connClose();
            }
        }
    }
}

void MainWindow::setMainPage()
{
    ui->stackedWidget->setCurrentIndex(0);
}
