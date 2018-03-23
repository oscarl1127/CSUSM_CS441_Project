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
    bool addEventInDb();
};

#endif // THEDB_H
