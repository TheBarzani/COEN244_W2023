#include <iostream>
using namespace std;

class base1 {
  public:
      void someFunction( ) {cout << "base1"<<endl;}  
};
class base2 {
    public:
    void someFunction( ) {cout << "base2"<<endl;} 
};
class derived : public base1, public base2 {};

int main() {
    derived obj;
    // obj.someFunction(); // Error! 
    
    // SOLUTION: Specity the scope resolution
    // obj.base1::someFunction( );  // Function of base1 class is called
    // obj.base2::someFunction();   // Function of base2 class is called. 
}

