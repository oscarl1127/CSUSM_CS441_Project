#include "daycalendar.h"
#include <vector>
#include <iterator>
#include <QDate>
#include "QDebug"

using namespace std;

DayCalendar::DayCalendar()
{
    Event a, b, c;
    a.setName("Poop");
    b.setName("Toilet");
    c.setName("Bathroom");
    this->userEvents.insert(pair<QDateTime, Event>
                            ((QDateTime)QDate::currentDate(), a));
    this->userEvents.insert(pair<QDateTime, Event>
                            ((QDateTime)QDate::currentDate().addDays(1), b));
    this->userEvents.insert(pair<QDateTime, Event>
                            ((QDateTime)QDate::currentDate().addDays(2), c));
}


//Adding Event to userEvent Map
void DayCalendar::AddEvent(Event e)
{
    //Retrieve Vector list of events for specific datetime
    QDateTime dateTime = QDateTime(e.getStartDate(), e.getTimeStart());
    //Event event = this->userEvents[dateTime];
    //insert new pair
    qDebug() << "Inserting into Dictionary";
    this->userEvents.insert(pair<QDateTime, Event>
                            (dateTime, e));
    qDebug() << "sucessfully inserted " << e.getName();
    qDebug() << dateTime;
    qDebug() << userEvents.size();

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

vector<Event> DayCalendar::GetUpcomingEvents(int numberOfDays, QDate inital_day)
{
    qDebug() << "Get UpcomingEvents called";
    QDate proposed = inital_day;
    qDebug() << "proposed is initally " << proposed;
    vector<Event> Events;
    for(int i = 0; i < numberOfDays; i++)
    {
        qDebug() << "Get Events for day " << i;
        for(std::map<QDateTime, Event>::iterator it = userEvents.begin();
            it!=userEvents.end(); ++it)
        {
            qDebug() << "entering for loop";
            if(it->first.date() == proposed)
            {
                qDebug() << "pushing " << ((Event)it->second).getName();
                Events.push_back(it->second);
            }
        }
        qDebug() << "adding a day";
        proposed = proposed.addDays(1);
        qDebug() << "Proposed is now " << proposed;
    }
    return Events;
}





