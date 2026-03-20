class Solution {
public:
    int mySqrt(int x) {

        // nếu x = 0 hoặc 1 thì căn bậc hai chính nó
        if(x == 0 || x == 1)
            return x;

        int left = 1;      // biên trái
        int right = x;     // biên phải
        int ans = 0;       // lưu kết quả

        while(left <= right){

            int mid = left + (right - left) / 2;

            // dùng long long để tránh tràn số
            long long square = (long long)mid * mid;

            // nếu mid^2 == x
            if(square == x){
                return mid;
            }

            // nếu mid^2 < x
            if(square < x){
                ans = mid;        // mid có thể là đáp án
                left = mid + 1;   // tìm số lớn hơn
            }
            else{
                right = mid - 1;  // mid quá lớn
            }
        }

        return ans;
    }
};