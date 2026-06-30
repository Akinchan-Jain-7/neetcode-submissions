class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size());
        int suff = 1;
        for(int i =nums.size()-1; i>=0; i--) {
            ans[i] = suff;
            suff *= nums[i];
        }

        int pref = 1;
        for(int i =0; i<nums.size(); i++) {
            ans[i]*=pref;
            pref*=nums[i];
        }
        return ans;
    }
};
