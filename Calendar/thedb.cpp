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


vector <Event> theDB::getEventsForUser(int userID)
{
    vector <Event> eventsList;
    QString query;

    //Values for each event
    QString eventName;
    QString timeStart;
    QString timeEnd;
    QString dateStart;
    QString dateEnd;
    QString eventNote;
    int locationNum;

    QDate eventStartDate;
    QDate eventEndDate;
    QTime eventStartTime;
    QTime eventEndTime;

    Event currentEvent;
    Location currentLocation;

    query = "SELECT eventName, eventTimeStart, eventTimeEnd, eventDateStart, eventDateEnd, eventNote,locationNum FROM Event;";

    //Run the query
    QSqlQuery theQuery;
    theQuery.prepare(query);
    theQuery.exec();


    while(theQuery.next())
    {
        //Pull values from DB
        eventName=theQuery.value(0).toString();
        timeStart=theQuery.value(1).toString();
        timeEnd=theQuery.value(2).toString();
        dateStart=theQuery.value(3).toString();
        dateEnd=theQuery.value(4).toString();
        eventNote=theQuery.value(5).toString();
        locationNum=theQuery.value(6).toInt();

        //Convert dates/times
        eventStartDate.fromString(dateStart);
        eventEndDate.fromString(dateEnd);
        eventStartTime.fromString(timeStart);
        eventEndTime.fromString(timeEnd);

        //Get location for event
        currentLocation=getLocationForEvent(userID,locationNum);

        //Set values in current event
        currentEvent.setName(eventName);
        currentEvent.setStartDate(eventStartDate);
        currentEvent.setEndDate(eventEndDate);
        currentEvent.setTimeStart(eventStartTime);
        currentEvent.setTimeEnd(eventEndTime);
        //Temp catagory
        currentEvent.setCategory("Work");
        currentEvent.setNote(eventNote);
        currentEvent.setLocation(currentLocation);

        //Add current event to vector
        eventsList.push_back(currentEvent);
    }

    return eventsList;
}


Location theDB::getLocationForEvent(int userID, int locNum)
{
    Location loc;
    QString locationName;
    QString street;
    QString city;
    QString state;
    QString zipcode;
    int saveLocation;
    int theID;
    int theLoc;

    //SELECT locationName,street,city,state,saveLocation,zipcode FROM Location;
    QString query;
    query="SELECT locationNum,locationName,street,city,state,saveLocation,zipcode,userID FROM Location;";

    //Run the query
    QSqlQuery theQuery;
    theQuery.prepare(query);
    theQuery.exec();

    while(theQuery.next())
    {
        theLoc = theQuery.value(0).toInt();
        locationName= theQuery.value(1).toString();
        street=theQuery.value(2).toString();
        city=theQuery.value(3).toString();
        state=theQuery.value(4).toString();
        saveLocation=theQuery.value(5).toInt();
        zipcode=theQuery.value(6).toString();
        theID= theQuery.value(7).toInt();

        //Match
        if(theLoc==locNum && theID==userID)
        {
            //If match set location
            loc.setLocationName(locationName);
            loc.setStreet(street);
            loc.setCity(city);
            loc.setState(state);
            loc.setSavedLocation(saveLocation);
            loc.setZipCode(zipcode);

            //Return location. We are done
            return loc;
        }
    }
    return loc;
}


bool theDB::addEventInDb(Event theEvent, int userId)
{   
    QString theQuery;

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

    //Check for Null Values
    if(eventName==NULL || startTime==NULL || endTime==NULL || startDate==NULL||endDate==NULL||locationName==NULL||locationStreet==NULL
            ||locationCity==NULL||locationState==NULL||locationZip==NULL)
        return false;

    //FIRST: Check if the location already exists for the user, if not create it in the database
    int locationNumber= getLocationNumber(locationName,userId);

    if(locationNumber==-1)
    {

        theQuery="INSERT INTO Location VALUES('"+locationName+"','"+locationStreet+"','"+locationCity+"','"+locationState+"',"+QString::number(saveLocation)+",'"
                +locationZip+"',"+QString::number(userId)+");";

        //Run the query
        QSqlQuery query;
        query.prepare(theQuery);
        query.exec();
    }
    locationNumber= getLocationNumber(locationName,userId);

    //Now we must add this event to the database, and use the location Number as a foreign key
    theQuery="INSERT INTO Event VALUES('"+eventName+"','"+startTime+"','"+endTime+"','"+startDate+"','"+endDate+"','"
            +eventNote+"',"+QString::number(locationNumber)+","+QString::number(categoryID)+","+QString::number(userId)+");";

    //Run the query
    QSqlQuery query2;
    query2.prepare(theQuery);
    query2.exec();

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



