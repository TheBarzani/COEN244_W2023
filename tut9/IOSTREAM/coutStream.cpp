#include <iostream>

using namespace std;

/**
 * This is a demo illustrating different ways to 
 * output text and how it is done on the harware 
 * level.
 * 
 * Remember that the insertion operator "<<" 
 * is overloaded to act as an insertion operator
 * instead of bitshift operator. 
*/

int main(){
    // Converted Charrcter to ASCII code depicting: This is generated for by multiple cout.put()
    int ascii[] = {84, 104, 105, 115, 32, 105, 115, 32, 103, 101, 110, 101, 114, 97, 116, 
                    101, 100, 32, 102, 111, 114, 32, 98, 121, 32, 109, 117, 108, 116, 105, 
                        112, 108, 101, 32, 99, 111, 117, 116, 46, 112, 117, 116, 40, 41, 32};

    /*Multiple character and formatted output using the insertion operator.*/
    cout << endl <<"This is formatted as characters"<< endl; // endl is overloaded for '\n'
    cout << endl <<"This is an integer converted to c-string " << 244 << endl;

    /*Single character output and use of a for loop!*/
    cout.put('\n');
    for (int i=0; i<sizeof(ascii)/sizeof(int); i++){
        cout.put(ascii[i]);
    }
    cout.put('\n');
    cout.put('\n');

    /*Unformatted character output, the size for the string is given*/
    cout.write("UNFORMATTED OUTPUT", 19);
    cout.put('\n');
    cout.put('\n');
}