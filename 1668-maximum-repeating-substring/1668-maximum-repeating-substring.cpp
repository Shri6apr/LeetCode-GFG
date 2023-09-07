class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int count = 0 ;
        string wordtofind = word;
        while(sequence.find(wordtofind) != string::npos) {
            count++;
            wordtofind += word; // for  no repetetion
        }
        return count;
    }
};
