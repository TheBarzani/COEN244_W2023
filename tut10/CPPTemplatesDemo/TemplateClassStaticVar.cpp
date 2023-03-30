#include <iostream>
using namespace std;

/**
 * A Demo to check the value of a static var
 * depending on the template class.
*/

template < class T >
class Container {
    private:
    T data;
    public:
    static int count;
    Container() {
    count++;
    }

    static void displayStaticVariable() {
    cout << count << endl;
    }
};

template < class T >
int Container < T > ::count = 0;

int main() {
    Container < int > obj1;
    Container < float > obj2;
    Container < int > obj3;
    Container < int > ::displayStaticVariable();
    Container < float > ::displayStaticVariable();

    return 0;
}

/*Inspired by: https://www.scaler.com/topics/cpp/generic-programming-in-cpp*/