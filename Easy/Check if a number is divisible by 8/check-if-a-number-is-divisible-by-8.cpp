//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int DivisibleByEight(string s){
        //code here
        string temp = "";
        int count = 0 ; 
        
        if(s.length() < 4) {
            int tempi = stoi(s);
            if((tempi % 8) == 0) 
                return 1;
            else 
                return -1;
        }

        // Extract the last three digits of the number
        string lastThreeDigits = s.substr(s.length() - 3);

        // Convert the last three digits to an integer
        int lastThreeDigitsInt = stoi(lastThreeDigits);

        // Check if the last three digits are divisible by 8
        if (lastThreeDigitsInt % 8 == 0)
            return 1;
        else
            return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends