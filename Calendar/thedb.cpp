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

bool theDB::checkForUsedUsername(QString uName)
{
    QString currentUser;
    QSqlQuery query("SELECT userName FROM users");

    while(query.next())
    {
        currentUser=query.value(0).toString();
        if(currentUser==uName)
            return true; //There is a match, stop here.
    }

    return false;//There was no match found
}

void theDB::createUser(QString uName, QString pass)
{
    //INSERT INTO USERS VALUES('Jdawk','Pass');
    QString query;
    query="INSERT INTO USERS VALUES('" + uName + "','"+pass+"');";
    //Run the query
    QSqlQuery theQuery;
    theQuery.prepare(query);
    theQuery.exec();

    return;
}

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
    int categoryId;

    QDate eventStartDate;
    QDate eventEndDate;
    QTime eventStartTime;
    QTime eventEndTime;

    Event currentEvent;
    Location currentLocation;

    query = "SELECT eventName, eventTimeStart, eventTimeEnd, eventDateStart, eventDateEnd, eventNote,locationNum,categoryId FROM Event;";

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
        categoryId=theQuery.value(7).toInt();



        //QDate date= QDate::fromString("2018-04-15","yyyy-MM-dd");
       // QTime theTime= QTime::fromString("12:10:00", "hh:mm:ss");
        //Convert dates/times
        eventStartDate = QDate::fromString(dateStart);
        eventEndDate = QDate::fromString(dateEnd);
        eventStartTime=QTime::fromString(timeStart, "hh:mm:ss");
        eventEndTime=QTime::fromString(timeEnd, "hh:mm:ss");

        //Get location for event
        currentLocation=getLocationForEvent(userID,locationNum);

        //Set values in current event
        currentEvent.setName(eventName);
        currentEvent.setStartDate(eventStartDate);
        currentEvent.setEndDate(eventEndDate);
        currentEvent.setTimeStart(eventStartTime);
        currentEvent.setTimeEnd(eventEndTime);
        currentEvent.setNote(eventNote);
        currentEvent.setLocation(currentLocation);

        QString theCat;
        if(categoryId==1)
            theCat="Work";
        else if(categoryId==2)
            theCat="School";
        else if(categoryId==3)
            theCat="Exercise";
        else if(categoryId==4)
            theCat="Free Time";
        else if(categoryId==5)
            theCat="Appointment";
        else if(categoryId==6)
            theCat="Meetings";
        else if(categoryId==7)
            theCat="Study";
        else if(categoryId==8)
            theCat="Vacation";

        currentEvent.setCategory(theCat);

        //Add current event to vector
        eventsList.push_back(currentEvent);
    }



    return eventsList;
}

Location theDB::getLocationBasedOfName(QString locName, int theID)
{
    Location theLoc;
    QString locationName;
    QString street;
    QString city;
    QString state;
    QString zipcode;
    int saveLocation;

    QString t= QString::number(theID);

    //SELECT locationName, street, city, state, saveLocation, zipcode, userID FROM Location WHERE locationName='CSUSM' AND userID=4;
    QString query;
    query="SELECT locationName, street, city, state, saveLocation, zipcode, userID FROM Location WHERE userID="+t+" AND locationName= '"
            + locName + "';";



    //Run the query
    QSqlQuery theQuery;
    theQuery.prepare(query);
    theQuery.exec();

    while(theQuery.next())
    {
        //math, pull data from row
        locationName= theQuery.value(0).toString();
        street=theQuery.value(1).toString();
        city=theQuery.value(2).toString();
        state=theQuery.value(3).toString();
        saveLocation=theQuery.value(4).toInt();
        zipcode=theQuery.value(5).toString();
        theID= theQuery.value(6).toInt();

        //Save data in Locaiton object
        theLoc.setLocationName(locationName);
        theLoc.setStreet(street);
        theLoc.setCity(city);
        theLoc.setState(state);
        theLoc.setSavedLocation(saveLocation);
        theLoc.setZipCode(zipcode);

        return theLoc;
    }
    return theLoc;

}

vector <Location> theDB::getListOfLocationsForUSer(int theID)
{
    vector <Location> locs;

    //Create location variables
    Location currLoc;
    QString locationName;
    QString street;
    QString city;
    QString state;
    QString zipcode;
    int saveLocation;
    int usrID;

    QString t= QString::number(theID);

    //SELECT locationName, street, city, state, saveLocation, zipcode, userID FROM Location WHERE locationName='CSUSM' AND userID=4;
    QString query;
    query="SELECT locationName, street, city, state, saveLocation, zipcode, userID FROM Location WHERE userID="+t+";";


    //Run the query
    QSqlQuery theQuery;
    theQuery.prepare(query);
    theQuery.exec();

    while(theQuery.next())
    {
        //math, pull data from row
        locationName= theQuery.value(0).toString();
        street=theQuery.value(1).toString();
        city=theQuery.value(2).toString();
        state=theQuery.value(3).toString();
        saveLocation=theQuery.value(4).toInt();
        zipcode=theQuery.value(5).toString();
        theID= theQuery.value(6).toInt();

        //Add attributes to current location
        currLoc.setLocationName(locationName);
        currLoc.setStreet(street);
        currLoc.setCity(city);
        currLoc.setState(state);
        currLoc.setSavedLocation(saveLocation);
        currLoc.setZipCode(zipcode);

        //Add the current location to the vector
        locs.push_back(currLoc);
    }

    //Return the list after all rows have been parsed through
    return locs;
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


    QString category = theEvent.getCategory();

    int catID;
    if(category=="Work")
        catID = 1;
    else if(category=="School")
        catID=2;
    else if(category=="Exercise")
        catID=3;
    else if(category=="Free Time")
        catID=4;
    else if(category=="Appointment")
        catID=5;
    else if(category=="Meetings")
        catID=6;
    else if(category=="Study")
        catID=7;
    else if(category=="Vacation")
        catID=8;

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
            +eventNote+"',"+QString::number(locationNumber)+","+QString::number(catID)+","+QString::number(userId)+");";


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
    QSqlQuery query;
    QString updatePass;

    updatePass= "UPDATE USERS SET userPass='" + password + "' WHERE userName='" + userName + "';";

    query.prepare(updatePass);
    query.exec();

    return true;
}
