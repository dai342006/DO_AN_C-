class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // nếu mảng rỗng
        if(nums.size() == 0) return 0;

        int slow = 0;  // con trỏ lưu phần tử không trùng

        // fast dùng để duyệt mảng
        for(int fast = 1; fast < nums.size(); fast++){

            // nếu gặp số khác số trước đó
            if(nums[fast] != nums[slow]){

                slow++;                     // tăng vị trí lưu
                nums[slow] = nums[fast];    // ghi số mới vào
            }
        }

        // số phần tử không trùng = slow + 1
        return slow + 1;
    }
};