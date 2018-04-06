#ifndef DAYCALENDAR_H
#define DAYCALENDAR_H

#include <vector>
#include <map>
#include <event.h>
#include <QDateTime>

using namespace std;

class DayCalendar
{
private:
    //map<QDateTime, Event> userEvents;

public:
    DayCalendar();
    map<QDateTime, Event> userEvents;
    vector<Event> events;
    void AddEvent(Event e);
    //Event GetEvent(QDateTime q);
    Event GetEvents(QDateTime q);
    void RemoveEvent(QDateTime q, Event &removedEvent);
    vector<Event> GetUpcomingEvents(int numberOfDays, QDate inital_day);
    //bool Exists(QDateTime q);
    //QString getEventName(int index);

};

#endif // DAYCALENDAR_H
