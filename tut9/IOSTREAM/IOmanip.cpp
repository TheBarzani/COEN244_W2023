#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    
    // Base Conversion Manipulation 
    int COEN244 = 244;
    int COEN244HEX = 0xf4;
    cout << "DEC2HEX: " << hex << COEN244 << endl
         << "DEC2OCT: " << oct << COEN244 << endl
         << "HEX2DEC: " << dec << COEN244HEX << endl
         << "HEX2OCT: " << oct << COEN244HEX << endl
         << "DEC2BASE_16: " << setbase(16) << COEN244 << endl
         << "HEX2BASE_8: " << setbase(8) << COEN244HEX << endl << endl;

    // Floating-Point Precision Manipulation
    double root2 = sqrt(2.0);

    cout <<"Square root of 2 with precisons 0-9:\n";
    cout << fixed; 
    for(int i=0; i <=9; i++){
        cout << setprecision(i)<< root2 << endl;
    }
    cout << endl;

    // Field Width Input Manipulator
    int width = 4;
    char phrase[10];
    cout << "Enter a sentence:\n";
    cin.width(5);

    while(cin >> phrase){
        cout << setw(width++) << phrase << endl;
        cin.width(5);
        if(width == 16) break;
    }

    // Right allignment output
    while(cin >> phrase){
        cout << setw(width--) << phrase << endl;
        cin.width(5);
        if(width == 4) break;
    }

    /**
     * There is other stuff to cover too, however
     * they are just part of the text formatting and 
     * they can be easily understood by following the 
     * documentation. They are:
     * 
     * left, right, internal, boolalpha, uppercase,
     * lowercase, scientific, showpos, showpoint, 
     * fill, setfill 
    */
}