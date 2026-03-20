class Solution {
public:
    int firstBadVersion(int n) {

        int left = 1;      // version đầu
        int right = n;     // version cuối

        while(left < right){

            // tránh tràn số
            int mid = left + (right - left) / 2;

            // kiểm tra version giữa
            if(isBadVersion(mid)){

                // nếu mid là bad
                // first bad nằm bên trái hoặc chính mid
                right = mid;
            }
            else{

                // nếu mid là good
                // first bad nằm bên phải
                left = mid + 1;
            }
        }

        // khi left == right → đó là first bad version
        return left;
    }
};