#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
    void print();
};

void Time::print() {
    Time time = *this;
    cout << hour << ":" << minute << ":" << second << endl;
}


int main() {
    Time current_time = {9, 14, 30.0};
    current_time.print();
}

