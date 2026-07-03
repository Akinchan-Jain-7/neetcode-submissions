class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        vector<int> mp(26);
        for(char ch: s1) mp[ch-'a']++;
        vector<int> temp(26);
        int i =0, j=0;
        
        while(j<s2.size()) {
            if(j<s1.size()) temp[s2[j++]-'a']++;

            else {
                temp[s2[j++]-'a']++;
                temp[s2[i++]-'a']--;
            }
            if(temp==mp) return true;
        }

        return false;
    }
};
