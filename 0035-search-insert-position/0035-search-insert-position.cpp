class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;

        while(left <= right){

            int mid = left + (right - left) / 2;

            // nếu tìm thấy target
            if(nums[mid] == target){
                return mid;
            }

            // target nằm bên phải
            else if(nums[mid] < target){
                left = mid + 1;
            }

            // target nằm bên trái
            else{
                right = mid - 1;
            }
        }

        // nếu không tìm thấy
        // left chính là vị trí cần chèn
        return left;
    }
};