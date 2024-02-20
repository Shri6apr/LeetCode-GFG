//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    int mod = 1e9+ 7 ;
    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        //base case 
        if(n==0) return {1};
        
        //make a vector one which store preveous (yehi apna recursive call hai) level and wanother for current leve
        vector<long long> prev =nthRowOfPascalTriangle(n-1);
        vector<long long > curr(n);
        curr[0] =1;
        curr[n-1] = 1;
        for(long long i = 1 ; i < n-1;  i++ ){
            curr[i] =(prev[i] + prev[i-1]) %mod;
        }
        return  curr;
    }
    vector<int> nrow(int n ){
        nthRowOfPascalTriangle(n);
    }
};


//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends