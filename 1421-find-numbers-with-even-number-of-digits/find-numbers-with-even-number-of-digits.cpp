class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int countr=0;
        for(auto i : nums){
            while(i>0){
                count++;
                i/=10;

            }
            if(count%2==0){
                countr++;
            }
            count=0;
        }
        return countr;
        
    }
};