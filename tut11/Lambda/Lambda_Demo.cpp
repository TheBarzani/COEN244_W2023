#include <iostream>
using namespace std;
template<typename t>
void fun(t r){
    r();
}
int main(){
    cout << endl << "Function 1:" << endl;
    [](){cout << "Hello";}();

    cout << endl << endl << "Function 2:" << endl;
    int sum = [](int x, int y) {return x+y;} (10, 32);
    cout << "Sum: " << sum;
 
    cout << endl<<endl << "Function 3:" << endl;
    int x = 5;
    int y = 6;
 
    auto inc = [&x, &y](){cout << ++x << " " << ++y << endl;};
    cout << "x & y : "; 
    inc();
 
    cout << endl << "Function 4:" << endl;
    auto S = [x, y](){cout << "x * y: " << x*y << endl << endl;};
    fun(S);
}