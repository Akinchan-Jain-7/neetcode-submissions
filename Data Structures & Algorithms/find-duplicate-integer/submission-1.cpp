class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int temp =nums[0];
        while(true) {
            if(nums[temp] == -1) return temp;
            int x = nums[temp];
            nums[temp] = -1;
            temp = x;
        }
        return 0;
    }
};
