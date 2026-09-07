class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int left=0,right=0;
            for(int j=0;j<nums.size();j++){
                if(j<i){
                    left+=nums[j];
                }
                if(j>i){
                    right+=nums[j];
                }
                
            }
            if(left==right){
                return i;
            }
            
        }
        return -1;
    }
};