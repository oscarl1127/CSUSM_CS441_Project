#ifndef THEDB_H
#define THEDB_H


#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <iostream>
#include "event.h"
#include <vector>

using namespace std;

class theDB
{
public:
    theDB();
    bool connectToDb();
    int username;
    bool addEventInDb(Event theEvent, int userId);
    bool validateCredentials(QString uName, QString password);
    bool changePassword(QString userName, QString password);
    int getUserID(QString username);
    int getLocationNumber(QString locationName, int userID);
    vector <Event> getEventsForUser(int userID);
    Location getLocationForEvent(int userID, int locNum);
    Location getLocationBasedOfName(QString locName, int theID);
    vector <Location> getListOfLocationsForUSer(int theID);
    bool checkForUsedUsername(QString uName);
    void createUser(QString uName, QString pass);
};

#endif // THEDB_H
