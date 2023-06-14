//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
public:
    vector<int> subarraySum(vector<int>& arr, int n, long long s) {
        int start = 0;
        int end = 0;
        long long currsum = 0;

        while (end < n) {
            currsum += arr[end];

            while (currsum > s && start < end) {
                currsum -= arr[start];
                start++;
            }

            if (currsum == s) {
                return {start + 1, end + 1};
            }

            end++;
        }

        return {-1};
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