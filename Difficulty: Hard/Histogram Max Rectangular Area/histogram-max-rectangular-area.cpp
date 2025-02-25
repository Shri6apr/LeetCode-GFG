//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        vector<int> prev(n, -1), next(n, n);
        
        stack<int> st;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                next[st.top()] = i;
                st.pop();
            }
            if(!st.empty()) {
                prev[i] = st.top();
            }
            st.push(i);
        }
        
        int ans = 0;
        for(int i=0;i<n;i++) {
            ans = max(ans, (next[i]-prev[i]-1)*arr[i]);
        }
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.getMaxArea(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends