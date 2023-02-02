#ifndef _CLASS_
#define _CLASS_

#include <iostream>
#include <string>
using namespace std;

class my_class{
    public:
    my_class(); // default constructor
    my_class(int v); // Parametrized constructor 1
    my_class(int v, string arg2); // Parametrized constructor 1
    my_class(my_class &obj); // Copy Construtor

    // Getters & Setters
    int getID();
    /*void setID(int i);*/
    double getVal();
    bool setVal(double v);

    // Our methods
    void info();
    string toString();

    private:
    // Some random attr
    int ID;
    double val;
    static int obj_count;

    protected:
    // special character that only inherted classes can see
    char sym;
    
};

//Inheritance for later
// class my_class_kid : public my_class{
//     public: 
//     my_class_kid(); // default Constructor

// };

#endif
