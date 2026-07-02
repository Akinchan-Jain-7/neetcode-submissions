class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = INT_MIN;
        for(int i =0; i<heights.size(); i++) {
            for(int j =i+1; j<heights.size(); j++) {
                ans = max(ans, (j-i)*min(heights[i], heights[j]));
            }
        }
        return ans;
    }
};
