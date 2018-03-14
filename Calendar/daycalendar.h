#ifndef DAYCALENDAR_H
#define DAYCALENDAR_H

#include <list>
#include <event.h>

using namespace std;

class DayCalendar
{
private:
    map<QTime, Event> userEvents;

public:
    DayCalendar();
    Event FindEvent(QTime startTime);
    void AddEvent(Event event);



};

#endif // DAYCALENDAR_H
