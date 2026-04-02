class Solution {
public:
    int arrayPairSum(vector<int>& nums) {

        // sắp xếp mảng theo thứ tự tăng dần
        sort(nums.begin(), nums.end());

        int sum = 0; // biến lưu tổng kết quả

        // duyệt mảng, mỗi lần nhảy 2 phần tử
        for(int i = 0; i < nums.size(); i += 2){

            // cộng phần tử nhỏ hơn của mỗi cặp
            sum += nums[i];
        }

        // trả về tổng
        return sum;
    }
};