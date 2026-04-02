class Solution {
public:
    int bitwiseComplement(int n) {

        // trường hợp đặc biệt
        // nếu n = 0 thì complement là 1
        if(n == 0){
            return 1;
        }

        int mask = 0;
        int temp = n;

        // ============================
        // BƯỚC 1: TẠO MASK
        // ============================

        // tạo số nhị phân toàn 1
        // có cùng số bit với n
        while(temp > 0){

            mask = (mask << 1) | 1;

            temp = temp >> 1;
        }

        // ============================
        // BƯỚC 2: XOR với mask
        // ============================

        return mask ^ n;
    }
};