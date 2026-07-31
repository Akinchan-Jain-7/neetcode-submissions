class Solution {
public:
    void f(int i , int n , vector<int> &nums , vector<vector<int>> &ans, vector<int> &temp) {
            ans.push_back(temp);
  
        for(int j =i;  j<n; j++) {
            temp.push_back(nums[j]);
            f(j+1, n, nums, ans, temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int> temp;

        f(0,n,nums,ans,temp);
        return ans;
    }
};
