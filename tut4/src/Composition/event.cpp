#include "event.h"

Event::Event(int hours, int minutes, int m, int d, int y, string name)
                   : eventTime(hours, minutes), eventDay(m, d, y)
{
      eventName = name;
}

 

void Event::setEventData(int hours, int minutes, int m, int d, int y, string name)
{
      eventTime.setTime(hours, minutes);
      eventDay.setDate(m, d, y);
      eventName = name;
}

 

void Event::printEventData()
{
      cout << eventName << " occurs ";
      eventDay.printDate();
      cout << " at ";
      eventTime.printTime();
      cout << endl;
}