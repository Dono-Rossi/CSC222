
#include <iostream>
#include <string>
using namespace std;

struct Card
{
    int suit, rank;

    Card();
    Card(int s, int r);

    string toString() const;
    bool operator==(const Card& c2) const;
};
