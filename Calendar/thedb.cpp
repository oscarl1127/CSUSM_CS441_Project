#include "thedb.h"

using namespace std;

theDB::theDB()
{
    connectToDb();
}

/*
 * LOTSOF TESTING WITH A USER
 * 4
 * jcook
 * P@SS
 * */


bool theDB::connectToDb()
{
    bool retvalue = false;

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setHostName("13.58.23.131");
    db.setDatabaseName("DRIVER={SQL Server};SERVER=13.58.23.131;DATABASE=Main");
    db.setUserName("sa");
    db.setPassword("S!mpl3P@ss");
    db.setPort(1433);

    retvalue = db.open();

    cout << "**************" << retvalue << "*************"<<endl;

    return retvalue;
}

bool theDB::addEventInDb(QString eventName, QString eventLocation)
{   
    /*
    QString eventName;
    QString eventLocation;
    QString eventStart;
    QString eventEnd; //YYY-MM-DD HH:MI:SS
    QString eventNote;
    int locationNum;
    int CategoryId;
    int userId;
    /*\
     * INSERT INTO jcookTEST VALUES ('EventName', 'LocationName');
     * */

    QString theQuery;
    theQuery= "INSERT INTO jcookTest VALUES ('"+eventName+"', '"+eventLocation+"');";
     qDebug() << theQuery;
     QSqlQuery query;
    query.prepare(theQuery);
    query.exec();

    return false;
}

bool theDB::validateCredentials(QString uName, QString password)
{
    QString theName;
    QString thePass;

    QSqlQuery query("SELECT userName, userPass FROM users");
    while(query.next())
    {
        theName=query.value(0).toString();
        thePass=query.value(1).toString();

        if((uName==theName)&&(password==thePass))
            return true;
    }
    return false;
}

bool theDB::changePassword(QString userName, QString password)
{
    bool userExist = false;

    QString theName;
    QString thePass;

    QSqlQuery query("SELECT userName FROM theUser");
    QString updatePass;

    //Traverse database to see if this user exists
    while(query.next())
    {
        //Grab the name and current password for the location in the database
        theName=query.value(0).toString();

        if((userName==theName))
        {
            //The user exists in the databse
            userExist=true;
        }
    }

    updatePass= "UPDATE theUser SET userPassword='" + password + "' WHERE userName='" + userName + "';";

    query.prepare(updatePass);
    query.exec();

    return userExist;
}



