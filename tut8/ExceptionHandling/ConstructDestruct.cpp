// C++ program to show how many times
// Constructors and destructors are called
#include <iostream>
using namespace std;
 
class Test {
    static int count; // Used static to initialise the scope of 'count' till lifetime
    int id;
 
public:
  // Constructor
    Test()
    {
        count++;
        id = count;
        cout << "Constructing object number " << id;
        if (id == 4){
            cout << endl;
            throw "No more IDs available";
        }
        cout << "...Done." << endl;
    }
  // Destructor
    ~Test()
    {
        cout << "Destructing object number " << id << endl;
    }
};
 
int Test::count = 0;
 
// Source code
int main()
{
    try {
        Test array[5];
    }
    catch (const char * i) {
        cout << endl << "Caught: " << i << endl;
    }
}