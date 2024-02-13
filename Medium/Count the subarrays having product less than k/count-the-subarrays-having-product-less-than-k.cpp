//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends




class Solution {
public:
    long long countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if (k <= 1)
            return 0;
        int head = 0 , tail = 0 ;
        long long ws = 0 ;
        long long prod = 1;
        
        for(head = 0 ; head < n ; head++){
            prod = prod*a[head];
           
            while(prod >= k && tail <= head ){
                prod = prod/a[tail];
                tail++;
            }ws = ws + (head-tail+1);
           
        }return ws;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends