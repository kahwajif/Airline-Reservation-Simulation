
#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "mainwindow.h"
#include <QDebug>
#include <QString>
#include <QDate>
#include "userdata.h"
#include <QMessageBox>
#include <QSqlDatabase>

QString flightnumber[100];
QString departT[100];
QString cost[100];
QString reflightnumber[100];
QString redepartT[100];
QString recost[50];
int di = 0;
int ri = 0;

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    oneWay = 0;

    ui->label_departDate->setText(userA.departdateD.toString(Qt::ISODate));
    ui->label_departFrom->setText(userA.departD);
    ui->label_label_departTo->setText(userA.returnD);
    ui->label_departDate_2->setText(userA.returndataD.toString(Qt::ISODate));
    ui->label_departFrom_2->setText(userA.returnD);
    ui->label_label_departTo_2->setText(userA.departD);
    //output from array

    SecondWindow::showSubmittedData();
    //show submitted data    


    //sqlite
    MainWindow conn;

    conn.connOpen();

    QSqlQuery qry;

    //flight number
    qry.prepare("select * from Flight where flightDate='"+userA.departdateD.toString(Qt::ISODate)+"' and locationCodeDepart='"+userA.departD+"' and locationCodeDest='"+userA.returnD+"' ");

    if(qry.exec())
    {
        while(qry.next())
        {
           flightnumber[di] = qry.value(0).toString();
           departT[di] = qry.value(4).toString();
           cost[di] = qry.value(5).toString();
           ui->listWidget->addItem("\t\t\t" + flightnumber[di] + "\t\t\t\t" + departT[di] + "\t\t\t\t" + cost[di]);
           di++;
        }
    }


    qry.prepare("select * from Flight where flightDate='"+userA.returndataD.toString(Qt::ISODate)+"' and locationCodeDepart='"+userA.returnD+"' and locationCodeDest='"+userA.departD+"' ");

    if(qry.exec())
    {
        while(qry.next())
        {
           reflightnumber[ri] = qry.value(0).toString();
           redepartT[ri] = qry.value(4).toString();
           recost[ri] = qry.value(5).toString();
           ui->listWidget_2->addItem("\t\t\t" + reflightnumber[ri] + "\t\t\t\t" + redepartT[ri] + "\t\t\t\t" + recost[ri]);
           di++;
        }
    }

    //Seat
    if(userA.departD=="PEK" && userA.returnD=="SIN")
    {
        qry.prepare("select * from PEKSIN where seatNumber = '1A'");
        if(qry.exec()){while(qry.next()){seat.s1A = qry.value(1).toInt();}}
        qry.prepare("select * from PEKSIN where seatNumber = '2A'");
        if(qry.exec()){while(qry.next()){seat.s2A = qry.value(1).toInt();}}
        qry.prepare("select * from PEKSIN where seatNumber = '3A'");
        if(qry.exec()){while(qry.next()){seat.s3A = qry.value(1).toInt();}}
        qry.prepare("select * from PEKSIN where seatNumber = '1C'");
        if(qry.exec()){while(qry.next()){seat.s1C = qry.value(1).toInt();}}
        qry.prepare("select * from PEKSIN where seatNumber = '2C'");
        if(qry.exec()){while(qry.next()){seat.s2C = qry.value(1).toInt();}}
        qry.prepare("select * from PEKSIN where seatNumber = '3C'");
        if(qry.exec()){while(qry.next()){seat.s3C = qry.value(1).toInt();}}
        qry.prepare("select * from PEKSIN where seatNumber = '1D'");
        if(qry.exec()){while(qry.next()){seat.s1D = qry.value(1).toInt();}}
        qry.prepare("select * from PEKSIN where seatNumber = '2D'");
        if(qry.exec()){while(qry.next()){seat.s2D = qry.value(1).toInt();}}
        qry.prepare("select * from PEKSIN where seatNumber = '3D'");
        if(qry.exec()){while(qry.next()){seat.s3D = qry.value(1).toInt();}}
        qry.prepare("select * from PEKSIN where seatNumber = '1F'");
        if(qry.exec()){while(qry.next()){seat.s1F = qry.value(1).toInt();}}
        qry.prepare("select * from PEKSIN where seatNumber = '2F'");
        if(qry.exec()){while(qry.next()){seat.s2F = qry.value(1).toInt();}}
        qry.prepare("select * from PEKSIN where seatNumber = '3F'");
        if(qry.exec()){while(qry.next()){seat.s3F = qry.value(1).toInt();}}
    }

    if(!userA.reservationID.isEmpty())
    {
        qry.prepare("select * from userlist where reservationID = '"+userA.reservationID+"'");
        if(qry.exec()){while(qry.next())
            {
                userA.flightD = qry.value(1).toString();
                userA.reflightD = qry.value(2).toString();
                userA.departD = qry.value(3).toString();
                userA.departdateD = qry.value(4).toDate();
                userA.returnD = qry.value(5).toString();
                userA.returndataD = qry.value(6).toDate();
                userA.departseatD = qry.value(7).toString();
                userA.returnseatD = qry.value(8).toString();
                userA.titleD = qry.value(9).toString();
                userA.fnameD = qry.value(10).toString();
                userA.mnameD = qry.value(11).toString();
                userA.lnameD = qry.value(12).toString();
                userA.sexD = qry.value(13).toString();
                userA.birthD = qry.value(14).toDate();
                userA.phoneD = qry.value(15).toString();
                userA.emailD = qry.value(16).toString();
                userA.postcodeD = qry.value(17).toString();
                userA.addressD = qry.value(18).toString();
                userA.cityD = qry.value(19).toString();
                userA.provinceD = qry.value(20).toString();
                userA.countryD = qry.value(21).toString();
                userA.passportD = qry.value(22).toString();
                userA.passportexpireyD = qry.value(23).toString();
            }}
    }

    conn.connClose();





}

SecondWindow::~SecondWindow()
{
    delete ui;
}

int SecondWindow:: setOneWay(int x)
{
    oneWay = x;
    return oneWay;
}
void SecondWindow::pageSkip()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void SecondWindow::on_PB_next_1_clicked()
{
    int currentRow = ui->listWidget->currentRow();
    userA.flightD =  flightnumber[currentRow];
    userA.departpriceD = cost[currentRow];
    if(currentRow>=0)
    {SecondWindow::checkDepartSeat();ui->stackedWidget->setCurrentIndex(2);}
    else
    {QMessageBox::warning(this,tr("Warning"),tr("Please select a flight"));}
}

void SecondWindow::on_PB_back_modify_clicked()
{
    hide();
    userA.departseatD="";//de-selects depart seat
    userA.returnseatD="";//de-selects return seat
    MainWindow *mainWindow;
    mainWindow = new MainWindow(this);
    mainWindow->setMainPage();
    mainWindow->show();
    if(oneWay == 1){
        oneWay = 0;
        qDebug() << "One-way = 0";
    }
}

void SecondWindow::on_PB_back_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void SecondWindow::on_PB_next_2_clicked()
{
    int currentRow = ui->listWidget_2->currentRow();
    userA.reflightD = reflightnumber[currentRow];
    userA.returnpriceD = recost[currentRow];
    if(currentRow>=0)
    {SecondWindow::checkReturnSeat();ui->stackedWidget->setCurrentIndex(3);}
    else
    {QMessageBox::warning(this,tr("Warning"),tr("Please select a flight"));}

}

void SecondWindow::on_PB_back_modify_2_clicked()
{
    hide();
    userA.departseatD="";//de-selects depart seat
    userA.returnseatD="";//de-selects return seat
    MainWindow *mainWindow;
    mainWindow = new MainWindow(this);
    mainWindow->show();
    mainWindow->setMainPage();

    if(oneWay == 1){
        oneWay = 0;
        qDebug() << "One-way = 0";
    }
}

void SecondWindow::on_PB_next_3_clicked()
{
    if(userA.departseatD=="")
    {QMessageBox::warning(this,tr("Warning"),tr("Please select a seat"));}
    else
    {
         ui->stackedWidget->setCurrentIndex(1);
        //if one-way, skip to personal info page
         if(oneWay==1)
         {
             ui->stackedWidget->setCurrentIndex(4);
         }
    }
}

void SecondWindow::on_PB_back_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void SecondWindow::on_PB_back_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void SecondWindow::on_PB_next_4_clicked()
{
    if(userA.returnseatD=="")
    {QMessageBox::warning(this,tr("Warning"),tr("Please select a seat"));}
    else
    {SecondWindow::showInfoData();ui->stackedWidget->setCurrentIndex(4);}
}

void SecondWindow::on_PB_next_5_clicked()
{
    userA.titleD = ui-> comboBox_title->currentText();
    userA.fnameD = ui->lineEdit_FName->text();
    userA.mnameD = ui->lineEdit_MName->text();
    userA.lnameD = ui->lineEdit_LName->text();
    userA.sexD = ui-> comboBox_sex->currentText();
    userA.birthD = ui->birthDate->date();
    userA.phoneD = ui->lineEdit_Phone->text();
    userA.emailD = ui->lineEdit_Email->text();
    userA.postcodeD = ui-> lineEdit_Zip->text();
    userA.addressD = ui->lineEdit_Address->text();
    userA.cityD = ui->lineEdit_City->text();
    userA.provinceD = ui->lineEdit_Province->text();
    userA.countryD = ui->lineEdit_Nation->text();
    userA.passportD = ui->lineEdit_PassNum->text();
    userA.passportexpireyD = ui->lineEdit_PassExpiry->text();
    userA.reservationID = ui->lineEdit_PassNum->text();

    //set data to array
    if
    (userA.titleD.isEmpty() || userA.fnameD.isEmpty() || userA.mnameD.isEmpty() ||
     userA.lnameD.isEmpty() || userA.sexD.isEmpty() || userA.birthD.isNull() ||
     userA.phoneD.isEmpty() ||  userA.emailD.isEmpty() || userA.postcodeD.isEmpty() ||
     userA.addressD.isEmpty() || userA.cityD.isEmpty() || userA.provinceD.isEmpty() ||
     userA.countryD.isEmpty() ||  userA.passportD.isEmpty() || userA.passportexpireyD.isEmpty())
    {QMessageBox::warning(this,tr("Warning"),tr("Please fill in all the blank."));}
    else
    {
    SecondWindow::showSubmittedData();
    ui->stackedWidget->setCurrentIndex(5);
    }
}

void SecondWindow::on_PB_back_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

    if(oneWay==1){
        ui->stackedWidget->setCurrentIndex(0);
    }
}

void SecondWindow::on_PB_back_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void SecondWindow::on_PB_editPerson_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void SecondWindow::on_PB_editPass_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void SecondWindow::on_PB_editD_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void SecondWindow::on_PB_editD_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void SecondWindow::on_pushButton_1A_toggled(bool)
{
    if(seat.s1A == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.departseatD.isEmpty() || userA.departseatD=="1A")
    {
        if(!ui->pushButton_1A->isChecked()){ui->label_1A->setVisible(true);userA.departseatD="";}
        else{ui->label_1A->setVisible(false);userA.departseatD="1A";}
    }
    else
    {
        QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_1C_toggled(bool)
{
    if (seat.s1C == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.departseatD.isEmpty() || userA.departseatD=="1C")
    {
        if(!ui->pushButton_1C->isChecked()){ui->label_1C->setVisible(true);userA.departseatD="";}
        else{ui->label_1C->setVisible(false);userA.departseatD="1C";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_1D_toggled(bool)
{
    if (seat.s1D == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.departseatD.isEmpty() || userA.departseatD=="1D")
    {
        if(!ui->pushButton_1D->isChecked()){ui->label_1D->setVisible(true);userA.departseatD="";}
        else{ui->label_1D->setVisible(false);userA.departseatD="1D";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_1F_toggled(bool)
{
    if (seat.s1F == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.departseatD.isEmpty() || userA.departseatD=="1F")
    {
        if(!ui->pushButton_1F->isChecked()){ui->label_1F->setVisible(true);userA.departseatD="";}
        else{ui->label_1F->setVisible(false);userA.departseatD="1F";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_2A_toggled(bool)
{
    if (seat.s2A == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.departseatD.isEmpty() || userA.departseatD=="2A")
    {
        if(!ui->pushButton_2A->isChecked()){ui->label_2A->setVisible(true);userA.departseatD="";}
        else{ui->label_2A->setVisible(false);userA.departseatD="2A";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_2C_toggled(bool)
{
    if (seat.s2C == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.departseatD.isEmpty() || userA.departseatD=="2C")
    {
        if(!ui->pushButton_2C->isChecked()){ui->label_2C->setVisible(true);userA.departseatD="";}
        else{ui->label_2C->setVisible(false);userA.departseatD="2C";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_2D_toggled(bool)
{
    if (seat.s2D == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.departseatD.isEmpty() || userA.departseatD=="2D")
    {
        if(!ui->pushButton_2D->isChecked()){ui->label_2D->setVisible(true);userA.departseatD="";}
        else{ui->label_2D->setVisible(false);userA.departseatD="2D";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_2F_toggled(bool)
{
    if (seat.s2F == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.departseatD.isEmpty() || userA.departseatD=="2F")
    {
        if(!ui->pushButton_2F->isChecked()){ui->label_2F->setVisible(true);userA.departseatD="";}
        else{ui->label_2F->setVisible(false);userA.departseatD="2F";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}
void SecondWindow::on_pushButton_3A_toggled(bool)
{
    if (seat.s3A == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.departseatD.isEmpty() || userA.departseatD=="3A")
    {
        if(!ui->pushButton_3A->isChecked()){ui->label_3A->setVisible(true);userA.departseatD="";}
        else{ui->label_3A->setVisible(false);userA.departseatD="3A";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_3C_toggled(bool)
{
    if (seat.s3C == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.departseatD.isEmpty() || userA.departseatD=="3C")
    {
        if(!ui->pushButton_3C->isChecked()){ui->label_3C->setVisible(true);userA.departseatD="";}
        else{ui->label_3C->setVisible(false);userA.departseatD="3C";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_3D_toggled(bool)
{
    if (seat.s3D == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.departseatD.isEmpty() || userA.departseatD=="3D")
    {
        if(!ui->pushButton_3D->isChecked()){ui->label_3D->setVisible(true);userA.departseatD="";}
        else{ui->label_3D->setVisible(false);userA.departseatD="3D";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_3F_toggled(bool)
{
    if (seat.s3F == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.departseatD.isEmpty() || userA.departseatD=="3F")
    {
        if(!ui->pushButton_3F->isChecked()){ui->label_3F->setVisible(true);userA.departseatD="";}
        else{ui->label_3F->setVisible(false);userA.departseatD="3F";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_1A_2_toggled(bool)
{
    if (seat.res1A == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.returnseatD.isEmpty() || userA.returnseatD=="1A")
    {
        if(!ui->pushButton_1A_2->isChecked()){ui->label_1A_2->setVisible(true);userA.returnseatD="";}
        else{ui->label_1A_2->setVisible(false);userA.returnseatD="1A";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_1C_2_toggled(bool)
{
    if (seat.res1C == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.returnseatD.isEmpty() || userA.returnseatD=="1C")
    {
        if(!ui->pushButton_1C_2->isChecked()){ui->label_1C_2->setVisible(true);userA.returnseatD="";}
        else{ui->label_1C_2->setVisible(false);userA.returnseatD="1C";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_1D_2_toggled(bool)
{
    if (seat.res1D == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.returnseatD.isEmpty() || userA.returnseatD=="1D")
    {
        if(!ui->pushButton_1D_2->isChecked()){ui->label_1D_2->setVisible(true);userA.returnseatD="";}
        else{ui->label_1D_2->setVisible(false);userA.returnseatD="1D";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_1F_2_toggled(bool)
{
    if (seat.res1F == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.returnseatD.isEmpty() || userA.returnseatD=="1F")
    {
        if(!ui->pushButton_1F_2->isChecked()){ui->label_1F_2->setVisible(true);userA.returnseatD="";}
        else{ui->label_1F_2->setVisible(false);userA.returnseatD="1F";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_2A_2_toggled(bool)
{
    if (seat.res2A == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.returnseatD.isEmpty() || userA.returnseatD=="2A")
    {
        if(!ui->pushButton_2A_2->isChecked()){ui->label_2A_2->setVisible(true);userA.returnseatD="";}
        else{ui->label_2A_2->setVisible(false);userA.returnseatD="2A";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_2C_2_toggled(bool)
{
    if (seat.res2C == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.returnseatD.isEmpty() || userA.returnseatD=="2C")
    {
        if(!ui->pushButton_2C_2->isChecked()){ui->label_2C_2->setVisible(true);userA.returnseatD="";}
        else{ui->label_2C_2->setVisible(false);userA.returnseatD="2C";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_2D_2_toggled(bool)
{
    if (seat.res2D == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.returnseatD.isEmpty() || userA.returnseatD=="2D")
    {
        if(!ui->pushButton_2D_2->isChecked()){ui->label_2D_2->setVisible(true);userA.returnseatD="";}
        else{ui->label_2D_2->setVisible(false);userA.returnseatD="2D";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_2F_2_toggled(bool)
{
    if (seat.res2F == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.returnseatD.isEmpty() || userA.returnseatD=="2F")
    {
        if(!ui->pushButton_2F_2->isChecked()){ui->label_2F_2->setVisible(true);userA.returnseatD="";}
        else{ui->label_2F_2->setVisible(false);userA.returnseatD="2F";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}
void SecondWindow::on_pushButton_3A_2_toggled(bool)
{
    if (seat.res3A == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.returnseatD.isEmpty() || userA.returnseatD=="3A")
    {
        if(!ui->pushButton_3A_2->isChecked()){ui->label_3A_2->setVisible(true);userA.returnseatD="";}
        else{ui->label_3A_2->setVisible(false);userA.returnseatD="3A";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_3C_2_toggled(bool)
{
    if (seat.res3C == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.returnseatD.isEmpty() || userA.returnseatD=="3C")
    {
        if(!ui->pushButton_3C_2->isChecked()){ui->label_3C_2->setVisible(true);userA.returnseatD="";}
        else{ui->label_3C_2->setVisible(false);userA.returnseatD="3C";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_3D_2_toggled(bool)
{
    if (seat.res3D == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.returnseatD.isEmpty() || userA.returnseatD=="3D")
    {
        if(!ui->pushButton_3D_2->isChecked()){ui->label_3D_2->setVisible(true);userA.returnseatD="";}
        else{ui->label_3D_2->setVisible(false);userA.returnseatD="3D";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_pushButton_3F_2_toggled(bool)
{
    if (seat.res3F == 1)
    { QMessageBox::warning(this,tr("Warning"),tr("This seat is not available."));}
    else if(userA.returnseatD.isEmpty() || userA.returnseatD=="3F")
    {
        if(!ui->pushButton_3F_2->isChecked()){ui->label_3F_2->setVisible(true);userA.returnseatD="";}
        else{ui->label_3F_2->setVisible(false);userA.returnseatD="3F";}
    }
    else
    {
      QMessageBox::warning(this,tr("Warning"),tr("Please reserver one seat at a time."));
    }
}

void SecondWindow::on_PB_next_6_clicked()
{
    SecondWindow::updataToSqlite();
   // SecondWindow::writeToSqlite();
    QApplication::exit();
}

void SecondWindow::checkDepartSeat()
{
    if(seat.s1A == 1)
    {ui->label_1A->setVisible(false);}
    if(seat.s1C == 1)
    {ui->label_1C->setVisible(false);}
    if(seat.s1D == 1)
    {ui->label_1D->setVisible(false);}
    if(seat.s1F == 1)
    {ui->label_1F->setVisible(false);}
    if(seat.s2A == 1)
    {ui->label_2A->setVisible(false);}
    if(seat.s2C == 1)
    {ui->label_2C->setVisible(false);}
    if(seat.s2D == 1)
    {ui->label_2D->setVisible(false);}
    if(seat.s2F == 1)
    {ui->label_2F->setVisible(false);}
    if(seat.s3A == 1)
    {ui->label_3A->setVisible(false);}
    if(seat.s3C == 1)
    {ui->label_3C->setVisible(false);}
    if(seat.s3D == 1)
    {ui->label_3D->setVisible(false);}
    if(seat.s3F == 1)
    {ui->label_3F->setVisible(false);}
}

void SecondWindow::checkReturnSeat()
{
    if(seat.res1A == 1)
    {ui->label_1A_2->setVisible(false);}
    if(seat.res1C == 1)
    {ui->label_1C_2->setVisible(false);}
    if(seat.res1D == 1)
    {ui->label_1D_2->setVisible(false);}
    if(seat.res1F == 1)
    {ui->label_1F_2->setVisible(false);}
    if(seat.res2A == 1)
    {ui->label_2A_2->setVisible(false);}
    if(seat.res2C == 1)
    {ui->label_2C_2->setVisible(false);}
    if(seat.res2D == 1)
    {ui->label_2D_2->setVisible(false);}
    if(seat.res2F == 1)
    {ui->label_2F_2->setVisible(false);}
    if(seat.res3A == 1)
    {ui->label_3A_2->setVisible(false);}
    if(seat.res3C == 1)
    {ui->label_3C_2->setVisible(false);}
    if(seat.res3D == 1)
    {ui->label_3D_2->setVisible(false);}
    if(seat.res3F == 1)
    {ui->label_3F_2->setVisible(false);}
}

void SecondWindow::showSubmittedData()
{

ui->label_dflightS->setText(userA.flightD);
ui->label_dflightS_2->setText(userA.reflightD);
ui->label_fromS->setText(userA.departD);
ui->label_fromS_8->setText(userA.departD);
ui->label_ddateS->setText(userA.departdateD.toString(Qt::ISODate));
ui->label_fromS_2->setText(userA.returnD);
ui->label_fromS_7->setText(userA.returnD);
ui->label_ddateS_2->setText(userA.returndataD.toString(Qt::ISODate));
ui->label_dseatS->setText(userA.departseatD);
ui->label_dseatS_2->setText(userA.returnseatD);
ui->label_titleS->setText(userA.titleD);
ui->label_fnameS->setText(userA.fnameD);
ui->label_mnameS->setText(userA.mnameD);
ui->label_lnameS->setText(userA.lnameD);
ui->label_sexS->setText(userA.sexD);
ui->label_birthS->setText(userA.birthD.toString(Qt::ISODate));
ui->label_phoneS->setText(userA.phoneD);
ui->label_emailS->setText(userA.emailD);
ui->label_codeS->setText(userA.postcodeD);
ui->label_addressS->setText(userA.addressD);
ui->label_cityS->setText(userA.cityD);
ui->label_provinceS->setText(userA.provinceD);
ui->label_coountryS ->setText(userA.countryD);
ui->label_passportS->setText(userA.passportD);
ui->label_exdayS->setText(userA.passportexpireyD);
ui->label_totalS_3->setText(userA.reservationID);
float totalT;
totalT = userA.departpriceD.toFloat() + userA.returnpriceD.toFloat();
ui->label_totalS->setText( QString::number(totalT));
}

void SecondWindow::showInfoData()
{
    ui->comboBox_title->setCurrentText(userA.titleD);
    ui->lineEdit_FName->setText(userA.fnameD);
    ui->lineEdit_MName->setText(userA.mnameD);
    ui->lineEdit_LName->setText(userA.lnameD);
    ui-> comboBox_sex->setCurrentText(userA.sexD);
    ui->birthDate->setDate(userA.birthD);
    ui->lineEdit_Phone->setText(userA.phoneD);
    ui->lineEdit_Email->setText(userA.emailD);
    ui-> lineEdit_Zip->setText(userA.postcodeD);
    ui->lineEdit_Address->setText(userA.addressD);
    ui->lineEdit_City->setText(userA.cityD);
    ui->lineEdit_Province->setText(userA.provinceD);
    ui->lineEdit_Nation->setText(userA.countryD);
    ui->lineEdit_PassNum->setText(userA.passportD);
    ui->lineEdit_PassExpiry->setText(userA.passportexpireyD);
}


void SecondWindow::writeToSqlite()
{
    //sqlite
    MainWindow conn;
    if(!conn.connOpen())
    {
        qDebug()<<"fail to open db";
        return;
    }

    conn.connOpen();

    QSqlQuery qry;


    qry.prepare("insert into userlist (reservationID,flightD,reflightD,departD,departdateD,returnD,returndataD,departseatD,returnseatD,titleD,fnameD,mnameD,lnameD,sexD,birthD,phoneD,emailD,postcodeD,addressD,cityD,provinceD,countryD,passportD,passportexpireyD,departpriceD,returnpriceD) values ('"+userA.passportD+"','"+userA.flightD+"','"+userA.reflightD+"','"+userA.departD+"','"+userA.departdateD.toString(Qt::ISODate)+"','"+userA.returnD+"','"+userA.returndataD.toString(Qt::ISODate)+"','"+userA.departseatD+"','"+userA.returnseatD+"','"+userA.titleD+"','"+userA.fnameD+"','"+userA.mnameD+"','"+userA.lnameD+"','"+userA.sexD+"','"+userA.birthD.toString(Qt::ISODate)+"','"+userA.phoneD+"','"+userA.emailD+"','"+userA.postcodeD+"','"+userA.addressD+"','"+userA.cityD+"','"+userA.provinceD+"','"+userA.countryD+"','"+userA.passportD+"','"+userA.passportexpireyD+"','"+userA.departpriceD+"','"+userA.returnpriceD+"')");
    if(qry.exec())
    {
        QMessageBox::warning(this,tr("SQLITE"),tr("Reservation saved to sqlite database"));
        conn.connClose();
    }
}

void SecondWindow::updataToSqlite()
{
    //sqlite
    MainWindow conn;
    if(!conn.connOpen())
    {
        qDebug()<<"fail to open db";
        return;
    }

    conn.connOpen();

    QSqlQuery qry;

    qry.prepare("select * from userlist where reservationID='" + userA.reservationID + "'");

    int count=0;

    while(qry.next())
    {
        count++;
    }
    if(count>=1)
    {
        qry.prepare("update userlist set flightD='"+userA.flightD+"',reflightD='"+userA.reflightD+"',departD='"+userA.departD+"',departdateD='"+userA.departdateD.toString(Qt::ISODate)+"',returnD='"+userA.returnD+"',returndataD='"+userA.returndataD.toString(Qt::ISODate)+"',departseatD='"+userA.departseatD+"',returnseatD='"+userA.returnseatD+"',titled='"+userA.titleD+"',fnameD='"+userA.fnameD+"',mnameD='"+userA.mnameD+"',lnameD='"+userA.lnameD+"',sexD='"+userA.sexD+"',birthD='"+userA.birthD.toString(Qt::ISODate)+"',phoneD='"+userA.phoneD+"',emailD='"+userA.emailD+"',postcodeD='"+userA.postcodeD+"',addressD='"+userA.addressD+"',cityD='"+userA.cityD+"',provinceD='"+userA.provinceD+"',countryD='"+userA.countryD+"',passportD='"+userA.passportD+"',passportexpireyD='"+userA.passportexpireyD+"',departpriceD='"+userA.departpriceD+"',returnpriceD='"+userA.returnpriceD+"' where reservationID='"+userA.passportD+"' ");
        if(qry.exec())
        {
            QMessageBox::warning(this,tr("SQLITE"),tr("Reservation updated to sqlite database"));
            conn.connClose();
        }
    }
    else
    {
        qry.prepare("insert into userlist (reservationID,flightD,reflightD,departD,departdateD,returnD,returndataD,departseatD,returnseatD,titleD,fnameD,mnameD,lnameD,sexD,birthD,phoneD,emailD,postcodeD,addressD,cityD,provinceD,countryD,passportD,passportexpireyD,departpriceD,returnpriceD) values ('"+userA.passportD+"','"+userA.flightD+"','"+userA.reflightD+"','"+userA.departD+"','"+userA.departdateD.toString(Qt::ISODate)+"','"+userA.returnD+"','"+userA.returndataD.toString(Qt::ISODate)+"','"+userA.departseatD+"','"+userA.returnseatD+"','"+userA.titleD+"','"+userA.fnameD+"','"+userA.mnameD+"','"+userA.lnameD+"','"+userA.sexD+"','"+userA.birthD.toString(Qt::ISODate)+"','"+userA.phoneD+"','"+userA.emailD+"','"+userA.postcodeD+"','"+userA.addressD+"','"+userA.cityD+"','"+userA.provinceD+"','"+userA.countryD+"','"+userA.passportD+"','"+userA.passportexpireyD+"','"+userA.departpriceD+"','"+userA.returnpriceD+"')");
        if(qry.exec())
        {
            QMessageBox::warning(this,tr("SQLITE"),tr("Reservation saved to sqlite database"));
            conn.connClose();
        }
    }
}


