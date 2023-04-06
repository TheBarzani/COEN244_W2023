#include <iostream>

using namespace std;

int main()
{
    /**
     * The return type and the type of
     * parameters is automatically determined
     * by the compiler.
    */
    auto add = [](auto a, auto b){
        return a+b;
    };
    cout << add(56,89) << endl;
    cout << add(90.98, 65.42) << endl;
}