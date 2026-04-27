#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start = 0;
        int end = heights.size() - 1;
        
        int max_water = -1;

        while (start < end) {
            int length = end - start;
            int height = min(heights[start], heights[end]);

            int temp_water = length * height;
            if (temp_water > max_water) {
                max_water = temp_water;
            }

            if (heights[start] > heights[end]) {
                start++;
            } else {
                end--;
            }
        }

        return (max_water);
    }
};

int main() {
    Solution solution;
    vector<int> heights = {2, 2, 2};
    cout << solution.maxArea(heights) << "\n";
    return (0);
}