class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        vector<int> ans(2*n);
        for(int i=0;i<n;i++){
           ans[j]=nums[i];
           ans[j+n]=nums[i];
           j++;
        }
        
        return ans;
    }
};