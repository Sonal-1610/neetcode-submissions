class Solution {
   public:
    bool pali(string &s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return 0;
            }
            i++;
            j--;
        }
        return 1;
    }
    bool validPalindrome(string s) {
        int n = s.size();
        int count = 0;
        int i = 0;
        int j = n - 1;
        while (i < j) {
            while (i < j && !isalnum(s[i])) {
                i++;
            }
            while (i < j && !isalnum(s[j])) {
                j--;
            }
            if (tolower(s[i]) != tolower(s[j])) {
               if(pali(s,i,j-1) ||pali(s,i+1,j) ){
                return true;
               }
               else{
                return false;
               }
            }
            i++;
            j--;
        }
        return true;
    }
};