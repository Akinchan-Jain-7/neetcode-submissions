class Solution {
public:
    int trap(vector<int>& height) {
    int n = height.size() ;
    int i =0;
    int j = n-1;
    int totalWater =0;
        int l =0;
        int r =0;
    while (i<=j) {
        l = max(l,height[i]);
        r = max(r,height[j]);


        if(l<r) {
        int wi = l - height[i];
        totalWater+=wi;
        i++;
        }  else {
            int wj = r-height[j];
            totalWater+=wj;
            j--;
        }

    
    }   return totalWater;  
    }  
};