
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
