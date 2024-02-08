//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



    
   int longestSubstrDistinctChars(string S) {
    unordered_map<char, int> mp;
    int tail = 0;
    int ws = 0;
    int head=0;
    for ( head = 0; head < S.size(); ++head) {
        while (mp[S[head]] > 0) {
            ws = max(ws, head - tail);
            mp[S[tail]]--;
            tail++;
        }
        mp[S[head]]++;
    }
    return max(ws, head- tail);
}

    
    
