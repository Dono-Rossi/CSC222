#include <iostream>
#include <string>
using namespace std;

struct Card
{
    Rank rank;
    Suit suit;

    Card(Suit s, Rank r);
}
enum Suit {NONE, CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {JOKER, TWO=2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
           NINE, TEN, JACK, QUEEN, KING, ACE};
