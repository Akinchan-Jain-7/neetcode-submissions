class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> pos(n);
        for(int i =0; i<n; i++) {
            pos[i] = {position[i], speed[i]};
        }
        sort(pos.begin(), pos.end(), greater<pair<int,int>>());

        stack<float> st;
        st.push((double)(target-pos[0].first)/pos[0].second);

        for(int i=1; i<n; i++) {
            double time = (double)(target-pos[i].first)/pos[i].second;
            if(time>st.top()) st.push(time);
        }

        return st.size();
    }
};
