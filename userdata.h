#ifndef USERDATA_H
#define USERDATA_H
#include <QString>
#include <QDate>

class userdata
{
public:
    QString reservationID;     //username


    int tripD;              //one way(1) or round trip(2)
    QString flightD;        //depart plant #
    QString reflightD;      //return plant #
    QString departD;        //depart FROM
    QDate   departdateD;    //depart date
    QString returnD;        //return TO
    QDate   returndataD;    //return date
    QString departseatD;    //depart seat
    QString returnseatD;    //return seat
    QString departpriceD;    //depart ticket price
    QString returnpriceD;    //return ticket price

    QString titleD;
    QString fnameD;
    QString mnameD;
    QString lnameD;
    QString sexD;
    QDate   birthD;
    QString phoneD;
    QString emailD;
    QString postcodeD;
    QString addressD;
    QString cityD;
    QString provinceD;
    QString countryD;
    QString passportD;
    QString passportexpireyD;
};

extern userdata userA;


class seatAvailable
{
public:
    int s1A;
    int s1C;
    int s1D;
    int s1F;
    int s2A;
    int s2C;
    int s2D;
    int s2F;
    int s3A;
    int s3C;
    int s3D;
    int s3F;

    int res1A;
    int res1C;
    int res1D;
    int res1F;
    int res2A;
    int res2C;
    int res2D;
    int res2F;
    int res3A;
    int res3C;
    int res3D;
    int res3F;



};

extern seatAvailable seat;


#endif // USERDATA_H
