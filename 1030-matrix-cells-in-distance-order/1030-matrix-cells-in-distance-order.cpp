class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        
        vector<vector<int>> result; 
        // vector lưu tất cả các ô [row, col]

        // duyệt toàn bộ ma trận
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                result.push_back({i, j}); 
                // thêm tọa độ ô vào vector
            }
        }

        // sắp xếp theo khoảng cách Manhattan
        sort(result.begin(), result.end(),
        [&](vector<int>& a, vector<int>& b){

            int distA = abs(a[0] - rCenter) + abs(a[1] - cCenter);
            int distB = abs(b[0] - rCenter) + abs(b[1] - cCenter);

            return distA < distB; // sắp xếp tăng dần
        });

        return result;
    }
};