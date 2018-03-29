#ifndef THEDB_H
#define THEDB_H


#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <iostream>

using namespace std;

class theDB
{
public:
    theDB();
    bool connectToDb();
    int username;
    bool addEventInDb(QString eventName, QString eventLocation);
    bool validateCredentials(QString uName, QString password);
    bool changePassword(QString userName, QString password);
};

#endif // THEDB_H
