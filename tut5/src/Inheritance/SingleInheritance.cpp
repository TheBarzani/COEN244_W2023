#include <iostream>
using namespace std;

class Base {
  public:
    Base(){
      cout << "Base Constructor"<<endl; 
    }
    ~Base(){
      cout << "Base Destructor"<<endl; 
    }
    float salary = 900;
};

class Derived: public Base {
  public:
    Derived(){
      cout << "Derived Constructor"<<endl; 
    } 
    float bonus = 100;
    void sum() {
      cout << "Your Total Salary is: " << (salary + bonus) << endl;
    }
    virtual ~Derived(){
      cout << "Derived Destructor"<<endl; 
    }    
};

int main() {
    
  // Creating an object of the derived class.
  Derived x;
    
  // Gets the salary variable of Base class.
  cout << "Your Salary is:" << x.salary << endl;
  // Gets the bonus variable of the Derived class.
  cout << "Your Bonus is:" << x.bonus << endl;
  x.sum();
  return 0;
}
