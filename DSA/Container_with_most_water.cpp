class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxW=0;
        int l= 0;
        int r=height.size()-1;
        while(l<r){
            int wd=l-r;
            int ht=min(height[l],height[r]);
            int area=wd*ht;
            maxW=max(maxW,area);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxW;
    }
};
