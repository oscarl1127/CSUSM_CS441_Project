#ifndef DAYCALENDAR_H
#define DAYCALENDAR_H

#include <vector>
#include <map>
#include <event.h>
#include <QDateTime>
#include <QWidget>
#include "thedb.h"
#include "login.h"

using namespace std;

class DayCalendar
{
private:

    bool AddToDatabase(Event e, int theID);

public:
    map<QDate, vector<Event>> userEvents;
    vector<Event> orderEvents(vector<Event> origEvents);
    theDB calenderdb;
    int userID;
    void setUserID(int id);
    void FillFromDatabase();
    int getUserID()
    {
        return userID;
    }

    //vector<Event> events;

    ///Constructor
    DayCalendar();

    ///Purpose: Adding Event to userEvent Map
    /// Returns true, if add was succesful, else if event already exists at specified time of new event, return false
    bool AddEvent(Event e);

    void ReplaceEvent(QDateTime datetime);

    vector<Event> GetEvents(QDate q);

    bool GetEvent(QDateTime q, Event &event);

    void RemoveEvent(QDateTime q, Event &removedEvent);

    ///Purpose: Get the upcoming events given the number of upcoming days you would like to see ahead
    ///First matches the first day with a key in map, then adds a day and checks again, do this for number of upcoming days
    /// If match found, add to vector of events.
    vector<Event> GetUpcomingEvents(int numberOfDays, QDate inital_day);

    ///Need to have all Events in a Vector
    vector<QDate> GetAllEventDates();


    ///Purpose: If Event exists anywhere in map, return true, else false
    bool EventExists(Event e);

    ///Purpose: Returns true if at least one Event exists on the specified date.
    bool EventOnDayExists(QDate q);

    void Display();




};

#endif // DAYCALENDAR_H
