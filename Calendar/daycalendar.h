#ifndef DAYCALENDAR_H
#define DAYCALENDAR_H

#include <vector>
#include <event.h>

using namespace std;

class DayCalendar
{
private:
    vector<Event> userEvents;

public:
    DayCalendar();
    void addToList(Event e);
    QString getEventName(int index);

};

#endif // DAYCALENDAR_H
