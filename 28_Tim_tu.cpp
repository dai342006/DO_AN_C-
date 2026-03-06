#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int m, n;

    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int index) {
        // Nếu đã tìm hết các ký tự
        if (index == word.length()) return true;

        // Kiểm tra biên và ký tự
        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != word[index])
            return false;

        char temp = board[i][j];  // lưu lại
        board[i][j] = '#';       // đánh dấu đã dùng

        // 4 hướng
        bool found = dfs(board, word, i+1, j, index+1) ||
                     dfs(board, word, i-1, j, index+1) ||
                     dfs(board, word, i, j+1, index+1) ||
                     dfs(board, word, i, j-1, index+1);

        board[i][j] = temp;  // trả lại giá trị ban đầu (backtrack)

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dfs(board, word, i, j, 0))
                    return true;
            }
        }
        return false;
    }
};
int main() {
    Solution s;

    vector<vector<char>> board = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };

    string word = "ABCCED";

    if (s.exist(board, word))
        cout << "True";
    else
        cout << "False";

    return 0;
}
