#include <string>
using namespace std;

string incrementDigitString(const string &);
string sumCommonLenDigitStrs(const string&, const string&);
string subtractCommonLenDigitStrs(const string&, const string&);
string addLeadingZeros(const std::string& string, int zeros);

class BigInt
{
    bool negative;
    string digits;

    public:
    // constructors
    BigInt();
    BigInt(int);
    BigInt(string);
    
    bool is_negative() const;
    // member functions
    string to_string() const;

    // operators - constructors
    bool operator==(const BigInt&) const;
    bool operator>(const BigInt&) const;
    bool operator<(const BigInt&) const;
    bool operator<=(const BigInt&) const;
    bool operator>=(const BigInt&) const;
    bool operator!=(const BigInt&) const;

    BigInt operator+(const BigInt&) const;
    BigInt operator-(const BigInt&) const;
    BigInt operator*(const BigInt&) const;
};

