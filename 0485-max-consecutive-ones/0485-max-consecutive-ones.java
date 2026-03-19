class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {

        int maxCount = 0;       // Lưu số 1 liên tiếp dài nhất
        int currentCount = 0;   // Lưu số 1 liên tiếp hiện tại

        // Duyệt từng phần tử trong mảng
        for(int num : nums){

            if(num == 1){
                // Nếu gặp 1, tăng currentCount
                currentCount++;
                // Cập nhật maxCount nếu currentCount lớn hơn
                if(currentCount > maxCount){
                    maxCount = currentCount;
                }
            } else {
                // Nếu gặp 0, reset currentCount
                currentCount = 0;
            }
        }

        // Trả về số 1 liên tiếp dài nhất
        return maxCount;
    }
}