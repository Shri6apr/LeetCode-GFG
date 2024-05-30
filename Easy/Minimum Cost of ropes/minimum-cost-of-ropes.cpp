//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        long cost = 0 ;
        long tcost = 0;
        priority_queue<long,vector<long>,greater<long>>pq;
        
        for(int i = 0 ; i < n ; i++){
            pq.push(arr[i]);
        }
        //at last when there would be only one elemet that would signify the end of the calculation
        //[4,3,2,6] -> pq -> [2,3,4,6]
        //[4,6] -> sum = [2+3] ->push in stack
        //[4,5,6]
        //[6] -> sum = 4+5 = 9 ->push in stack
        //[6,9]
        //[] sum = 15
        //[15]
        while(pq.size() >= 2){
            long first = pq.top();
            //pop it out to select second no. and also to have the sum beign stored in it 
            pq.pop();
            long sec = pq.top();
            pq.pop();
            cost = first + sec;
            pq.push(cost);
            tcost +=cost; 
        }return tcost;
        
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends