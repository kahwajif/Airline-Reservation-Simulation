#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include <QDialog>



namespace Ui {
class SecondWindow;
}

class SecondWindow : public QDialog
{
    Q_OBJECT

public:


    explicit SecondWindow(QWidget *parent = 0);
    ~SecondWindow();

    int setOneWay(int); //when one-way is checked, reservation is configured
    void pageSkip();//when "SUBMIT" is clicked, Reservation Summary page opens.



private slots:
    void on_PB_next_1_clicked();

    void on_PB_back_2_clicked();

    void on_PB_back_modify_clicked();

    void on_PB_back_modify_2_clicked();

    void on_PB_next_3_clicked();

    void on_PB_back_3_clicked();

    void on_PB_next_2_clicked();

    void on_PB_back_4_clicked();

    void on_PB_next_4_clicked();

    void on_PB_next_5_clicked();

    void on_PB_back_5_clicked();

    void on_PB_back_6_clicked();

    void on_PB_editPerson_clicked();

    void on_PB_editPass_clicked();

    void on_PB_editD_clicked();

    void on_PB_editD_12_clicked();

    void on_pushButton_1A_toggled(bool);

    void on_pushButton_1C_toggled(bool);

    void on_pushButton_1D_toggled(bool);

    void on_pushButton_1F_toggled(bool);

    void on_pushButton_2A_toggled(bool);

    void on_pushButton_2C_toggled(bool);

    void on_pushButton_2D_toggled(bool);

    void on_pushButton_2F_toggled(bool);

    void on_pushButton_3A_toggled(bool);

    void on_pushButton_3C_toggled(bool);

    void on_pushButton_3D_toggled(bool);

    void on_pushButton_3F_toggled(bool);

    void on_pushButton_1A_2_toggled(bool);

    void on_pushButton_1C_2_toggled(bool);

    void on_pushButton_1D_2_toggled(bool);

    void on_pushButton_1F_2_toggled(bool);

    void on_pushButton_2A_2_toggled(bool);

    void on_pushButton_2C_2_toggled(bool);

    void on_pushButton_2D_2_toggled(bool);

    void on_pushButton_2F_2_toggled(bool);

    void on_pushButton_3A_2_toggled(bool);

    void on_pushButton_3C_2_toggled(bool);

    void on_pushButton_3D_2_toggled(bool);

    void on_pushButton_3F_2_toggled(bool);

    void on_PB_next_6_clicked();

    void checkDepartSeat();

    void checkReturnSeat();

    void showSubmittedData();

    void showInfoData();

    void writeToSqlite();

    void updataToSqlite();

private:
    Ui::SecondWindow *ui;
    int oneWay;
};

#endif // SECONDWINDOW_H
