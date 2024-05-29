//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        // code here
        int res = 0;
        int len = 0;
        stack<int> s ;
        s.push(-1);
        for(int i = 0 ; i < S.length();i++){
            if(S[i] == '('){
                s.push(i);
            }else if (S[i] == ')'){
                s.pop();
                if(!s.empty()){
                    len = i - s.top();
                }else{
                    s.push(i);
                }
            }res = max(res,len);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends