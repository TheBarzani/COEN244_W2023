#ifndef _EVENT_H_
#define _EVENT_H_

#include <iostream>
#include <string>
#include "date_time.h"
using namespace std;

class Event
{//Event class
    public:
        Event(int hours = 0, int minutes = 0, int m = 1,
                int d = 1, int y = 1900, string name = "Christmas"); 
        void setEventData(int hours, int minutes, int m, int d, int y, string name);
        void printEventData();
    private:
        string eventName;
        Time eventTime;
        Date eventDay; 
};

#endif
