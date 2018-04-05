#include "daycalendar.h"
#include <vector>
#include <iterator>
#include <QDate>

using namespace std;

DayCalendar::DayCalendar()
{

}


//Adding Event to userEvent Map
void DayCalendar::AddEvent(Event e)
{
    events.push_back(e);

    /*
    //Retrieve Vector list of events for specific datetime
    QDateTime dateTime = QDateTime(e.getStartDate(), e.getTimeStart());
    Event event = this->userEvents[dateTime];
    //insert new pair
    this->userEvents.insert(pair<QDateTime, Event>
                            (dateTime, event));
                            */
}

Event DayCalendar::GetEvents(int index)
{
    Event event = this->events[index];
    //Event event = this->userEvents[q];
    return event;
}

void DayCalendar::RemoveEvent(QDateTime q, Event &removedEvent)
{
    removedEvent = this->userEvents[q];
    map<QDateTime, Event>::iterator it;
    it = this->userEvents.find(q);
    this->userEvents.erase(it);
}

vector<Event> DayCalendar::GetUpcomingEvents(int numberOfDays, QDate inital_day)
{
    QDate proposed = inital_day;
    vector<Event> Events;
    for(int i = 0; i < numberOfDays; i++)
    {
        for(std::map<QDateTime, Event>::iterator it = userEvents.begin();
            it!=userEvents.end(); ++it)
        {
            if(it->first.date() == proposed)
                Events.push_back(it->second);
        }
        proposed.addDays(1);
    }
    return Events;
}





