class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0, j=0;
        if(word1.size() == 0) return word2;
        if(word2.size() == 0) return word1;

        string word3 = "";
        while(i<word1.size() && j<word2.size()) {
            word3 += word1[i++];
            word3 += word2[j++];
        }
        if(i<word1.size()) {
            while(i<word1.size()) {
                word3 += word1[i++];
            }
        }
        else {
            while(j<word2.size()) {
                word3 += word2[j++];
            }
        }
        return word3;
    }
};