class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;

        while(left <= right){

            // tìm vị trí giữa
            int mid = left + (right - left) / 2;

            // nếu tìm thấy target
            if(nums[mid] == target){
                return mid;
            }

            // nếu target lớn hơn mid
            else if(nums[mid] < target){
                left = mid + 1;
            }

            // nếu target nhỏ hơn mid
            else{
                right = mid - 1;
            }
        }

        // không tìm thấy
        return -1;
    }
};