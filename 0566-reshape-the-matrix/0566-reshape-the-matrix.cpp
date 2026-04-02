class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        // số hàng của ma trận ban đầu
        int rows = mat.size();

        // số cột của ma trận ban đầu
        int cols = mat[0].size();

        // nếu tổng số phần tử khác nhau thì không reshape được
        if(rows * cols != r * c){
            return mat;
        }

        // tạo ma trận mới r hàng c cột
        vector<vector<int>> result(r, vector<int>(c));

        int index = 0; // dùng để duyệt toàn bộ phần tử

        // duyệt từng phần tử của ma trận cũ
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){

                // xác định vị trí trong ma trận mới
                result[index / c][index % c] = mat[i][j];

                // tăng index
                index++;
            }
        }

        // trả về ma trận mới
        return result;
    }
};