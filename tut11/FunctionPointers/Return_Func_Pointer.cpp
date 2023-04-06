#include <iostream>
using namespace std;

// define the function pointer type
typedef int (*ptr)(int);
typedef ptr (*pointer)();

int add(int x)
{
    cout << "from the add function!" << endl;
    return x + 5;
}
 
// function that returns a function pointer
ptr print()
{
    cout << "The sum is ";
    
    // function pointer is returned
    return &add;
}
 
// Driver Code
int main()
{
    // declare a variable
    int x = 45;
    
    // initialize a function pointer
    pointer n = print;
    
    // invoke the pointer and pass the variable as an argument
    cout << (*n())(x) << endl;
 
    return 0;
}