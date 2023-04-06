#include<iostream>
using namespace std;


/**
 * Lambdas can be thought of as functors
 * without a name or a class but behaves like
 * one and that is why it is super convinient
 * to use lambdas for fast code.
*/

// functor definition
class MyFunctor
{
   public:
     int operator()(int x) { return (x * 2 + 42)/2 - 7;}

};
int main()
{
    MyFunctor encoder;
    int x = encoder(20);
    cout << "Encoded message: " << x << "\n";
    // lambda expression
    auto decoder = [](int x){
        return  ((x+7) * 2 - 42)/2;
    };
    cout << "Decoded message: " << decoder(x);
    return 0;
}