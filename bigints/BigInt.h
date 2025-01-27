#include <string>
using namespace std;

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


    bool operator==(const BigInt&) const;
    bool operator>(const BigInt&) const;
    bool operator<(const BigInt&) const;
    bool operator<=(const BigInt&) const;
    bool operator>=(const BigInt&) const;
    bool operator!=(const BigInt&) const;

    BigInt operator+(const BigInt&) const;
    BigInt operator*(const BigInt&) const;
};

