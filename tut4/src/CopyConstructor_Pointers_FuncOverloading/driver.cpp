
#include <iostream>
#include <string>
#include "my_class.h"

using namespace std;

int main(){
    my_class obj1;
    obj1.setVal(19);
    my_class obj2(obj1);
    my_class obj3 = obj1.deep_clone();
    
    obj1.info();
    obj2.info();
    obj3.info();
}

