class Solution {
public:
    int solve(string a , string b ){
        vector<int> curr (a.length()+1,0);
        vector<int> next  (b.length()+1,0);
        for(int i = a.length()-1;i >=0;i--){
            for(int j = b.length()-1;j>=0;j--){
                int ans = 0;
                if(a[i]==b[j]){
                    ans =1+next[j+1];//match kiya to aage i.e next wale pointer ki value lo usme ek add karo to keep in mind ki pehle bhi ek matching string tha 
                }else{
                    ans = max(next[j],curr[j+1]);
                    
                }curr[j]=ans;
            }next = curr;
        }return next[0];
    }
    int longestPalindromeSubseq(string s) {
        // return solve(string s ,string s );
        string revstr = s;
        reverse(revstr.begin(),revstr.end());
        int ans = solve(s,revstr);
        return ans;
    }
};