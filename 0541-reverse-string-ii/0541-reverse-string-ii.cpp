class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
        for (int start = 0; start < n; start += 2 * k) {
            int end = min(start + k, n);
            reverse(s.begin() + start, s.begin() + end);
        }
        return s;
    }
};
