//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
public:
    long long pairAndSum(int n, long long arr[]) {
        long long sum = 0;
        for (int bit = 31; bit >= 0; bit--) { // Iterate from MSB to LSB
            long long countSetBits = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] & (1LL << bit)) { // Check if bit is set
                    countSetBits++;
                }
            }
            sum += (1LL << bit) * countSetBits * (countSetBits - 1) / 2; // Calculate contribution to sum
        }
        return sum;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        long long Arr[N];
        for (int i = 0; i < N; i++) {
            cin >> Arr[i];
        }
        Solution ob;
        cout << ob.pairAndSum(N, Arr) << endl;
    }
    return 0;
}
// } Driver Code Ends