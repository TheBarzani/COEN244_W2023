#include <iostream>

using namespace std;

/**
 * This is a demo illustrating different ways to 
 * input text and how it is done on the harware 
 * level.
 * 
 * Remember that the extraction operator ">>" 
 * is overloaded to act as an extraction operator
 * instead of bitshift operator. 
*/

int main(){
    // Buffered character array
    char mystr[100];
    char myline[100];
    int mychar;
    /*input stops when there is a blank space*/
    cout << "\nInput for <<: ";
    cin >> mystr;
    cout << mystr << endl<<endl;

    /*Input using the get() method*/
    cin.get(); // This should catch the blank space
    mychar = cin.get();
    cout.put(mychar);
    cout.put('\n');
    cout.put('\n');


    /*Second version of get() */
    cin.get(mystr,100);
    cout << mystr << endl << endl;
    cin.get();

    /*Using getline*/
    cout << "Input for getline: ";
    cin.getline(myline,100);
    cout << myline << endl << endl;
}