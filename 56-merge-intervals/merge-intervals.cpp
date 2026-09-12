class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;

        if(intervals.size()==0){
            return ans;
        }
        sort(intervals.begin(),intervals.end());
        
        for(vector<int> interval : intervals){
            if(ans.size()==0 || interval[0]>ans.back()[1]){
                ans.push_back(interval);

            }
            else{
                ans.back()[1]=max(ans.back()[1],interval[1]);
            }
        }
        return ans;

    }
};