class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1);

        // Duyệt từng dòng
        for (int i = 1; i <= rowIndex; i++) {
            // cập nhật từ phải sang trái
            for (int j = i - 1; j > 0; j--) {
                row[j] = row[j] + row[j - 1];
            }
        }

        return row;
    }
};