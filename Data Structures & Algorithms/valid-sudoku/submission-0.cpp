class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> r(9);
        vector<unordered_set<int>> c(9);
        vector<unordered_set<int>> b(9);

        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                if(board[i][j]=='.') continue;
                int dig = board[i][j]-'0';
                int box = 3*(i/3) + j/3;
                if(r[i].count(dig) || c[j].count(dig) || b[box].count(dig)) return false;
                r[i].insert(dig);
                c[j].insert(dig);
                b[box].insert(dig);
            }
        }
        return true;
    }
};
