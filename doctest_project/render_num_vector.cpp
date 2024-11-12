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
