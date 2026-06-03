class Solution {
public:
    bool checkInclusion(string s1, string s2) {
            vector<int> freq(26,0);
            int count=0;
            for(int i=0;i<s1.size();i++){
                freq[s1[i]-'a']++;
                count++;
            }
            int i=0,j=0;
            vector<int> freq1(26,0);
            while(j<s2.size()){
                freq1[s2[j]-'a']++;
                if(j-i+1==count){
                    if(freq==freq1){
                        return true;
                    }
                    freq1[s2[i]-'a']--;
                    i++;

                }
                j++;
            }
            return false;
    }
};
