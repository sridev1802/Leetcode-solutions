class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxah=0;
        int left=0;
        int right= height.size()-1;
        while(left<right){
            int w=right-left;
            int h=min(height[right],height[left]);
            int carea=w*h;
            maxah=max(carea,maxah);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }

        }
        
        return maxah;
    }
};