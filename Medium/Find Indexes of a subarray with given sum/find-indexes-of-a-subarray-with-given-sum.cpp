//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
     vector<int> subarraySum(vector<int> arr, int n, long long s) {
     vector<int> ans;
     long long cursum = 0;
     int j = 0;
     if (s == 0) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                return {i + 1, i + 1}; // Subarray of length 1 with value 0
            }
        }
        return {-1}; // No subarray found with sum 0
      }
     for (int i = 0; i < n; i++) {
        cursum += arr[i];
        while (cursum > s) {
            cursum -= arr[j];
            j++;
        }
        if (cursum == s) {
            ans.push_back(j + 1);
            ans.push_back(i + 1);
            return ans;
        }
      }
     ans.push_back(-1);
     return ans;
   }
    
};



//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends