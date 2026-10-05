class Solution {
public:
    bool canJump(vector<int>& nums) {
        int last=nums.size();
        int maxi=0;
        for(int i=0;i<last;i++){
            if(i>maxi){
                return false;
            }
            maxi=max(nums[i]+i,maxi);
        }
        return true;
        
    }
};