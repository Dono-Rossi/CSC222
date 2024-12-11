#include <string>
using namespace std;
struct Time {
    int hour, minute;
    double second;
   
    void print();
    void increment(double secs);

    // functions
    string theString();
};
