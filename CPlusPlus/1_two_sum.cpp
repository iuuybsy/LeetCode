#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, int> check;
        for (int i = 0; i != nums.size(); ++i) {
            if (check.count(nums[i])) {
                res.push_back(check[nums[i]]);
                res.push_back(i);
                return res;
            }
            check[target - nums[i]] = i;
        }
        return res;
    }
};