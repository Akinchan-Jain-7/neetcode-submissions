class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> r(9, vector<bool>(9));
        vector<vector<bool>> c(9, vector<bool>(9));
        vector<vector<bool>> b(9, vector<bool>(9));

        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                if(board[i][j]=='.') continue;
                int dig = board[i][j]-'1';
                int box = 3*(i/3) + j/3;
                if(r[i][dig] || c[j][dig] || b[box][dig]) return false;
                r[i][dig] = true;
                c[j][dig] = true;
                b[box][dig] = true;
            }
        }
        return true;
    }
};
