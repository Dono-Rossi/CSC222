#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include "cards.h"
using namespace std;

TEST_CASE("Test can create and render Cards") {
    Card c1(DIAMONDS, JACK);
    CHECK(c1.to_string() == "Jack of Diamonds");
    Card c2;
    CHECK(c2.to_string() == "Joker");
    Card c3(HEARTS, QUEEN);
    CHECK(c3.to_string() == "Queen of Hearts");
    Card c4(SPADES, SEVEN);
    CHECK(c4.to_string() == "7 of Spades");
}

