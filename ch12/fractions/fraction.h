#include <iostream>
#include <string>
using namespace std;

struct Fraction {
    //vars
    int num, den;
    string inputNum;

    //constructors
    Fraction();
    Fraction(string inputNum);
    Fraction(int num, int den);

    //functions
    int numerator();
    int denominator();
    string toString();
};
int gcd(int, int);
