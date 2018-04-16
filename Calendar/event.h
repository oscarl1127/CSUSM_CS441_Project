#ifndef EVENT_H
#define EVENT_H

#include <QString>
#include <QDateTime>
#include "location.h"

class Event
{
private:
    QString name;
    QString category;
    //QString locationName;
    //QString street;
    //QString city;
    //QString zipCode;
    QString note;
    QString driveTime;
    QString notifyDriveTime;

    QDate startDate;
    QDate endDate;
    QTime timeStart;
    QTime timeEnd;


public:
    Event();
     Location eventLoc;
    void setName(QString name) {this->name = name;}
    void setCategory(QString cat){this->category = cat;}

    void setLocation(Location loc){this->eventLoc=loc;}

   // void setLocation(QString location){this->locationName = location;}
    //void setStreet(QString street) {this->street = street;}
    //void setCity(QString city) {this->city = city;}
    //void setZipCode(QString zip){this->zipCode = zip;}
    void setNote(QString note){this->note = note;}
    void seDriveTime(QString dTime){this->driveTime = dTime;}
    void setNotifyDriveTime(QString notifyDriveT){this->notifyDriveTime = notifyDriveT;}

    void setStartDate(QDate date){this->startDate = date;}
    void setEndDate(QDate d){this->endDate = d;}
    void setTimeStart(QTime tStart){this->timeStart = tStart;}
    void setTimeEnd(QTime tEnd){this->timeEnd=tEnd;}

    QString getName(){return this->name;}
    QString getCategory(){return this->category;}
    Location getLocation(){return this->eventLoc;}
   // QString getStreet(){return this->street;}
    //QString getCity(){return this->city;}
    //QString getZipCode(){return this->zipCode;}
    QString getNote(){return this->note;}
    QString geDriveTime(){return this->driveTime;}
    QString getNotifyDriveTime(){return this->notifyDriveTime;}

    QDate getStartDate(){return this->startDate;}
    QDate getEndDate(){return this->endDate;}

    QTime getTimeStart(){return this->timeStart;}
    QTime getTimeEnd(){return this->timeEnd;}

};

#endif // EVENT_H
