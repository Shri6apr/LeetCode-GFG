//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int maxWeightCell(vector<int> &Edge) {
        // code here
        {
      unordered_map<int, int> m ;
      for(int i = 0; i < Edge.size(); i++)
      {
          m[Edge[i]] += i ;
      }
      int mx = INT_MIN ;
      int ans = 0 ;
      for(auto& i : m)
      {
          if(i.second > mx)
          {
              mx = i.second ;
              ans = i.first ;
          }
      }
      return ans == -1 ? 0 : ans ;
  }
    }
};

//{ Driver Code Starts.
int main() {
    string str;
    getline(cin, str);
    int tc = stoi(str);
    while (tc--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> exits;
        int num;
        while (ss >> num) {
            exits.push_back(num);
        }
        Solution sln;
        cout << sln.maxWeightCell(exits) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends