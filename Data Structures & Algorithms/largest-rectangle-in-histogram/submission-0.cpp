class Solution {
public:
    void SLE(vector<int> &heights, vector<int> &left) {
        int n = heights.size();
        stack<int> st;
        for(int i=n-1; i>=0; i--) {
            while(!st.empty() && heights[i] < heights[st.top()]) {
                left[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
    }

    void SRE(vector<int> &heights, vector<int> &right) {
        int n = heights.size();
        stack<int> st;
        for(int i=0; i<n; i++) {
            while(!st.empty() && heights[i] < heights[st.top()]) {
                right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
    }


    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n, -1);
        SLE(heights,left);
        vector<int> right(n, n);
        SRE(heights,right);

        int ans = 0;

        for(int i=0; i<n; i++) {
            int length = heights[i];
            int maxWidth = right[i]-left[i]-1;
            int area = length*maxWidth;
            ans = max(ans, area);
        }

        return ans;
    }
};
