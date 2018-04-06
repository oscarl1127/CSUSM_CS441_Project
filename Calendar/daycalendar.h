#ifndef DAYCALENDAR_H
#define DAYCALENDAR_H

#include <vector>
#include <map>
#include <event.h>
#include <QDateTime>
#include <QWidget>
using namespace std;

class DayCalendar
{
private:
    //map<QDateTime, Event> userEvents;

public:
    DayCalendar();
    map<QDateTime, Event> userEvents;
    vector<Event> events;
    bool AddEvent(Event e);
    void ReplaceEvent(Event e);
    Event GetEvents(QDateTime q);
    void RemoveEvent(QDateTime q, Event &removedEvent);
    vector<Event> GetUpcomingEvents(int numberOfDays, QDate inital_day);
    bool EventExists(Event e);
    //bool Exists(QDateTime q);
    //QString getEventName(int index);

};

#endif // DAYCALENDAR_H
