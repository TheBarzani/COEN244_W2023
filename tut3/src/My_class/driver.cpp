
#include <iostream>
#include <string>
#include "my_class.h"

using namespace std;

struct my_struct{
    int age;
    string color;
};

int main(){
    my_class parent;
    //my_class_kid kid;
    my_struct apple;


    // Apple structures
    apple.age = 2;
    apple.color = "red";
    
    // Apple but no structure
    int apple1_age = 2;
    string apple1_color = "red";

    // Unnaccessible becuase they are protected
    // parent.sym = 'c';
    // kid.sym = 'c';

    my_class third(2, "I love pointers");
}

