#include <iostream>
#include <cmath>
using namespace std;

/**
 * Here, we have a fraction class that can have numerator
 * and denonminator. We are overloading the addition and
 * multiplication operators.
*/

class Fraction {
    
    public:
    
    int numerator;
    int denominator;
    
    Fraction(int _numerator, int _denominator) {
        numerator = _numerator;
        denominator = _denominator;
    }

    // Greatest Common Factor
    int gcd(int a, int b) {
        if (a == 0) return b;
        return gcd(b % a, a);
    }
    
    // Lowest Common Multiple
    int lcm(int a, int b) {
        return (a * b) / gcd(a, b);
    }

    // Addition Operator
    Fraction operator + (Fraction
        const & x) {

        int num = (numerator * x.denominator) + (x.numerator * denominator);
        int den = (denominator * x.denominator);

        int GCD = gcd(num, den);

        num /= GCD;
        den /= GCD;

        Fraction f(num, den);
        return f;
    }

    // Multiplication operator
    Fraction operator * (Fraction const &x) {

        int num = (numerator * x.numerator);
        int den = (denominator * x.denominator);

        int GCD = gcd(num, den);

        num /= GCD;
        den /= GCD;

        Fraction f(num, den);
        return f;
    }

    //TODO: Overload the operator for division

    //TODO: Overload the cout << operator

};

int main() {
    
    Fraction f1(1, 3);
    Fraction f2(3, 2);
    
    Fraction f3 = f1 + f2;
    Fraction f4 = f1 * f2;

    //UNCOMMENT THIS
    // Fraction f5 = f1 / f2;

    cout << f1.numerator << "/" << f1.denominator <<
        " + " << f2.numerator << "/" << f2.denominator <<
        " is " << f3.numerator << "/" << f3.denominator << endl;

    cout << f1.numerator << "/" << f1.denominator <<
        " * " << f2.numerator << "/" << f2.denominator <<
        " is " << f4.numerator << "/" << f4.denominator << endl;

    /*UNCOMMENT THESE*/
    // cout << f1.numerator << "/" << f1.denominator <<
    //     " / " << f2.numerator << "/" << f2.denominator <<
    //     " is " << f5.numerator << "/" << f5.denominator << endl;

    // cout << f1 << endl << f2;
    return 0;
}


/*Inspired by: https://www.scaler.com/topics/binary-operator-overloading-in-cpp/ */