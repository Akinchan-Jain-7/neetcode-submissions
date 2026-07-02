class Solution {
public:
    void twoSum(vector<int>& nums, int target, vector<vector<int>> &ans, int idx) {
        int l=idx+1;
        int r=nums.size()-1;
        while(l<r) {
            if(l > idx+1 && nums[l] == nums[l-1]) l++;
            else if(r < nums.size()-1 && nums[r] == nums[r+1]) r--;
            else {
            int sum = nums[l] + nums[r];
             if(sum==target) {
                ans.push_back({-target, nums[l], nums[r]});
                l++;
                r--;
            }
            else if(sum>target) r--;
            else l++;
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
