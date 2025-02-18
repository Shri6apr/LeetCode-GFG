//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minimumStep(int n){
        //complete the function here
        if(n<=1) return 0;
        if(n==2) return 1;
        int rem = n % 3;
        int res = rem + minimumStep(n/3) + 1;
        return res;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.minimumStep(n) << endl;
    
    
cout << "~" << "\n";
}
    return 0; 
} 


// } Driver Code Ends