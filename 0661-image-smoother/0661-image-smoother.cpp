class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {

        int m = img.size();        // số hàng
        int n = img[0].size();     // số cột

        vector<vector<int>> result(m, vector<int>(n)); // ma trận kết quả

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){

                int sum = 0;   // tổng giá trị
                int count = 0; // số ô hợp lệ

                // duyệt 3x3 xung quanh
                for(int x = i - 1; x <= i + 1; x++){
                    for(int y = j - 1; y <= j + 1; y++){

                        // kiểm tra biên
                        if(x >= 0 && x < m && y >= 0 && y < n){
                            sum += img[x][y];
                            count++;
                        }

                    }
                }

                // lấy trung bình
                result[i][j] = sum / count;
            }
        }

        return result;
    }
};