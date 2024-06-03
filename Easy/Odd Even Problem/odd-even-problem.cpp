//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        int x = 0,y = 0;
        
        unordered_map<char,int> mp;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        
        for(auto it: mp){
            int pos = it.first-'a'+1;
            
            if(pos&1 && it.second&1){
                x++;
            }
            else if(!(pos&1) && !(it.second&1)){
                y++;
            }
        }
        
        return ((x+y)&1) ? "ODD" : "EVEN";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends