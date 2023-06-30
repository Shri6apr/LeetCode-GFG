
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        
        int n = nums.size(); // Added missing variable declaration for 'n'
        
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                cnt0 = cnt0 + 1;
            }
            else if (nums[i] == 1) {
                cnt1 = cnt1 + 1;
            }
            else if (nums[i] == 2) { // Fixed incorrect variable name 'j' to 'i'
                cnt2 = cnt2 + 1;
            }
        }
        
        for (int i = 0; i < cnt0; i++) {
            nums[i] = 0; // Fixed incorrect array name 'a' to 'nums'
        }
        for (int i = cnt0; i < cnt0 + cnt1; i++) {
            nums[i] = 1;
        }
        for (int i = cnt0 + cnt1; i < cnt0 + cnt1 + cnt2; i++) {
            nums[i] = 2;
        }
    }
};
