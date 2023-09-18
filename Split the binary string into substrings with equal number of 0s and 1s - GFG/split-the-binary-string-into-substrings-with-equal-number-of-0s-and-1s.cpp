//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int count0 = 0; 
        int count1 = 0;
        int count01=0;
        int j = 0 ;
        for(int i = 0; i < str.length();i++){
            if(str[i]=='0'){
                count0++;
                
                // goto jump;
            }else if (str[i]=='1'){
                count1++;
                // goto jump;
            }
            
            if(count0==count1){
                count01++;
                j=i+1;
                
            }
           
            
        }
        if (j == str.length() && count01 == '0') { // Check if the loop reached the end of the string and count01 is still 0
            return -1;
        }
         if (count0 != count1) {
            return -1;
        }
        
        return count01;
    
        
    }
    
      
     
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends