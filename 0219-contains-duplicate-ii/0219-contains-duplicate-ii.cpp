class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_set<int> window; // lưu các phần tử trong cửa sổ

        for(int i = 0; i < nums.size(); i++){

            // nếu phần tử đã tồn tại trong window
            if(window.count(nums[i])){
                return true; // tìm thấy duplicate
            }

            // thêm phần tử vào window
            window.insert(nums[i]);

            // nếu window lớn hơn k thì xóa phần tử cũ
            if(window.size() > k){
                window.erase(nums[i - k]);
            }
        }

        return false; // không tìm thấy
    }
};