
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
