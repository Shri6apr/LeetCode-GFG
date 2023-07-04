#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());  // Sort the vector

        for (int i = 0; i < nums.size(); i += 3) {
            if (i + 2 >= nums.size() || nums[i] != nums[i + 1]) {
                return nums[i];  // Found the single number
            }
        }

        // This line will never be reached if the input is valid
        return -1;
    }
};


