class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());

        int ans = 1;
        int i = 0;

        while (i + 1 < nums.size()) {
            int dup = 0;
            int len = 1;

            if (i + 1 < nums.size() &&
                ((nums[i] + 1 == nums[i + 1]) || (nums[i] == nums[i + 1]))) {

                while (i + 1 < nums.size() &&
                       ((nums[i] + 1 == nums[i + 1]) || (nums[i] == nums[i + 1]))) {

                    if (nums[i] == nums[i + 1])
                        dup++;

                    len++;
                    i++;
                }

                ans = max(ans, len - dup);
            } else {
                i++;
            }
        }

        return ans;
    }
};