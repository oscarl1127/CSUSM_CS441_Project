#include "event.h"
#include <QDateTime>

Event::Event()
{

}

bool Event::operator ==(Event &b)
{
    return this->getStartDate() == b.getStartDate() &&
            this->getName() == b.getName() &&
            this->getTimeStart() == b.getTimeStart() &&
            this->getTimeEnd() == b.getTimeEnd();
}


