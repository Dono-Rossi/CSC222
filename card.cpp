#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include "Card.h"
using namespace std;

Card::Card() {
    suit = 0; rank = 0;
}

vector<string> suit_strings = {"None", "Clubs", "Diamonds",
                               "Hearts", "Spades"};

string Card::to_string() const
{
    vector<string> suit_strings = {"None", "Clubs", "Diamonds",
                                   "Hearts", "Spades"};
    vector<string> rank_strings = {"Joker", "2", "3", "4", "5", "6", "7",
                                   "8", "9", "10", "Jack", "Queen", "King",
                                   "Ace"};

    if (rank == 0) return rank_strings[rank];
    return rank_strings[rank] + " of " + suit_strings[suit];
}

bool Card::operator==(const Card& c2) const
{
    return (rank == c2.rank && suit == c2.suit);
}
