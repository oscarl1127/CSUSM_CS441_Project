#include "daycalendar.h"

using namespace std;

DayCalendar::DayCalendar()
{

}

void DayCalendar::addToList(Event e)
{
    this->userEvents.push_back(e);
}

QString DayCalendar::getEventName(int index)
{

    return this->userEvents.at(index).getName();

}
