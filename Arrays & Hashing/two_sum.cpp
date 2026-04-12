#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() == 2) {
            return {0, 1};
        }
        vector<int> ans;
        unordered_map<int, int> pairs;

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (pairs.count(nums[i]) != 0) {
                ans.push_back(pairs[nums[i]]);
                ans.push_back(i);
            } else {
                pairs[diff] = i;
            }
        }

        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 4, 5, 6};
    vector<int> out = solution.twoSum(nums, 11);
    for (int i : out) {
        cout << i << "\n";
    }
    return (0);
}