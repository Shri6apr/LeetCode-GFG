//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/


class Solution
{
public:
    int maxConsecutiveOnes(int N)
    {
        bitset<sizeof(int) * 8> binary(N);
        
        int maxOnes = 0;
        int currentOnes = 0;
        
        for (int i = 0; i < sizeof(int) * 8; i++) {
            if (binary[i] == 1) {
                currentOnes++;
                maxOnes = max(maxOnes, currentOnes);
            } else {
                currentOnes = 0;
            }
        }
        
        return maxOnes;
    }
};




//{ Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends