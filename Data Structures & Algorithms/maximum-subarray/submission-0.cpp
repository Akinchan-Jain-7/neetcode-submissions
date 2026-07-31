class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar = nums[0];
        int x = nums[0];

        int n = nums.size();
        for(int i =1; i<n; i++) {
            x = max(nums[i], x + nums[i]);
            maxSoFar = max(maxSoFar, x);
        }  
        return maxSoFar;
    }
};
