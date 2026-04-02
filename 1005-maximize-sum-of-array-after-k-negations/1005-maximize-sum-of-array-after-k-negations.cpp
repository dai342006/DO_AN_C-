class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {

        // sắp xếp mảng tăng dần
        sort(nums.begin(), nums.end());

        // =========================
        // BƯỚC 1: ĐỔI DẤU SỐ ÂM
        // =========================

        for(int i = 0; i < nums.size(); i++){

            // nếu số âm và vẫn còn lượt đổi
            if(nums[i] < 0 && k > 0){

                nums[i] = -nums[i]; // đổi dấu
                k--;                // giảm số lần đổi
            }
        }

        // sắp xếp lại để tìm số nhỏ nhất
        sort(nums.begin(), nums.end());

        // =========================
        // BƯỚC 2: NẾU K CÒN LẺ
        // =========================

        if(k % 2 == 1){

            // đổi dấu số nhỏ nhất
            nums[0] = -nums[0];
        }

        // =========================
        // BƯỚC 3: TÍNH TỔNG
        // =========================

        int sum = 0;

        for(int num : nums){
            sum += num;
        }

        return sum;
    }
};