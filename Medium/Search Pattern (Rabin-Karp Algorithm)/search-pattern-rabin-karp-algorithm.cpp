//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    vector<int> search(string pattern, string text) {
        vector<int> result;
        
        int q = 128; // Modulus for hash computation
        int x = 101; // Prime multiplier for hash computation

        int n = pattern.length();
        int m = text.length();

        // Compute x^(n-1) % q
        int x_new = 1;
        for (int i = 0; i < n - 1; ++i) {
            x_new = (x_new * x) % q;
        }

        // Calculate hash values for the pattern and the first substring of text
        int hash_p = 0;
        int hash_t = 0;
        for (int i = 0; i < n; ++i) {
            hash_p = (hash_p * x + pattern[i]) % q;
            hash_t = (hash_t * x + text[i]) % q;
        }

        // Slide the pattern window over the text
        for (int i = 0; i <= m - n; ++i) {
            // Check if hash values match
            if (hash_p == hash_t) {
                bool match = true;
                // Perform character-by-character comparison if hash values match
                for (int j = 0; j < n; j++) {
                    if (text[i + j] != pattern[j]) {
                        match = false;
                        break;
                    }
                }
                // If all characters match, add the index to the result
                if (match) {
                    result.push_back(i + 1); // Adjust index by adding 1
                }
            }
            // Update hash value for the next substring
            if (i < m - n) {
                hash_t = (x * (hash_t - text[i] * x_new) + text[i + n]) % q;
                if (hash_t < 0) hash_t += q; // Ensure positive hash value
            }
        }
        return result;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends