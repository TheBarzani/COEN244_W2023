#include <iostream>
using namespace std;

/**
 * Here, we have a Square class that stores the length of the
 * of the square. We are overloading the inequality operators.
*/
class Square {
        
    public:
    int side;
    
    Square(int _side) {
        side = _side;
    }

    int area() {
        return side * side;
    }

    // What should be the return type for these operators


    bool operator > (Square &s) {
        if (area() > s.area()) return true;
        return false;
    }

    bool operator < (Square &s) {
        if (area() < s.area()) return true;
        return false;
    }
};

int main() {
    
    Square s1(4);
    Square s2(3);

    if (s1 > s2) {
        cout << "S1 is larger than S2\n";
    } else if (s1 < s2) {
        cout << "S1 is smaller than S2\n";
    } else {
        cout << "S1 is equal to S2\n";
    }

    s2.side = 4;

    if (s1 > s2) {
        cout << "S1 is larger than S2\n";
    } else if (s1 < s2) {
        cout << "S1 is smaller than S2\n";
    } else {
        cout << "S1 is equal to S2\n";
    }

    return 0;
}

/*Inspired by: https://www.scaler.com/topics/binary-operator-overloading-in-cpp/ */