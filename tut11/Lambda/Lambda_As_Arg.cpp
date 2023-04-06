// C++ Program for demonstrating
// function pointer as pointer
#include <iostream>
using namespace std;
 
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
     * takes the lambda and executes in the other 
     * function.
    */
    /**
     * In this case we didn't have to make any useless functions. 
    */

    print(5,2,[](int a, int b){
        return a*b;
    });
    print(5,2,[](int a, int b){
        return a+b;
    });
    
    return 0;
}