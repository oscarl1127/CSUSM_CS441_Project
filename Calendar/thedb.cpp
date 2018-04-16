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

int theDB::getUserID(QString username)
{
    int actualID;
    QString actualName;

    QSqlQuery query("SELECT userID, userName FROM users");
    while(query.next())
    {
        actualID=query.value(0).toInt();
        actualName=query.value(1).toString();

        if(username==actualName)
            return actualID;
    }
    //should never happen
    return -1;
}

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
    if(retvalue==1)
        cout <<  "Connected to database."<<endl;
    else
        cout << "Connection to database failed."<<endl;

    return retvalue;
}

bool theDB::addEventInDb(Event theEvent, int userId)
{   
    QString eventName=theEvent.getName();
    QString eventNote=theEvent.getNote();

    //All dates/times stored as strings.
    QString startTime=theEvent.getTimeStart().toString();
    QString endTime =theEvent.getTimeEnd().toString();
    QString startDate=theEvent.getStartDate().toString();
    QString endDate = theEvent.getEndDate().toString();


    //To do later, for now assumes the WORK category
    int categoryID = 1;

    //Assume all locations are saved
    int saveLocation=1;

    //Location infortmaion
    QString locationName = theEvent.eventLoc.getLocationName();
    QString locationStreet=theEvent.eventLoc.getStreet();
    QString locationCity = theEvent.eventLoc.getCity();
    QString locationState = theEvent.eventLoc.getState();
    QString locationZip = theEvent.eventLoc.getZipcode();

    //FIRST: Check if the location already exists for the user, if not create it in the database

    QString theQuery;
    theQuery="INSERT INTO Location VALUES('"+locationName+"','"+locationStreet+"','"+locationCity+"','"+locationState+"',"+QString::number(saveLocation)+",'"
            +locationZip+"',"+QString::number(userId)+");";

    //Run the query
    QSqlQuery query;
    query.prepare(theQuery);
    query.exec();

    //Now that the location is added in the database, we need to retrive it's location number.
    int locationNumber= getLocationNumber(locationName,userId);

    //Now we must add this event to the database, and use the location Number as a foreign key
    theQuery="INSERT INTO Event VALUES('"+eventName+"','"+startTime+"','"+endTime+"','"+startDate+"','"+endDate+"','"
            +eventNote+"',"+QString::number(locationNumber)+","+QString::number(categoryID)+","+QString::number(userId)+");";

    //Run the query
    QSqlQuery query2;
    query2.prepare(theQuery);
    query2.exec();




/*

    //theQuery= "INSERT INTO jcookTest VALUES ('"+eventName+"', '"+eventLocation+"');";
     //
    //Create a query using the string and run it.

*/
    //Sucesful add of event
    return true;
}

int theDB::getLocationNumber(QString locationName, int userID)
{
    int locNum;
    QString locName;
    int locUser;

    QSqlQuery query("Select locationNum, locationName, userID FROM Location;");
    while(query.next())
    {
        locNum=query.value(0).toInt();
        locName=query.value(1).toString();
        locUser=query.value(2).toInt();

        if(locationName==locName && userID==locUser)
            return locNum;
    }

    return -1; //No match
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



