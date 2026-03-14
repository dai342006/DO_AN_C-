class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        
        // Lấy tọa độ điểm thứ 1
        int x1 = points[0][0], y1 = points[0][1];
        
        // Lấy tọa độ điểm thứ 2
        int x2 = points[1][0], y2 = points[1][1];
        
        // Lấy tọa độ điểm thứ 3
        int x3 = points[2][0], y3 = points[2][1];
        
        // Kiểm tra 3 điểm có thẳng hàng không
        // Nếu bằng nhau -> thẳng hàng -> không phải boomerang
        // Nếu khác nhau -> không thẳng hàng -> là boomerang
        
        return (x2 - x1)*(y3 - y1) != (y2 - y1)*(x3 - x1);
    }
};