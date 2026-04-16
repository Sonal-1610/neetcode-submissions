class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for (int i = 0; i < s.size(); i++) {
        char ch = s[i];

        // Check if ch is alphabet or digit
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            // Convert uppercase to lowercase
            if (ch >= 'A' && ch <= 'Z') 
                ch = ch + 32;

            ans += ch;
        }
    }
       
        int i=0;
        int j=ans.size()-1;
        while(i<j){
            if(ans[i]!=ans[j]){
                return 0;
            }
            i++;
            j--;
        }
        return 1;
    }
};
