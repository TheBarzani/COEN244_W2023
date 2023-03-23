#include <iostream>

using namespace std;

// Overriding the endl manipulator
ostream &endl(ostream &output){
    return output << " endl ";
}

// User-defined manipulators
ostream &newline(ostream &output){
    return output << '\n';
}

ostream &POP(ostream &output){
    return output <<' ' << (char)80 << (char)79 << (char)80 << ' ';
}

int main(){

    // Testing the overriden and user-defined manipulators
    cout << "TEXT" << endl << "TEXT\n";
    cout << "TEXT" << POP << "TEXT\n";
    cout << "TEXT" << newline << "TEXT\n";

}