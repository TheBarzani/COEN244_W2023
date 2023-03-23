#include <iostream>

using namespace std;

/**
 * This is a demo illustrating different ways to 
 * input text.
 * 
 * Remember that the extraction operator ">>" 
 * is overloaded to act as an extraction operator
 * instead of bitshift operator. 
*/


int main()
{
    char char1;

    cout << "Enter string: ";
    cin.get(char1); cout << endl;
    cout << "char1 = " << char1 << endl;
    cin.get(char1); cout << endl;
    cout << "char1 = " << char1 << endl;

    cin.putback(char1);
    cin.get(char1);
    cout << endl;
    cout << "char1 = " << char1 << endl;

    char1 = cin.peek();cout << endl;
    cout << "char1 = " << char1 << endl;

    cin.get(char1);
    cout << endl;
    cout << "char1 = " << char1 << endl;
}
