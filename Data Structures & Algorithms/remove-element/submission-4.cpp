class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            if(nums[0]==val){
                return 0;
            }
            else{
                return 1;
            }
        }
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]!=val){
                i++;
            }
            else if(nums[j]==val){
                j--;
            }
            else{
                swap(nums[i],nums[j]);
                i++;j--;
            }
        }
        int k=0;
      for(k=0;k<nums.size();k++){
        if(nums[k]==val){
            return k;
        }
      }
      return k;
    }
};