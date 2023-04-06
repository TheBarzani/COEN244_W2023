#include <iostream>
using namespace std;

class Greet {

  public:    
    // overload function call/parentheses operator
    void operator()() {
      cout << "Hello World!";
    }
};

int main() {

  // create an object of Greet class
  Greet greet;

  // call the object as a function
  greet();

  // This functor can also be called as follows
  greet.operator()();

  return 0;
}
