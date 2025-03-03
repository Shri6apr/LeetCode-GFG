//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        // code here
        int left = 0  , right = 0 ,start= 0 ;
        multiset<int>m;
        int maxlen = 0; 
        int n = arr.size();
        while(right < n ){
            //insert
            m.insert(arr[right]);
            //if the difference is larger than x
            while(*m.rbegin() - *m.begin() > x){
                m.erase(m.find(arr[left]));
                left++;
            }
            
            if(right-left + 1 > maxlen){
                maxlen = right-left + 1;
                start= left;
                
                
            }
            right++;
            
            
        }
        return vector<int>(arr.begin()+start , arr.begin()+start+maxlen);
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
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.longestSubarray(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends