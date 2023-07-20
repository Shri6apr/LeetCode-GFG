class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--) {
            int last = digits[i];
            int sum = last + carry;
            carry = sum / 10;
            digits[i] = sum % 10;
            if (carry == 0) {
                break;
            }
        }
        
        // If there's still a carry after the loop, we need to add a new digit.
        if (carry != 0) {
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};
