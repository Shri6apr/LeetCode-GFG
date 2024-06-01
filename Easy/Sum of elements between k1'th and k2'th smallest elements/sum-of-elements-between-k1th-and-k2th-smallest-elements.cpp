//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        int sum = 0 ;
        //[4,8,10,12,14,20,22]
        //[1,2, 3, 4, 5, 6, 7]
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i = 0 ; i < N ;i++){
            pq.push(A[i]);
            
            
        }
        while(K1 >0){
            // sum +=pq.top();
            pq.pop();
            K1--;
            K2--;
            
        }
        while(K2 >1){
            sum+=pq.top();
            pq.pop();
            K2--;
        }
        return sum;
        
        
    }
};

//{ Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}

// } Driver Code Ends