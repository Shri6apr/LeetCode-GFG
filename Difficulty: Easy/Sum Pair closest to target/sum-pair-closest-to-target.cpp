//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int t) {
        // code here
        sort(arr.begin(),arr.end());
        // [5,10,20,30]
        int s = 0 , e = arr.size()-1;
        vector<int>ans;
        int mini=INT_MAX;
        while(s<e){
            int pairsum = arr[s]+arr[e];
            int diff = abs(t - pairsum);
            if(diff < mini ){
                mini = min(mini,diff);
                ans={arr[s],arr[e]};
            }
            if(pairsum < t){
                s++;
            }
            else if(pairsum >t ){
                e--;
            }else{
                return ans;
            }
            
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
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends