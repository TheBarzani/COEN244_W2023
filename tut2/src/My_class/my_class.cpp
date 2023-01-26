#include "my_class.h"
using namespace std;

int my_class::obj_count = 0;

my_class::my_class(): my_class(0)
{   
    // obj_count++;
    // ID = obj_count;
    // val = 0;
    cout << "\nHello, I am an object!\n\n";
}

my_class::my_class(int v) : ID(++obj_count), val(v)
{
}

my_class::my_class(int v, string arg2) : my_class(v)
{
    // this->val = v;
    // this->ID = ++obj_count;
    cout << "\nThe password is " << arg2 << endl << endl; 
}

my_class_kid::my_class_kid(){
    sym = 'c';
}
