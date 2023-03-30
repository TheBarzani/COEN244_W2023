#include <iostream>
using namespace std;

// Template function that will be adding two data.
template <typename T>
T add(T a, T b)
{
   return (a + b);
}

// Template Function with a Type T
// During instantiation, this T will be replaced by the data type of argument.
template <class T>
T maxNum (T a, T b) {
 return (a > b ? a : b);
}

// Main function
int main()
{
   // Variables to store results of different data types.
   int ans1;
   double ans2;

   // Calling template function with int parameters.
   ans1 = add<int>(2, 2); // Explicit calling
   cout << "Sum of 2 + 2 is: " << ans1 << endl;

   // Calling template function with double parameters.
   ans2 = add<double>(2.5, 3.5); // Explicit calling
   cout << "Sum of 2.5 + 3.5 is: " << ans2 << endl;


    int x = 5, y = 2;
    float a = 4.5, b = 1.3;
    
    // Implicit calling
    cout << endl <<"Max of "<<x << " and " << y << " = " << maxNum(x, y) << "\n";
    cout <<"Max of "<<a << " and " << b << " = " << maxNum(a, b);

   return 0;
}

/*Inspired by: https://www.scaler.com/topics/cpp/templates-in-cpp/ */