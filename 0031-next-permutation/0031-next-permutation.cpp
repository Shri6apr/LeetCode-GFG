class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int toSwap = -1;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                toSwap = i;
                break;
            }
        }

        if (toSwap != -1) {
            int inflectionPoint = -1;

            for (int i = n - 1; i > toSwap; i--) {
                if (nums[i] > nums[toSwap]) {
                    inflectionPoint = i;
                    break;
                }
            }

            swap(nums[toSwap], nums[inflectionPoint]);

            reverse(nums.begin() + toSwap + 1, nums.end());
        } else {
           
            reverse(nums.begin(), nums.end());
        }
    }
};
