#include <iostream>
using namespace std;

class Greet {
  char * name; 
  public:  

    Greet(char * a){
      name = a;
    }  
    // overload function call/parentheses operator
    void operator()() {
      cout << "Hello " <<name;
    }
};

int main() {

  // create an object of Greet class
  Greet greet("NAME");

  // call the object as a function
  greet();

  // This functor can also be called as follows
  greet.operator()();

  return 0;
}
