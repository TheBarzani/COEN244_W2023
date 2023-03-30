#include <iostream>
using namespace std;

//EXAMPLE 1
template<class T>
void sum(T a, T b){
    cout << "Inside Template " << a + b << endl;
}

void sum(int a, int b){
    cout << "Inside Overload " << a + b << endl;
}

int main()
{
    // Template Function will be called.
    sum(4.5,9.8);
    sum<int>(5,7);
    
    // Overload will be called.
    sum(5,7);
    
	return 0;
}

//EXAMPLE 2

// // Declaring the template function.
// template <class T>

// // Overloading the template function.
// void display(T t1)
// {
//    cout << "Inside the display template function: " << t1 << endl;
// }

// // Overloading the template function with an integer parameter.
// void display(int t1)
// {
//    cout << "Inside the overloaded integer-display template function: " << t1 << endl;
// }

// // main function
// int main()
// {
//    // Calling the overloaded template function with different arguments.
//    display(20);
//    display(20.55);
//    display('G');

//    return 0;
// }

/*Inspired by: https://www.scaler.com/topics/cpp/templates-in-cpp/*/