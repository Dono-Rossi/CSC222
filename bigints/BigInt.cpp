#include <iostream>
#include <string>
#include "BigInt.h"
using namespace std;

BigInt::BigInt()
{
    negative = false;
    digits = "0";
}

BigInt::BigInt(int i)
{
    negative = (i >= 0) ? false : true;
    digits = (i >= 0) ? std::to_string(i) : std::to_string(-i);
}

BigInt::BigInt(string n)
{
    negative = (n.front() == '-') ? true: false;
    digits = (n.front() == '-') ? n.substr(1, n.size() - 1) : n;
}

string BigInt::to_string() const
{
    return (!negative) ? digits : "-" + digits;
} 

bool BigInt::operator==(const BigInt& b2) const
{return (((!negative) ? digits : "-" + digits) == ((!b2.negative) ? b2.digits : "-" + b2.digits));
}

bool BigInt::operator>(const BigInt& b2) const{
    int bInt1 = stoi((!negative) ? digits : "-" + digits);
    int bInt2 = stoi((!b2.negative) ? b2.digits : "-" + b2.digits); 
    return(bInt1>bInt2);
}

bool BigInt::operator<(const BigInt& b2) const{
    int bInt1 = stoi((!negative) ? digits : "-" + digits);
    int bInt2 = stoi((!b2.negative) ? b2.digits : "-" + b2.digits);
    return(bInt1<bInt2);
}

bool BigInt::operator>=(const BigInt& b2) const{
    int bInt1 = stoi((!negative) ? digits : "-" + digits);
    int bInt2 = stoi((!b2.negative) ? b2.digits : "-" + b2.digits);
    return(bInt1>=bInt2);
}

bool BigInt::operator<=(const BigInt& b2) const{
    int bInt1 = stoi((!negative) ? digits : "-" + digits);
    int bInt2 = stoi((!b2.negative) ? b2.digits : "-" + b2.digits);
    return(bInt1<=bInt2);
}

bool BigInt::operator!=(const BigInt& b2) const{
    int bInt1 = stoi((!negative) ? digits : "-" + digits);
    int bInt2 = stoi((!b2.negative) ? b2.digits : "-" + b2.digits);
    return(bInt1!=bInt2);
}

BigInt BigInt::operator+(const BigInt& b2) const{
    int bInt1 = stoi((!negative) ? digits : "-" + digits);
    int bInt2 = stoi((!b2.negative) ? b2.digits : "-" + b2.digits);
    return(bInt1+bInt2);
}

BigInt BigInt::operator*(const BigInt& b2) const{
    int bInt1 = stoi((!negative) ? digits : "-" + digits);
    int bInt2 = stoi((!b2.negative) ? b2.digits : "-" + b2.digits);
    return(bInt1*bInt2);
}
