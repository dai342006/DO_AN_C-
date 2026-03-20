class Solution {
public:
    int arrangeCoins(int n) {

        int row = 0;  // số hàng đã xếp

        // tiếp tục xếp nếu còn đủ coin
        while(n >= row + 1){

            row++;      // tạo thêm 1 hàng

            n -= row;   // trừ số coin dùng cho hàng đó
        }

        // row là số hàng đầy đủ
        return row;
    }
};