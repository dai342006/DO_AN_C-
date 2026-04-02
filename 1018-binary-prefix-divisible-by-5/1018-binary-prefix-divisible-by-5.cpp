class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {

        vector<bool> result; // lưu kết quả
        int current = 0;     // lưu phần dư khi chia 5

        // duyệt từng bit trong mảng
        for(int bit : nums){

            // tạo số nhị phân mới
            current = (current * 2 + bit) % 5;

            // nếu chia hết cho 5
            if(current == 0){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }

        return result;
    }
};