#include "my_class.h"
using namespace std;

int my_class::obj_count = 0;

my_class::my_class(): ID(obj_count)
{   
    //Arbitrarely pointing ptr to the ID
    this->ptr = &ID;
    cout << "\nHello, I am an object!\n\n";
    obj_count++;
}

my_class::my_class(my_class &obj){

    //this = obj;
    this->ID = obj.ID;
    this->val = obj.val;
    this->ptr = obj.ptr;
}

int my_class::getID(){
    return this->ID;
}

double my_class:: getVal(){
    return this->ID;
}

bool my_class::setVal(double v){
    this->val = v;
    return (v == val);
}

void my_class::info(){
    cout << "\nI am " << ID << endl;
    cout << "\nThe value: " << val << endl;
}

my_class& my_class::shallow_clone(){
    return *this;
}

my_class& my_class::deep_clone(){
    my_class* temp = new my_class();
    temp->ID = this->ID;
    temp->val = this->val;
    temp->ptr = this->ptr;
    return *temp;
}

my_class::~my_class(){
    delete ptr;

    //If array:
    // delete[] ptr;
}


