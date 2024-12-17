#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include "Cards.h"
using namespace std;







vector<Card> build_deck()
{
    vector<Card> deck(52);
    int i = 0;
    for (Suit suit = CLUBS; suit <= SPADES; suit = Suit(suit+1)) {
        for (Rank rank = TWO; rank <= ACE; rank = Rank(rank+1)) {
            deck[i].suit = suit;
            deck[i].rank = rank;
            i++;
        }
    }
    return deck;
}

switch(suit) {
    case CLUBS: return "Clubs";
    case DIAMONDS: return "Diamonds";
    case HEARTS: return "Hearts";
    case SPADES: return "Spades";
    default: return "Not a valid suit";
}

