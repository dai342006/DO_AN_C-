class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {

        // Hàm sort của C++ dùng để sắp xếp mảng
        // nums.begin() là vị trí bắt đầu của mảng
        // nums.end() là vị trí kết thúc của mảng
        sort(nums.begin(), nums.end());

        // Sau khi sắp xếp xong thì trả về mảng nums
        return nums;
    }
};