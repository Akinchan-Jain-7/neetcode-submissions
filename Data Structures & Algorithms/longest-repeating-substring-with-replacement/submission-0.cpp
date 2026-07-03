class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans =0;
        unordered_map<char,int> mp;

        int i =0;
        int total = 0;
        int maxFreq = 0;
        for(int j=0; j<s.size(); j++) {
            mp[s[j]]++;
            total++;
            maxFreq = max(maxFreq, mp[s[j]]);

            while(total-maxFreq >k) {
                mp[s[i]]--;
                total--;
                i++;
            }
            ans = max(ans, j-i+1);
        }
        return ans;
    }
};
