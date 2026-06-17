class Solution {
public:
    int trap(vector<int>& height) {
        int i=0,j=height.size()-1;
        int l_max=0,r_max=0,total=0;
        while(i<j){
           if(height[i]<=height[j]){
            if(l_max<=height[i]){
                l_max=height[i];
            }
            else{
                total+=l_max-height[i];
            }
            i++;
           }
           else{
            if(r_max<height[j]){
                r_max=height[j];
            }
            else{
                total+=r_max-height[j];
            }
            j--;
           }
        }
        return total;
    }
};
