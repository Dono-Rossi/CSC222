#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../doctest.h"
#include "Wrench.h"
using namespace std;

TEST_CASE("Test can create and render Wrench") {
    Wrench wrench = Wrench();
    CHECK(wrench.to_string() == "This is wrench");
}

TEST_CASE("Testing Wrench") {
    Wrench wrench = Wrench();
    CHECK(wrench.material == "Steel");
    CHECK(wrench.size == 0.5);
    CHECK(wrench.length == 6);

    wrench.adjustSize(0.2);
    CHECK(wrench.size == 0.5);

    Wrench wrench2 = Wrench(true);

    CHECK(wrench2.size == 0.5);
    wrench2.adjustSize(0.2);
    CHECK(wrench2.size == 0.2);

    CHECK(wrench2.canWrench(0.3) == false);
    CHECK(wrench2.canWrench(0.2) == true);

    CHECK(wrench.MechanicalAdvantage() == 12);
    CHECK(wrench.MechanicalAdvantage() != 2);

    Wrench wrench3 = Wrench(3, 0.2, "Wood");
    CHECK(wrench3.length == 3);
    CHECK(wrench3.size == 0.2);
    CHECK(wrench3.material == "Wood");
}