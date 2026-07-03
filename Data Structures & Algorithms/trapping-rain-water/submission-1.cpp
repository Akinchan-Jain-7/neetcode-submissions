class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> l(n);
        int lMax = height[0];
        for(int i =1; i<n; i++) {
            l[i] = lMax;
            lMax = max(lMax, height[i]);
        } 

        vector<int> r(n);
        int rMax = height[n-1];
        for(int i =n-2; i>=0; i--) {
            r[i] = rMax;
            rMax = max(rMax, height[i]);
        }

        int ans =0;
        for(int i =0; i<n; i++) {
            int trap = min(l[i],r[i]) - height[i];
            if(trap>0) ans += trap;
        }

        return ans;
    }
};
