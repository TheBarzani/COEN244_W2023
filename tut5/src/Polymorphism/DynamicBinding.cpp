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
 
int main()
{
    // Implicit type conversion
    // This will be covered in details later

    B base;
    D derived;
    

    B *basePtr = &base;
    basePtr->f();
 
    basePtr = &derived;
    basePtr->f();
 
    return 0;
}