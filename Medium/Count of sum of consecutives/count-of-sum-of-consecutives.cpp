//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int getCount(int N) {
        // code here
        
        long int count = 0 ;
        for(long int  K = 1; K* (K+1)<2*N;K++){
            double a =  (1.0*N -(K*(K+1))/2)/(K+1);
            if(a-(int)a==0.0){
                count++;
            }
        }return count;
      
       
       
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.getCount(N) << endl;
    }
    return 0;
}
// } Driver Code Ends