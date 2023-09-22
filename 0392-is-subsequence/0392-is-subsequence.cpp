class Solution {
public:
    
    bool isSubsequence(string s, string t) {
        int sl = s.length();
        int tl = t.length();
        // for(int i = 0 ; i <sl-1; i++){
        //     for(int j = 0 ;j<tl-1;j++){
        //         if(s[i]==t[j]){
        //             i++;
        //             j++;
        //             return true;
        //         }else if{
        //             j++;
        //             return true;
        //         }else if (j==tl || s[i] != t[j]){
        //             return false;
        //         }
        //     }
        //}
        int i = 0 ;
        int j = 0;
        if(sl<=tl){
            while( i< sl && j <tl){
                if(s[i]==t[j]){
                    i++;
                    
                    
                }j++;
            }return i==sl ;
        }else{
            while( i< sl && j <tl){
                if(s[i]==t[j]){
                    j++;
                    
                    
                }i++;
            }return i==sl ;
        }
    }
        
};