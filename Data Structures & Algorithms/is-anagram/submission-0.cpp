class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m) return false;

        vector<int> v1(26), v2(26);
        for(int i =0; i<n; i++) {
            v1[s[i]-'a']++;
            v2[t[i]-'a']++;
        }

        return v1==v2;
    }
};
