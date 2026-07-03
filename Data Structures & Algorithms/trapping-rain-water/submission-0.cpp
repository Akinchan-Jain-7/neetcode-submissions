class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        for(int i=0; i<height.size(); i++) {
            int l = 0;
            for(int j=i-1; j>=0; j--) {
                l = max(l, height[j]);
            }
            int r = 0;
            for(int j=i+1; j<height.size(); j++) {
                r = max(r, height[j]);
            }
            int trap = min(l,r)-height[i];
            if(trap>0) ans+=trap;
        }
        return ans;
    }
};
