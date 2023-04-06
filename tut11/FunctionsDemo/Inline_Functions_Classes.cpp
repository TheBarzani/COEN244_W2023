// C++ Program to demonstrate inline functions and classes
#include <iostream>
 
using namespace std;
 
class operation {
    int a, b, add, sub, mul;
    float div;
 
public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};
inline void operation ::get()
{
    cout << "Enter first value:";
    cin >> a;
    cout << "Enter second value:";
    cin >> b;
}
 
inline void operation ::sum()
{
    add = a + b;
    cout << "Addition of two numbers: " << a + b << "\n";
}
 
inline void operation ::difference()
{
    sub = a - b;
    cout << "Difference of two numbers: " << a - b << "\n";
}
 
inline void operation ::product()
{
    mul = a * b;
    cout << "Product of two numbers: " << a * b << "\n";
}
 
inline void operation ::division()
{
    div = a / b;
    cout << "Division of two numbers: " << a / b << "\n";
}
 
int main()
{
    
    cout << "Program using inline function\n";
    operation s;

    /**
     * The body of each of these methods is
     * copied here instead of calling the method
     * by using stack-calls and hence the code 
     * is more efficient. 
     * 
     * The private attributes are still accessible 
     * since these methods are invoked on the
     * class objects.
    */
   
    s.get();
    s.sum();
    s.difference();
    s.product();
    s.division();
    return 0;
}