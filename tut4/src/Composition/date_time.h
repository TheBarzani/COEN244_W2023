#ifndef _DATE_TIME_H_
#define _DATE_TIME_H_
#include <iostream>
#include <string>
using namespace std;


class Time
{     //Time class
    public:
        Time();
        Time(int, int);
        void setTime(int, int);
        void getTime(int&, int&);
        void printTime();
        void incrementHours();
        void incrementMinutes();
        
    private:
        int hr;
        int min;
};

class Date
{//Date class
    public:
        Date();
        Date(int, int, int);
        void setDate(int, int, int);
        void getDate(int&, int&, int&);
        void printDate();

    private:
        int month;
        int day;
        int year;

};

#endif