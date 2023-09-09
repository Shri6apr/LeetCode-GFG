#include <vector>
#include <algorithm> // for std::min

class Solution {
public:
    int trap(std::vector<int>& height) {
        int n = height.size();
        if (n <= 2) {
            return 0; // Cannot trap water with less than 3 bars.
        }

        int left_max = 0;
        int right_max = 0;
        int left = 0;
        int right = n - 1;
        int water = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] > left_max) {
                    left_max = height[left];
                } else {
                    water += left_max - height[left];
                }
                left++;
            } else {
                if (height[right] > right_max) {
                    right_max = height[right];
                } else {
                    water += right_max - height[right];
                }
                right--;
            }
        }

        return water;
    }
};
