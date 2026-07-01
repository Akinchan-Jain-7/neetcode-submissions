class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded ="";
        for(int i =0; i<strs.size(); i++) {
            encoded += to_string(strs[i].size()) + "#" + strs[i];
        }
        cout << encoded;
        return encoded;      
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i =0;
        while(i<s.size()) {
            string len="";
            while(i<s.size() && (s[i] != '#')){
                len += s[i];
                i++;
            }
            i++;
            int l = stoi(len);
            string temp = "";
            while(l--) {
                temp+= s[i];
                i++;
            }
            decoded.push_back(temp);
        }    

        return decoded;        
    }
};
