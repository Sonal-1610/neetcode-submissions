class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        vector<int> freq(26);
        for(int i=0;i<s.size();i++){
            char c=s[i];
            freq[c-'a']++;
        }
        for(int i=0;i<t.size();i++){
            
            char c=t[i];
            freq[c-'a']--;
        }
        for(auto it: freq){
            if(it>0){
                return false;
            }
        }
return true;
    }
};
