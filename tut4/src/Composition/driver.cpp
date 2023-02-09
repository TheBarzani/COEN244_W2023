#include <iostream>
#include <string>
#include "date_time.h"
#include "event.h"

using namespace std; 

int main()
{
    //instantiate an object and set data for Christmas

    Event object;
    object.setEventData(6, 0, 12, 25, 2010, "Christmas");

    //print out the data for object
    object.printEventData();

    //instantiate the second object and set date for the fourth of July
    Event object2;
    object2.setEventData(1, 15, 7, 4, 2010, "Fourth of July");

    //print out the data for the second object
    object2.printEventData(); 

    return 0;
}

//SOURCE: https://sites.google.com/site/gbswebportfolio/projects/c-composition-example 
