class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            //using array
            vector<int> arr(26,0);
            for(int j=0;j<temp.length();j++){
               arr[temp[j]-'a']++;
            }
            string key;
            for(int j=0;j<26;j++){
               
                    key += to_string(arr[j]) + "#";
                   
            }
            mp[key].push_back(temp);
        }
        for(auto it: mp){
            
            ans.push_back(it.second);
        }
        
        return ans;
    }
};
