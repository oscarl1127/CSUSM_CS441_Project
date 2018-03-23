#include "daycalendar.h"
#include <vector>
#include <iterator>
using namespace std;

DayCalendar::DayCalendar()
{

}


//Adding Event to userEvent Map
void DayCalendar::AddEvent(Event e)
{
    //Retrieve Vector list of events for specific datetime
    QDateTime dateTime = QDateTime(e.getStartDate(), e.getTimeStart());
    Event event = this->userEvents[dateTime];
    //insert new pair
    this->userEvents.insert(pair<QDateTime, Event>
                            (dateTime, event));
}

Event DayCalendar::GetEvent(QDateTime q)
{
    Event event = this->userEvents[q];
    return event;
}

void DayCalendar::RemoveEvent(QDateTime q, Event &removedEvent)
{
    removedEvent = this->userEvents[q];
    map<QDateTime, Event>::iterator it;
    it = this->userEvents.find(q);
    this->userEvents.erase(it);
}






//Method to add

//Method to search for event

//Method to Remove
