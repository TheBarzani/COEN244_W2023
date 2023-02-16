// C++ program to illustrate the concept of dynamic binding (RUN-TIME)
#include <iostream>
using namespace std;
 
class B
{
    public:
 
    // Virtual function
    virtual void f() {
        cout << "The base class function is called.\n";
    }
};
 
class D: public B
{
    public:
    void f() {
        cout << "The derived class function is called.\n";
    }
};

class D2: public B
{
    public:
    void f() {
        cout << "The derived 2 class function is called.\n";
    }
};
 
int main()
{
    // Implicit type conversion
    // This will be covered in details later

    B base;
    D derived;
    D2 derived2;
    

    B *basePtr = &base;
    basePtr->f();
 
    basePtr = &derived;
    basePtr->f();

    basePtr = &derived2;
    basePtr->f();
 
    return 0;
}