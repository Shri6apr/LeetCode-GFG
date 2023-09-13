//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++


    // int getMinDiff(int arr[], int n, int k)


class Solution {
public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr + n);

        int result = arr[n - 1] - arr[0];
        int smallest = arr[0]+k;
        int largest = arr[n-1]-k;
        int min_height ;
        int  max_height ;

        for (int i = 0; i < n - 1; i++) {
            int min_height = min(smallest, arr[i + 1] - k);
            int max_height = max(largest, arr[i] + k);
            if(min_height<0) continue;
            result = min(result, max_height - min_height);
        }

        return result;
    }


   


   

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends