class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mpS;
        unordered_map<char,int> mpT;

        int st = 0;
        int ansSize = INT_MAX;
        int matched = 0;

        for(char ch : t) {
            mpT[ch]++;
        }

        int i = 0;
        for(int j = 0; j < s.size(); j++) {

            if(mpT.count(s[j])) {
                mpS[s[j]]++;
                if(mpS[s[j]] <= mpT[s[j]]) {
                    matched++;
                }
            }

            while(matched == t.size()) {
                if(j - i + 1 < ansSize) {
                    st = i;
                    ansSize = j - i + 1;
                }

                if(mpT.count(s[i])) {
                    mpS[s[i]]--;
                    if(mpS[s[i]] <  mpT[s[i]]) {
                        matched--;
                    }
                }

                i++;
            }
        }

        if(ansSize == INT_MAX) return "";
        return s.substr(st, ansSize);
    }
};