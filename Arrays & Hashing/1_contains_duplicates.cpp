#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int len = nums.size();
        set<int> dict(nums.begin(), nums.end());
        return (len != dict.size());
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 4, 4};
    cout << "Hello world!" << "\n";
    cout << solution.hasDuplicate(nums) << "\n";
    return (0);
}