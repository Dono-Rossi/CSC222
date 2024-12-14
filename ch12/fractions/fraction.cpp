#include <iostream>
#include <string>
#include "fraction.h"
using namespace std;

//constructors
Fraction::Fraction() {
   this ->  num = 0;
   this ->  den = 1;
};


Fraction::Fraction(int num, int den) {
    this -> num = num;
    this -> den = den;
};

Fraction::Fraction(string inputNum) {
    this -> inputNum = inputNum;
};

int Fraction::numerator() {
    if (inputNum.find("/") != -1) {
        int divideLine = inputNum.find("/");
        string nume = inputNum.substr(0, divideLine+1);
        num = stoi(nume);
        return num;
    }
    return num;
}

int Fraction::denominator() {
    if (inputNum.find("/") != -1) {
        int divideLine = inputNum.find("/");
        string deno = inputNum.substr(divideLine+1);
        den = stoi(deno);
        return den;
    }
    return den;
}

int gcd(int num, int den) {
    int leftovers = 0;
    while (den != 0) {
        leftovers = num % den;
        num = den;
        den = leftovers;
    }
    return num;
    }

string Fraction::toString() {
    string stringFraction;
    int GCD = gcd(num, den);
    num = num / GCD;
    den = den / GCD;
    string numString = to_string(num);
    string denString = to_string(den);
    stringFraction.append(numString);
    if (den != 1) {
        stringFraction.append("/");
        stringFraction.append(denString);
    }
    return stringFraction;
}
