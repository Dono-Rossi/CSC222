#include <string>
using namespace std;
struct Time {
    // instance variables
    int hour, minute;
    double second;

    // constructors
    Time(int);
    Time(int, int, double);
    Time(double);

    // modifiers
    void increment(double);

    // functions
    string theString();
};
