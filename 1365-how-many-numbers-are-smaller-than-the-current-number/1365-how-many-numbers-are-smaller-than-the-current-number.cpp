class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int> result; // vector lưu kết quả
        
        // duyệt từng phần tử trong mảng
        for(int i = 0; i < nums.size(); i++){
            
            int count = 0; // đếm số nhỏ hơn
            
            // so sánh với tất cả phần tử khác
            for(int j = 0; j < nums.size(); j++){
                
                if(nums[j] < nums[i]){ // nếu nhỏ hơn
                    count++; // tăng biến đếm
                }
            }
            
            result.push_back(count); // lưu kết quả vào vector
        }
        
        return result; // trả về kết quả
    }
};