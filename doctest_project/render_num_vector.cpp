#include <string>
#include <vector>
#include <sstream>
using namespace std;

string render_num_vector(const vector<int>& nums) {
    ostringstream oss;
    for (size_t i = 0; i < nums.size(); ++i) {
        oss << nums[i];
        if (i < nums.size() - 1) {
            oss << " ";
        }
    }
    return oss.str();
}

int num_vector_sum(const vector<int>& nums){
    int sum = 0;
    for (size_t i = 0; i < nums.size(); ++i){
         sum += nums[i];
    }
    return sum;
}

int num_vector_product(const vector<int>& nums){
    int product = 1;
    for (size_t i = 0; i < nums.size(); ++i){
         product *= nums[i];
    }

    return product;
}
