#include <iostream>
using namespace std;

int mult(int x, int y)
{
    return x * y;
}

int main()
{
    // Declaration of function pointer
    int (*funcptr)(int, int);

    // funcptr is pointing to mult function which multiplies two numbers
    funcptr = mult;

    // Store the result obtained
    int mul = funcptr(5, 7);

    cout<<"The value of the product is: "<<mul<<endl;
    return 0;
}