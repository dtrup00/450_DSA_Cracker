class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int maxArea = 0;
        while(i < j) {
            int currArea = min(height[i], height[j])*(j-i);
            maxArea = max(currArea, maxArea);
            if(height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxArea;
    }
};