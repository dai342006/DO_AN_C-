#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows)// 
            return s;

        vector<string> rows(numRows);
        int curRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[curRow] += c;

            if (curRow == 0 || curRow == numRows - 1)
                goingDown = !goingDown;

            curRow += goingDown ? 1 : -1;
        }

        string result = "";
        for (string row : rows)
            result += row;

        return result;
    }
};

int main() {
    Solution sol;                      // 1. tạo object
    string s = "PAYPALISHIRING";       // chuỗi đầu vào
    int numRows = 3;                   // số hàng

    string ans = sol.convert(s, numRows); // 2. gọi hàm
    cout << ans;                       // 3. in kết quả

    return 0;
}
