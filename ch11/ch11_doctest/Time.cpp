#include <iostream>
#include <string>
#include "Time.h"
using namespace std;

double second, minute, hour;
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

string Time::theString(){
    increment(t);
    return print();
}
