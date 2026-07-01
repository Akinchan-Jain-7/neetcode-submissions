class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> s(nums.begin(), nums.end());
        int ans = 0;
        for(int num: s) {
            if(!s.count(num-1)) {
                int cnt =1;
                while(s.count(num+1)) {
                    cnt++;
                    num++;
                }
                ans = max(ans,cnt);
            }
        }
        return ans;
    }
};
