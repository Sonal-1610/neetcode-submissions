class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i=0,j=1;
        if(arr.size()<=1){
            return arr.size();
        }
        while(j<arr.size()){
            if(arr[i]!=arr[j]){
                i++;
                arr[i]=arr[j];
                j++;
            }
            else{
                j++;
            }
        }
        return i+1;
    }
};