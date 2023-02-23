#include <iostream>
#include "Mammal.h"
#include "Mammals.h"
using namespace std;

int main ()
{

   Mammal* theArray[4];
   Mammal* ptr;
   int choice, i;

   int sz = sizeof(theArray)/sizeof(Mammal*);
   for (i = 0; i<sz; i++)
   {

      cout << "(1)dog\n(2)cat\n(3)horse\nChoice: ";

      cin >> choice;

      switch (choice)
      {
         case 1: ptr = new Dog;
         break;

         case 2: ptr = new Cat;
         break;

         case 3: ptr = new Horse;
         break;

         default: ptr = new Mammal;
         break;

      }

      theArray[i] = ptr;
   }

    for (i=0;i<sz;i++) theArray[i]->Speak();

    // Always free dynamically allocated objects

    for (i=0;i<sz;i++) delete theArray[i];
    return 0;

}