//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here
         vector<vector<int>> ans;
         sort(intervals.begin(),intervals.end());
         vector<int>temp=intervals[0];
         int n = intervals.size();
        //  int m = intervals[0].size();
         //{{1,3},
         //{2,4},
         //{6,8},
         //{9,10}}
         
         for(int i = 1 ; i < n ; i++){
            //  for(int j = 0 ; j < m ; j++){
                 if(temp[1] >= intervals[i][0]){
                     temp[1] = max(temp[1],intervals[i][1]);
                 }else{
                    ans.push_back(temp);
                    temp = intervals[i];
                 }
            //  }
         }
         
        // Add the last interval
        ans.push_back(temp);
         return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends