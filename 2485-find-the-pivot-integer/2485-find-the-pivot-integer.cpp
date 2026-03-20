class Solution {
public:
    int pivotInteger(int n) {

        // Tính tổng từ 1 → n
        int total = n * (n + 1) / 2;

        // duyệt từng số x từ 1 → n
        for(int x = 1; x <= n; x++){

            // tổng từ 1 → x
            int left = x * (x + 1) / 2;

            // tổng từ x → n
            int right = total - (x - 1) * x / 2;

            // nếu hai tổng bằng nhau
            if(left == right){
                return x;
            }
        }

        // nếu không tìm được
        return -1;
    }
};