#include <iostream>
#include <string>
#include "BigInt.h"
using namespace std;

int to_num(char c) {  
    return c - '0';   
}  

char digit_to_char(int digit) {  
    return digit + '0';  
}  

string incrementDigitString(const string &digitString)
{
    string digits = digitString;
    int pos = digits.size() - 1;
    char nextDigit = digits[pos] + 1;

    while (nextDigit > '9' && pos >= 0) {
        digits[pos] = '0';
        nextDigit = digits[--pos] + 1;
    }

    if (pos >= 0)
        digits[pos] = nextDigit;
    else
        digits = "1" + digits;

    return digits;
}

string sumCommonLenDigitStrs(const string &s1, const string &s2)
{
    char digitSum, carry = 0;
    string sum = s1;

    for (int i = s1.size() - 1; i >= 0; i--) {
        digitSum = to_num(s1[i]) + to_num(s2[i]) + carry;
        sum[i] = digit_to_char(digitSum % 10);
        carry = digitSum > 9 ? 1 : 0;
    }

    return carry ? "c+" + sum : sum;
} 

string subtractCommonLenDigitStrs(const string &s1, const string &s2)
{
    char digitDiff, borrow = 0;
    string diff = s1;

    for (int i = s1.size() - 1; i >= 0; i--) {
        digitDiff = to_num(s1[i]) - to_num(s2[i]) - borrow;
        if (digitDiff < 0) {
            digitDiff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        diff[i] = digit_to_char(digitDiff);
    }

    return diff;
}

// constructs
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
    if (negative == true and b2.negative == false) return false;
    if (negative == false and b2.negative == true) return true;
    if ((negative == b2.negative and negative == true) and (digits > b2.digits)) return false;
    if ((negative == b2.negative and negative == true) and (digits < b2.digits)) return true;
    if (digits <= b2.digits) return false;
    return true;
}

bool BigInt::operator<(const BigInt& b2) const{
    if (negative == true and b2.negative == false) return true;
    if (negative == false and b2.negative == true) return false;
    if ((negative == b2.negative and negative == true) and (digits > b2.digits)) return true;
    if ((negative == b2.negative and negative == false) and (digits < b2.digits)) return true;
    return false;
}

bool BigInt::operator>=(const BigInt& b2) const {
    if (negative == true and b2.negative == false) return false;
    if (negative == false and b2.negative == true) return true;
    if ((negative == b2.negative and negative == true) and (digits > b2.digits)) return false;
    if ((negative == b2.negative and negative == true) and (digits < b2.digits)) return true;
    if (digits < b2.digits) return false;
    return true;
}

bool BigInt::operator<=(const BigInt& b2) const {
    if (negative == true and b2.negative == false) return true;
    if (negative == false and b2.negative == true) return false;
    if ((negative == b2.negative and negative == true) and (digits < b2.digits)) return false;
    if ((negative == b2.negative and negative == true) and (digits > b2.digits)) return true;
    if (digits > b2.digits) return false;
    return true;
}

bool BigInt::operator!=(const BigInt& b2) const{
    return (((!negative) ? digits : "-" + digits) != ((!b2.negative) ? b2.digits : "-" + b2.digits));
}

BigInt BigInt::operator+(const BigInt& i2) const
{
if ((*this).digits.size() == i2.digits.size()) {
        string raw_sum = sumCommonLenDigitStrs((*this).digits, i2.digits);
        if (raw_sum[0] == 'c')
            return BigInt("1" + raw_sum.substr(2));
        return BigInt(raw_sum);
    }
        
    // Addends have different numbers of digits
    const BigInt *longer;
    const BigInt *shorter;
    int common, extra;
    string summedCommonDigits, leadingDigits;

    if ((*this).digits.size() > i2.digits.size()) {
        longer = this;
        shorter = &i2;
    } else {
        longer = &i2;
        shorter = this;
    };

    common = shorter->digits.size();
    extra = longer->digits.size() - common;
    summedCommonDigits = sumCommonLenDigitStrs(
       shorter->digits, 
       longer->digits.substr(extra)
    );
    leadingDigits = longer->digits.substr(0, extra);

    if (summedCommonDigits[0] != 'c')
        return BigInt(leadingDigits + summedCommonDigits);

    return BigInt(incrementDigitString(leadingDigits) +
                  summedCommonDigits.substr(2));
}

BigInt BigInt::operator-(const BigInt &i2) const
{
return (0);
}
