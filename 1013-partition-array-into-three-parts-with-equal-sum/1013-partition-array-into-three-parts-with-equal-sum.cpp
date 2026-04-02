class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {

        int total = 0;

        // ============================
        // BƯỚC 1: TÍNH TỔNG MẢNG
        // ============================

        for(int num : arr){
            total += num;
        }

        // nếu tổng không chia hết cho 3
        if(total % 3 != 0){
            return false;
        }

        // tổng cần đạt cho mỗi phần
        int target = total / 3;

        int currentSum = 0;
        int count = 0;

        // ============================
        // BƯỚC 2: DUYỆT MẢNG
        // ============================

        for(int num : arr){

            currentSum += num;

            // nếu đạt target
            if(currentSum == target){

                count++;        // tìm được 1 phần
                currentSum = 0; // reset tổng
            }
        }

        // nếu có ít nhất 3 phần
        return count >= 3;
    }
};