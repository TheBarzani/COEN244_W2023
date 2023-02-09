#include "date_time.h"


Time::Time()

{     //default constructor

      hr = 0;

      min = 0;

}

 

Time::Time(int hours, int minutes)

{     //class time constructor that accepts parameters

      if(0 <= hours && hours < 24)//makes sure hours are valid

            hr = hours;

      else

            hr = 0;

 

      if(0 <= minutes && minutes < 60)//makes sure minutes are valid

            min = minutes;

      else

            min = 0;

}

 

void Time::setTime(int hours, int minutes)

{     //sets a valid time

      if(0 <= hours && hours < 24)

            hr = hours;

      else

            hr = 0;

 

      if(0 <= minutes && minutes < 60)

            min = minutes;

      else

            min = 0;

}

 

void Time::getTime(int& hours, int& minutes)

{    

//returns the hours and minutes

      hr = hours;

      min = minutes;

}

 

void Time::printTime()

{    

//displays the hours and minutes to the screen

      if(hr < 10)

            cout << "0";

      cout << hr << ":";

      if(min < 10)

            cout << "0";

      cout << min << endl;

}

 

void Time::incrementHours()

{     //increments hours by one

      hr++;

      if(hr > 23)

            hr = 0;

}

 

void Time::incrementMinutes()

{     //increments minutes by one

      min++;

      if(min > 59)

      {

            min = 0;

            incrementHours();

      }

}

 

Date::Date()

{//default constructor

      month = 1;

      day = 1;

      year = 1900;

}

 

Date::Date(int m, int d, int y)

{//constructor that accepts parameters

      if(m >= 1 && m <= 12)//makes sure month is valid

            month = m;

      else

            month = 1;

      if(d >= 1 && d <= 31)//makes sure day is valid

            day = d;

      else

            day = 1;

      if(y >= 1900 && y <= 2010)//makes sure year is valid

            year = y;

      else

            year = 1900;

}

 

void Date::setDate(int m, int d, int y)

{//sets a valid date

      if(m >= 1 && m <= 12)

            month = m;

      else

            month = 1;

      if(d >= 1 && d <= 31)

            day = d;

      else

            day = 1;

      if(y >= 1900 && y <= 2010)

            year = y;

      else

            year = 1900;

}

 

void Date::getDate(int& m, int& d, int& y)

{//returns the month, day and year

      month = m;

      day = d;

      year = y;

}

 

void Date::printDate()

{//displays the month, day and year to the screen

      if(month < 10)

            cout << "0";

      cout << month << "/";

      if(day < 10)

            cout << "0";

      cout << day << "/";

      cout << year;

}
