

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; ++i) {
            map<char,int> rows, cols, boxes;
            for (int j = 0; j < 9; ++j) {
            
                if (board[i][j] != '.' && rows.count(board[i][j])) return false;
                rows[board[i][j]]=1;

            
                if (board[j][i] != '.' && cols.count(board[j][i])) return false;
                cols[board[j][i]]=1;

           
                int boxRow = 3 * (i / 3) + j / 3;
                int boxCol = 3 * (i % 3) + j % 3;
                if (board[boxRow][boxCol] != '.' && boxes.count(board[boxRow][boxCol]))
                {
                 return false;
                }
                boxes[board[boxRow][boxCol]];
            }
        }
        return true;
    }
};
