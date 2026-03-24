class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {

        if(nums.empty()) return 0;  // mảng rỗng

        int maxLen = 1;   // kết quả lớn nhất
        int curLen = 1;   // độ dài dãy hiện tại

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i-1]){    // nếu tăng liên tục
                curLen++;
            } else {                     // ngắt dãy
                curLen = 1;
            }
            maxLen = max(maxLen, curLen); // cập nhật kết quả
        }

        return maxLen;
    }
};