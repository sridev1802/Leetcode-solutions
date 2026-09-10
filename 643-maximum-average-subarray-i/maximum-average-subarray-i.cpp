class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
            int n=nums.size();
            int l=0,r=k,sum=0;
            for(int i =0;i<k;i++){
                sum+=nums[i];
            }
            int maxi=sum;
            while(r<n){
                sum-=nums[l];
                sum+=nums[r];
                l++;r++;
                maxi=max(sum,maxi);
            }

        return (double)maxi/k;
    }
};