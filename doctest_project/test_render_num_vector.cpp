
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "render_num_utils.h"
using namespace std;

TEST_CASE("Testing render_num_vector") {
    vector<int> nums = {1, 3, 7};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7";
    CHECK(numstr == expected);
}

TEST_CASE("Testing num_vector_sum") {
    vector<int> nums = {1, 3, 7};
    int addint = num_vector_sum(nums);
    int expected = 11;
    CHECK(addint == expected);
}

TEST_CASE("Testing num_vector_product") {
    vector<int> nums = {2, 3, 7};
    int productint = num_vector_product(nums);
    int expected = 42;
    CHECK(productint == expected);
}

TEST_CASE("Testing only_evens") {
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    string evens = only_evens(nums);
    string expected = "2 4 6 8 12 14 22";
    CHECK(evens == expected);
}

TEST_CASE("Testing only_odd") {
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    string odd = only_odd(nums);
    string expected = "1 3 7 11 27";
    CHECK(odd == expected);
}

TEST_CASE("Testing nums_between function") {
    vector<int> nums = {11, 2, 13, 4, 10, 26, 7, 88, 19, 20, 14, 5, 32};
    string between = nums_between(nums);
    string expected = "11 13 10 19 20 14";
    CHECK(between == expected);
}


