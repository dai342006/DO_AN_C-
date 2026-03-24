class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return -1;

        int maxVal = nums[0]; // giá trị lớn nhất
        int maxIndex = 0;     // index giá trị lớn nhất

        // tìm số lớn nhất và index của nó
        for(int i = 1; i < n; i++){
            if(nums[i] > maxVal){
                maxVal = nums[i];
                maxIndex = i;
            }
        }

        // kiểm tra điều kiện "lớn gấp ít nhất 2 lần mọi số khác"
        for(int i = 0; i < n; i++){
            if(i != maxIndex && maxVal < 2 * nums[i]){
                return -1;
            }
        }

        return maxIndex;
    }
};