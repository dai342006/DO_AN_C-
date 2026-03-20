class Solution {
public:
    int findMin(vector<int>& nums) {

        int left = 0;
        int right = nums.size() - 1;

        while(left < right){

            int mid = left + (right - left) / 2;

            // nếu mid lớn hơn phần tử cuối
            // nghĩa là điểm xoay ở bên phải
            if(nums[mid] > nums[right]){
                left = mid + 1;
            }
            else{
                // min nằm bên trái hoặc chính mid
                right = mid;
            }
        }

        // left chính là vị trí nhỏ nhất
        return nums[left];
    }
};