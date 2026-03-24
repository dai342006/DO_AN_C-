class Solution {
public:
    // Hàm kiểm tra số nguyên tố (nhỏ, ≤ 20)
    bool isPrime(int x){
        // Các số bit 1 tối đa của i ≤ 10^6 là 20
        // Vì vậy hardcode các số nguyên tố ≤ 20 cho nhanh
        return x == 2 || x == 3 || x == 5 || x == 7 ||
               x == 11 || x == 13 || x == 17 || x == 19;
    }

    int countPrimeSetBits(int left, int right) {
        int count = 0; // biến đếm số lượng số thỏa điều kiện

        // duyệt từng số từ left đến right
        for(int i = left; i <= right; i++){
            // __builtin_popcount(i) trả về số lượng bit 1 trong i
            int bits = __builtin_popcount(i);

            // nếu số bit 1 là số nguyên tố → tăng biến đếm
            if(isPrime(bits)) 
                count++;
        }

        return count; // trả về tổng số lượng số thỏa điều kiện
    }
};