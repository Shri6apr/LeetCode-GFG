//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the minimum number of swaps required to sort the array.
    int minSwaps(vector<int>& arr) {
        // Code here
        // Code here
         int n = arr.size();
        
        vector<int> t = arr;
        sort(t.begin(),t.end());
        
        unordered_map<int,int> m;
        
        int cnt = 0;
        
        for(int i=0; i<n; i++)
        {
            
            m[arr[i]] = i;
            
        }
        
        for(int i=0; i<n; i++)
        {
            if(arr[i] != t[i])
            {

// find position here
                int pos = m[t[i]];
                m[arr[i]] = pos;
                swap(arr[i],arr[pos]);
                cnt++;
            }
        }
        
        
        return cnt;
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
        cout << obj.minSwaps(arr) << endl;
    }
}

// } Driver Code Ends