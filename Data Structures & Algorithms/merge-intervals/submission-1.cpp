class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        int start = intervals[0][0];
        int end = intervals[0][1];
        int n = intervals.size();

        for(int i =1 ; i<n; i++) {
            int currStart = intervals[i][0];
            int currEnd = intervals[i][1];

            if(currStart <= end) {
                end = max(end, currEnd);
            }

            else {
                ans.push_back({start,end});
                start = currStart;
                end = currEnd;
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};
