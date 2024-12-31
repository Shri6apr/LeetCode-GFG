//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int n= arr.size();

        if(n==0) return 0;

       

        int maxCount=0;

        int count=0;

        int asc[100000] ={0};

        for(int i=0;i<n;i++){

            asc[arr[i]]=1;

        }

        for(int i=0;i<100000;i++){

            if(asc[i]==1){

                count++;

                maxCount=max(maxCount,count);

            }

            else{

                count=0;

            }

        }

        return maxCount;

    
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends