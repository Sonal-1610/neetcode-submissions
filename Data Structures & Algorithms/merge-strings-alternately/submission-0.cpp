class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int n=word1.length();
        int j=0;
        int m=word2.length();
        string w3;
        while(i<n&&j<m){
            w3+=word1[i];
            i++; 
            w3+=word2[j];
            j++;

        }
        while(i<n){
            w3+=word1[i];
            i++; 
        }
        while(j<m){
            w3+=word2[j];
            j++; 
        }
        return w3;
    }
};