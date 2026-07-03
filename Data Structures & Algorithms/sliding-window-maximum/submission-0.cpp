class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> maxHeap;
        vector<int> ans;

        int r =0;
        while(r<k) {
            maxHeap.push({nums[r], r});
            r++;
        }
        ans.push_back(maxHeap.top().first);
        int l =0;
        while(r<nums.size()) {
            maxHeap.push({nums[r], r});
            l++;
            r++;
            while(maxHeap.top().second<l) maxHeap.pop();
            ans.push_back(maxHeap.top().first);
        }
        return ans;
    }
};
