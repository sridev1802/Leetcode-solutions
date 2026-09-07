class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        int cur=0;
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){

                cur+=accounts[i][j];

            }
            if(max<cur){
                max=cur;
            }
            cur=0;
        }
        return max;
        
    }
};