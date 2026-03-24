class Solution {
public:

    bool solve(vector<vector<char>>& board, const string& word, int i, int j, int idx) {
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size()) return false;
        if (board[i][j] != word[idx]) return false;
        if (idx == word.size() - 1) return true;
        char temp = board[i][j];
        board[i][j] = '*';
        bool found = solve(board, word, i+1, j, idx+1) ||
                     solve(board, word, i-1, j, idx+1) ||
                     solve(board, word, i, j+1, idx+1) ||
                     solve(board, word, i, j-1, idx+1);
        board[i][j] = temp;
        return found;
    }


    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                if (solve(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};
