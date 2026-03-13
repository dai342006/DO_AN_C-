class Solution {
public:
    bool canAliceWin(vector<int>& nums) {

        int sum1 = 0;   // tổng số 1 chữ số
        int sum2 = 0;   // tổng số 2 chữ số
        int total = 0;  // tổng tất cả

        for(int x : nums){

            total += x;

            // số 1 chữ số
            if(x >= 1 && x <= 9){
                sum1 += x;
            }

            // số 2 chữ số
            if(x >= 10 && x <= 99){
                sum2 += x;
            }
        }

        // Alice lấy số 1 chữ số
        if(sum1 > total - sum1){
            return true;
        }

        // Alice lấy số 2 chữ số
        if(sum2 > total - sum2){
            return true;
        }

        return false;
    }
};