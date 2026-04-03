class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        //two pointers to check area, back and front to get widest area width
        for (int i = 0, j = height.size()-1; i < j;) {
            //pick max between current max and current area
            res = max(res, min(height[i], height[j])*(j-i));
            //always try to keep the higher height of the two
            if (height[i] < height[j]) i++;
            else j--;
        }
        return res;
    }
};