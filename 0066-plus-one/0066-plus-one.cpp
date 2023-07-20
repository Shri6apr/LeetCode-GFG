class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--) {
            int last = digits[i];
            int sum = last + carry;
            carry = sum / 10;
            digits[i] = sum % 10;//update kardo
            if (carry == 0) {
                break;
            }
        }
        
       
        if (carry != 0) {
            digits.insert(digits.begin(), carry);//yeh wala last mein add 
        }

        return digits;
    }
};
