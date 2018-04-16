#ifndef THEDB_H
#define THEDB_H


#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <iostream>
#include "event.h"

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
};

#endif // THEDB_H
