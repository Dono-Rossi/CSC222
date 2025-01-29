#include <string>
using namespace std;

string increment_digit_string(const string &);
// string sum_common_len_digit_strs(const string&, const string&);
// string subtract_common_len_digit_strs(const string&, const string&);
// string addLeadingZeros(const std::string& string, int zeros);

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

