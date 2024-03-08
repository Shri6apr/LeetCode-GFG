//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    bool sameFreq(string s) {
        int cnt[26] = {0}; // Initialize an array to store frequency of each character
        for(int i = 0; i < s.length(); i++){
            cnt[s[i]-'a']++;
        }
        sort(cnt, cnt + 26); // Sort the frequency array
        // Find the minimum and maximum frequency
        int min = 0, max = cnt[25];
        for(int i = 0; i < 26; i++){
            if(cnt[i] == 0) continue;
            else{
                min = cnt[i];
                break;
            }
        }
        int mincnt = 0, maxcnt = 0;
        for(int i = 0; i < 26; i++){
            if(cnt[i] == 0) continue;
            if(min != cnt[i]) mincnt++;
            if(max != cnt[i]) maxcnt++;
        }
        if(mincnt == 0 || maxcnt == 0) return true;
        if(mincnt == 1){
            if(max == min + 1) return true;
        }
        if(maxcnt == 1){
            if(min == 1) return true;
        }
        return false;
    }
};



//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends