#ifndef DAYCALENDAR_H
#define DAYCALENDAR_H

#include <vector>
#include <map>
#include <event.h>
#include <QDateTime>
#include <QWidget>
#include "thedb.h"
using namespace std;

class DayCalendar
{
private:
    map<QDateTime, Event> userEvents;

    theDB calenderdb;

    bool AddToDatabase(Event e);

public:
    //vector<Event> events;

    ///Constructor
    DayCalendar();

    ///Purpose: Adding Event to userEvent Map
    /// Returns true, if add was succesful, else if event already exists at specified time of new event, return false
    bool AddEvent(Event e);

    void ReplaceEvent(Event e);

    Event GetEvents(QDateTime q);

    void RemoveEvent(QDateTime q, Event &removedEvent);

    ///Purpose: Get the upcoming events given the number of upcoming days you would like to see ahead
    ///First matches the first day with a key in map, then adds a day and checks again, do this for number of upcoming days
    /// If match found, add to vector of events.
    vector<Event> GetUpcomingEvents(int numberOfDays, QDate inital_day);


    ///Purpose: If Event exists in map, return true, else false
    bool EventExists(Event e);


};

#endif // DAYCALENDAR_H
