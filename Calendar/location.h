#ifndef LOCATION_H
#define LOCATION_H


#include <QString>

class Location
{

private:


public:
    QString locationName;
    QString street;
    QString city;
    QString state;
    QString zipcode;
    int saveLocation;

    void setLocationName(QString name){this->locationName=name;}
    void setStreet(QString street){this->street=street;}
    void setCity(QString city){this->city=city;}
    void setState(QString state){this->state=state;}
    void setZipCode(QString zip){this->zipcode=zip;}
    void setSavedLocation(int flag){this->saveLocation=flag;}

    QString getLocationName(){return this->locationName;}
    QString getStreet(){return this->street;}
    QString getCity(){return this->city;}
    QString getState(){return this->state;}
    QString getZipcode(){return this->zipcode;}
    int getSaved(){return this->saveLocation;}



    Location();
};

#endif // LOCATION_H
