#include <string>
#include <vector>
#include <sstream>
using namespace std;

string render_num_vector(const vector<int>& nums) {
    ostringstream oss;
    for (int i = 0; i < nums.size(); ++i) {
        oss << nums[i];
        if (i < nums.size() - 1) {
            oss << " ";
        }
    }
    return oss.str();
}

int num_vector_sum(const vector<int>& nums){
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i){
         sum += nums[i];
    }
    return sum;
}

int num_vector_product(const vector<int>& nums){
    int product = 1;
    for (int i = 0; i < nums.size(); ++i){
         product *= nums[i];
    }

    return product;
}

string only_evens(const vector<int>& nums) {
    string evens = "";
    for (int i = 0; i < nums.size(); ++i){
         if (nums[i] % 2 == 0){
             string num = to_string(nums[i]);
             evens.append(num);
                  if (i != nums.size() - 1){
                      evens.append(" ");
     }
}
}
     return evens;
} 

string only_odd(const vector<int>& nums) {
    string odd = "";
    for (int i = 0; i < nums.size(); ++i){
         if (nums[i] % 2 == 1){
             string num = to_string(nums[i]);
             odd.append(num);
                  if (i != nums.size() - 1){
                      odd.append(" ");
}
}
         if( i == nums.size() - 1){
             odd.pop_back();
}
}

    return odd;
}

string nums_between(const vector<int>& nums){
    string between = "";
    for (int i = 0; i < nums.size(); ++i){
        if (nums[i] >= 10 & nums[i] <= 20){
            string num = to_string(nums[i]);
            between.append(num);
                if (i != nums.size() - 1){
                      between.append(" ");
            }
        }
        if( i == nums.size() - 1){
             between.pop_back();} 
    }
    return between;
}
