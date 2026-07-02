class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = INT_MIN;
        int i =0;
        int j=heights.size()-1;

        while(i<j) {
            ans = max(ans, (j-i)*min(heights[i],heights[j]));
            heights[i]<heights[j]? i++:j--;
        }
        return ans;
    }
};
