#ifndef _CLASS_
#define _CLASS_

#include <iostream>
#include <string>
using namespace std;

class my_class{
    public:
    my_class(); // default constructor
    my_class(my_class &obj); // Copy Construtor

    // Getters & Setters
    int getID();
    /*void setID(int i);*/
    double getVal();
    bool setVal(double v);

    // Our methods
    void info();

    // Clone methods
    my_class& deep_clone();
    my_class& shallow_clone();

    ~my_class();

    private:
    // Some random attr
    int* ptr;
    int ID;
    double val;
    static int obj_count;
    
};


#endif
