#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "secondwindow.h"
//sql
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


//Sqlite
public:

    QSqlDatabase mydb;

    void connClose()
    {
       mydb.close();
       mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
    {
        //sql
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/airA.db");

        if(!mydb.open())
            return false;
        else
            return true;

    }

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setMainPage();// clicked Modify PBs open reservation page, not login page.

private slots:

    void on_actionexit_triggered();

    void on_PB_back_clicked();

    void on_RB_one_way_toggled(bool checked);

    void on_PB_find_clicked();

    void on_PB_reserve_clicked();

    void on_PB_submit_clicked();

private:
    Ui::MainWindow *ui;

    SecondWindow *secondWindow;// object created to access


};

#endif // MAINWINDOW_H
