class Solution {
public:
    
    int ans(string& a , string& b,int i ,int j , vector<vector<int>>&dp               ){
        //base case
        if(i==a.length())
            return 0;
        if(j==b.length())
            return 0;
        if( dp[i][j] != -1)
            return dp[i][j];
        int lcs = 0;
        if(a[i]==b[j]){
            lcs=1+ans(a,b,i+1,j+1,dp);
        }else{
            lcs=max(ans(a,b,i+1,j,dp),ans(a,b,i,j+1 ,dp));
        }return dp[i][j] = lcs;
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.length() ,vector<int> (text2.length(), -1)   );
        return ans(text1,text2,0,0,dp);
    }
};