//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> twoRepeated(int arr[], int n) {
        vector<int> ans;
        for (int i = 0; i < n+2; i++) {
            if (arr[abs(arr[i])] > 0) {
                arr[abs(arr[i])] = -arr[abs(arr[i])]; // Mark as negative
            } else {
                ans.push_back(abs(arr[i])); // If already marked negative, it's repeated
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        vector<int> res;
        res = obj.twoRepeated(a, n);
        cout<<res[0]<<" "<<res[1]<<endl;
    }
    return 0;
}

// } Driver Code Ends