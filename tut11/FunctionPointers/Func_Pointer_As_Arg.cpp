// C++ Program for demonstrating
// function pointer as pointer
#include <iostream>
using namespace std;
 
// Function for Multiplication
int multiply(int a, int b) { return a * b; }
int add(int a, int b){ return a+b;}
 
// Function containing function pointer
// as parameter
void print(int a, int b, int (*funcptr)(int, int))
{
    cout << "The function gives: " << funcptr(a,b)
         << endl;
}
 
// Driver Function
int main()
{
    /**
     * Each time print is called, the function pointer 
     * takes the function and executes in the other 
     * function.
    */

    print(5,2,multiply);
    print(5,2,add);
    
    return 0;
}