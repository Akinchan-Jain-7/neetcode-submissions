class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar = INT_MIN;
        int x = 0;

        int n = nums.size();
        for(int i =0; i<n; i++) {
            x = max(nums[i], x + nums[i]);
            maxSoFar = max(maxSoFar, x);
        }  
        return maxSoFar;
    }
};
