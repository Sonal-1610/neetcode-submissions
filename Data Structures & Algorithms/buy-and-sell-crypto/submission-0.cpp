class Solution {
public:
    int maxProfit(vector<int>& nums) {
     int i=0,j=0;
     int profit=0,maxprofit=0;
     while(j<nums.size()){
        profit=nums[j]-nums[i];
        if(profit<0){
            i=j;
            j++;
        }
        else{
            maxprofit=max(maxprofit,profit);
            j++;
        }
     }
     return maxprofit;
    }
};
