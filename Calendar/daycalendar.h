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
    void AddEvent(Event e);
    Event GetEvent(QDateTime q);
    void RemoveEvent(QDateTime q, Event &removedEvent);
    //bool Exists(QDateTime q);
    //QString getEventName(int index);

};

#endif // DAYCALENDAR_H
