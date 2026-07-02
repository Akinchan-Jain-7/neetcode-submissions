class Solution {
public:
    void twoSum(vector<int>& nums, int target, vector<vector<int>> &ans, int idx) {
        int l=idx+1;
        int r=nums.size()-1;
        while(l<r) {
            int sum = nums[l]+nums[r];
            if(sum<target) l++;
            else if(sum>target) r--;
            else {
                ans.push_back({-target, nums[l++], nums[r--]});
                while(l<r && nums[l]==nums[l-1]) l++;
                while(l<r && nums[r]==nums[r+1]) r--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i =0; i<nums.size(); i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int target = -nums[i];
            twoSum(nums,target,ans,i);
        }
        return ans;
    }
};
