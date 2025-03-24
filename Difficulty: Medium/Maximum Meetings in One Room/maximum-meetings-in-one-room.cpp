//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++
class Solution {
public:
    vector<int> maxMeetings(int N, vector<int> &S, vector<int> &F) {
        // Step 1: Create a vector of pairs to store finish time and corresponding start time
        vector<pair<pair<int,int>,int>>v;
        for(int i = 0; i < N; i++) {
            v.push_back({{F[i], S[i]},i+1}); // Corrected: Use curly braces for pair initialization
        }

        // Step 2: Sort the vector based on finish time
        sort(v.begin(), v.end());

        // Step 3: Select the first meeting (the one with the earliest finish time)
        int lastFinishTime = v[0].first.first; // Corrected: Use .first to access finish time
        vector<int> ans;
        ans.push_back(v[0].second); // Store the start time of the selected meeting

        // Step 4: Iterate through the sorted vector and select non-overlapping meetings
        for (int i = 1; i < N; i++) {
            if (v[i].first.second > lastFinishTime) { // Corrected: Check if the current meeting starts after the last one ends
                lastFinishTime = v[i].first.first; // Update the last finish time
                ans.push_back(v[i].second); // Store the start time of the selected meeting
            }
        }

        sort(ans.begin(), ans.end());


        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends