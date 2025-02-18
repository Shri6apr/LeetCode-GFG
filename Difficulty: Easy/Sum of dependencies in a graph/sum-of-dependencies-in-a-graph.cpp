//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    // Function to calculate the sum of dependencies.
    int sumOfDependencies(int V, vector<vector<int>> &edges) {
        // code here
                return edges.size();

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> edges(M, vector<int>(2));
        for (int i = 0; i < M; i++) {
            cin >> x >> y;
            edges[i][0] = x;
            edges[i][1] = y;
        }
        Solution ob;
        cout << ob.sumOfDependencies(N, edges) << "\n";
        cout << "~" << endl;
    }
}
// } Driver Code Ends