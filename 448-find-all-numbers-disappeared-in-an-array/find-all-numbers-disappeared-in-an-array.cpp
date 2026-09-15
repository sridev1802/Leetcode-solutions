class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            int ci=nums[i]-1;
            if(nums[ci]!=nums[i]){
                swap(nums[ci],nums[i]);
            }
            else{
                i++;
            }
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1!=i){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};