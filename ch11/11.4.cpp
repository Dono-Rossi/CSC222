#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
   
    void print();
    void increment(double secs);
};

void Time::increment(double secs)
{
    second += secs;

    while (second >= 60.0) {
        second -= 60.0;
        minute += 1;
    }
    while (minute >= 60) {
        minute -= 60;
        hour += 1;
    }
}

void Time::print() {
    cout << hour << ":" << minute << ":" << second << endl;
}


int main() {
    Time current_time = {9, 14, 30.0};
    current_time.increment(500.0);
    current_time.print();
    
}

