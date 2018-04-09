#include "daycalendar.h"
#include <vector>
#include <iterator>
#include <QDate>
#include "QDebug"
#include <QMessageBox>
#include "thedb.h"

using namespace std;

DayCalendar::DayCalendar()
{
    ///Inital Values for Testing, feel free to delete these if they are annoying.
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


///Purpose: Adding Event to userEvent Map
/// Returns true, if add was succesful, else if event already exists at specified time of new event, return false
bool DayCalendar::AddEvent(Event e)
{
    //events.push_back(e);
    //Retrieve Vector list of events for specific datetime
    QDateTime dateTime = QDateTime(e.getStartDate(), e.getTimeStart());
    //Event event = this->userEvents[dateTime];
    //insert new pair
    qDebug() << "Inserting into Dictionary";
    if(EventExists(e))
        return false;
    else
        this->userEvents.insert(pair<QDateTime, Event>(dateTime, e));
    qDebug() << "sucessfully inserted " << e.getName();
    qDebug() << dateTime;
    qDebug() << userEvents.size();
    qDebug() << userEvents[dateTime].getName();
    AddToDatabase(e);
    return true;

}

void DayCalendar::ReplaceEvent(Event e)
{
    QDateTime dateTime = QDateTime(e.getStartDate(), e.getTimeStart());
    userEvents[dateTime] = e;
}

Event DayCalendar::GetEvents(QDateTime q)
{
    //Event event = this->events[index];
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

///Purpose: Get the upcoming events given the number of upcoming days you would like to see ahead
///First matches the first day with a key in map, then adds a day and checks again, do this for number of upcoming days
/// If match found, add to vector of events.
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

///Purpose: If Event exists in map, return true, else false
bool DayCalendar::EventExists(Event e)
{
    QDateTime dateTime = QDateTime(e.getStartDate(), e.getTimeStart());
    map<QDateTime,Event>::const_iterator it = userEvents.find(dateTime);
    return it!=userEvents.end();
}

bool DayCalendar::AddToDatabase(Event newEvent)
{
    //Send query to calenderDB variable
    calenderdb.addEventInDb(newEvent.getName(),newEvent.getLocation()); //will need to pass all relevant info


    //Testing database to see if validation is sucessful of test credentials
    bool xx=calenderdb.validateCredentials("jcook","P@SS");

    qDebug() << xx;

    //Testing the changing of a user's password
    calenderdb.changePassword("jcook", "******");

    qDebug() <<"Changed Password";

    return xx;

}




