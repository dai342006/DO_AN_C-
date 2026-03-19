class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int totalSum = 0;  // Tổng tất cả phần tử
        int leftSum = 0;   // Tổng bên trái đang tính

        // Tính tổng cả mảng
        for(int num : nums)
            totalSum += num;

        // Duyệt từng phần tử
        for(int i = 0; i < nums.size(); i++){

            // Nếu leftSum bằng tổng phần bên phải
            if(leftSum == totalSum - leftSum - nums[i])
                return i;  // Trả về pivot index

            // Cập nhật leftSum bằng cách cộng nums[i]
            leftSum += nums[i];
        }

        // Nếu không có pivot nào thỏa mãn
        return -1;
    }
};