class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        sort(strs.begin(), strs.end());  // Sort the array of strings alphabetically

        string first_str = strs[0];
        string last_str = strs.back();

        string common_prefix = "";
        for (int i = 0; i < first_str.length(); ++i) {
            if (i < last_str.length() && first_str[i] == last_str[i]) {
                common_prefix += first_str[i];
            } else {
                break;
            }
        }

        return common_prefix;
    }
};