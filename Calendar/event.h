#ifndef EVENT_H
#define EVENT_H

#include <QString>
#include <QDateTime>

class Event
{
private:
    QString name;
    QString category;
    QString locationName;
    QString street;
    QString city;
    QString zipCode;
    QString note;
    QString driveTime;
    QString notifyDriveTime;

    QDate date;
    QTime timeStart;
    QTime timeEnd;


public:
    Event();
    void setName(QString name) {this->name = name;}
    void setCategory(QString cat){this->category = cat;}
    void setLocation(QString location){this->locationName = location;}
    void setStreet(QString street) {this->street = street;}
    void setCity(QString city) {this->city = city;}
    void setZipCode(QString zip){this->zipCode = zip;}
    void setNote(QString note){this->note = note;}
    void seDriveTime(QString dTime){this->driveTime = dTime;}
    void setNote(QString notifyDriveT){this->notifyDriveTime = notifyDriveT;}

    void setDate(QDate date){this->date = date;}
    void setTimeStart(QTime tStart){this->timeStart = tStart;}
    void setTimeEnd(QTime tEnd){this->timeEnd;}

    QString getName(){return this->name;}
    QString getCategory(){return this->category;}
    QString getLocation(){return this->locationName;}
    QString getStreet(){return this->street;}
    QString getCity(){return this->city;}
    QString getZipCode(){return this->zipCode;}
    QString getNote(){return this->note;}
    QString geDriveTime(){return this->driveTime;}
    QString getNote(){return this->notifyDriveTime;}

    QDate getDate(){return this->date;}

    QTime getTimeStart(){return this->timeStart;}
    QTime getTimeEnd(){return this->timeEnd;}

};

#endif // EVENT_H
