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
    /*
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
                            */
}

void DayCalendar::setUserID(int id)
{
    userID=id;

}

void DayCalendar::FillFromDatabase()
{
    vector<Event> events =calenderdb.getEventsForUser(userID);
    for(int i = 0; i < events.size(); i++)
    {
        QDate date = events[i].getStartDate();
        if(!EventOnDayExists(date))
          {
            vector<Event> nVector;
            nVector.push_back(events[i]);
            this->userEvents.insert(pair<QDate, vector<Event>>
                                    (date, nVector));
        }
        else
        {
            vector<Event> nestedEvents = GetEvents(date);
            nestedEvents.push_back(events[i]);
            this->userEvents[date] = nestedEvents;
        }

    }
}

///Purpose: Adding Event to userEvent Map
/// Returns true, if add was succesful, else if event already exists at specified time of new event, return false
bool DayCalendar::AddEvent(Event e)
{
    QDate date = e.getStartDate();
    if(EventOnDayExists(date))
        this->userEvents[date].push_back(e);
    else
    {
        vector<Event> events;
        events.push_back(e);
        this->userEvents.insert(pair<QDate, vector<Event>>(date, events));
    }

    qDebug() << "sucessfully inserted " << e.getName();
    qDebug() << date;
    qDebug() << userEvents.size();
    AddToDatabase(e,userID);
    return true;

}

void DayCalendar::ReplaceEvent(Event oldEvent, Event newEvent)
{
    Event oldEventSaved;
    QDateTime oldDate(oldEvent.getStartDate(), oldEvent.getTimeStart());
    RemoveEvent(oldDate, oldEventSaved);
    AddEvent(newEvent);
}

bool DayCalendar::GetEvent(QDateTime q, Event &event)
{
    //Event event = this->events[index];
    vector<Event> events = GetEvents(q.date());
    for(vector<Event>::iterator it = events.begin(); it != events.end(); ++it)
        if(it->getTimeStart() == q.time())
        {
            event = *it;
            return true;
        }
    qDebug() << "Could not find event";
    return false;

}

vector<Event> DayCalendar::GetEvents(QDate q)
{
    return this->userEvents[q];
}

void DayCalendar::RemoveEvent(QDateTime q, Event &removedEvent)
{
    vector<Event> events = GetEvents(q.date());
    qDebug() << "events size " << events.size();
    for(int i = 0; i < events.size(); ++i)
    {
        if(events[i].getTimeStart() == q.time())
        {
            qDebug() << "Found event to remove";
            removedEvent = events[i];
            qDebug() << "got removed event: " << removedEvent.getName();

            events.erase(events.begin()+i);
            break;
        }
    }
    this->userEvents[q.date()] = events;

}

///Purpose: Get the upcoming events given the number of upcoming days you would like to see ahead
///First matches the first day with a key in map, then adds a day and checks again, do this for number of upcoming days
/// If match found, add to vector of events.
vector<Event> DayCalendar::GetUpcomingEvents(int numberOfDays, QDate inital_day)
{
    qDebug() << "ID for current user is: " << userID<<endl;
    qDebug() << "Get UpcomingEvents called";
    QDate proposed = inital_day;
    qDebug() << "proposed is initally " << proposed;
    vector<Event> events;
    vector<Event> ShowEvents;//=calenderdb.getEventsForUser(userID);
    for(int i = 0; i < numberOfDays; i++)
    {
        if(EventOnDayExists(proposed))
        {
            events = GetEvents(proposed);
            qDebug() << "Got Events";
            qDebug() << "events size: " << events.size();
            for(int j = 0; j < events.size(); j++)
            {
                qDebug() << "pushing " << events[j].getName();
                ShowEvents.push_back(events[j]);
            }
        }
      proposed = proposed.addDays(1);
    }
    //ShowEvents=calenderdb.getEventsForUser(userID);
    ShowEvents=orderEvents(ShowEvents);
    return ShowEvents;
}

///Purpose: If Event exists in map, return true, else false
bool DayCalendar::EventExists(Event e)
{
    QDate date = e.getStartDate();
    if(EventOnDayExists(date))
    {
         vector<Event> events = GetEvents(date);
         QTime time = e.getTimeStart();
         for(vector<Event>::iterator it = events.begin(); it != events.end(); ++it)
            if(it->getTimeStart() == time)
                return true;
    }
    return false;
}

bool DayCalendar::EventOnDayExists(QDate q)
{
    map<QDate, vector<Event>>::const_iterator it = userEvents.find(q);
    if(it != userEvents.end())
    {
        qDebug() << "Event on day " << q << "exists!";
        vector<Event> events = GetEvents(q);
        for(int i = 0; i < events.size(); i++)
        {
            qDebug() << events[i].getName();
        }
        return true;
    }
    qDebug() << "Event on day " << q << "does not exist";
    return false;
}

//Passes the user's id and the event to add.
bool DayCalendar::AddToDatabase(Event newEvent,int theID)
{
    bool x =calenderdb.addEventInDb(newEvent,userID);
    QMessageBox msgBox;
    msgBox.setText("Event added sucessfully.");
    msgBox.exec();
    return x;
}

bool DayCalendar::SyncDatabase()
{
    return true;
}

vector<QDate> DayCalendar::GetAllEventDates()
{
    vector<QDate> DateVector;
    for (std::map<QDate,vector<Event>>::iterator it=userEvents.begin(); it!=userEvents.end(); ++it)
    {
        DateVector.push_back(it->first);
    }
    return DateVector;
}

vector<Event> DayCalendar::orderEvents(vector<Event> origEvents)
{
    //Vector to return
    vector<Event> EventsOrdered;

    //Dynam9ic vector that gets dates removed as sorting proccess runs
    vector<Event> runningList = origEvents;

    int idOfMinEvent;

    //Minimum date/time
    QDateTime minDateTime;

    //Current date/time
    QDateTime currDateTime;

    //Runs until the each event has been parsed through
    while(runningList.size()>0)
    {
        //Assume min date is first element of current vector
        minDateTime=QDateTime(runningList[0].getStartDate(),runningList[0].getTimeStart());
        //minDate= runningList[0].getStartDate();
        idOfMinEvent=0;
        //Traverse and find closest date
        for(int x=0;x<runningList.size();x++)
        {
            currDateTime=QDateTime(runningList[x].getStartDate(),runningList[x].getTimeStart());
            if(currDateTime<minDateTime)
            {
                minDateTime=currDateTime;
                idOfMinEvent=x;
            }
        }
        //Push the current minimum to the ordered events list
        EventsOrdered.push_back(runningList[idOfMinEvent]);
        //Erase the event that was added to the sorted list
        runningList.erase(runningList.begin()+idOfMinEvent);
    }

    return EventsOrdered;
}

void DayCalendar::Display()
{

}




