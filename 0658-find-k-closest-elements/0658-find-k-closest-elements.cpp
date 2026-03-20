class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int left = 0;
        int right = arr.size() - 1;

        // thu hẹp cửa sổ đến khi còn k phần tử
        while(right - left + 1 > k){

            // so sánh khoảng cách
            if(abs(arr[left] - x) > abs(arr[right] - x)){
                left++;   // bỏ phần tử bên trái
            } 
            else{
                right--;  // bỏ phần tử bên phải
            }
        }

        // tạo vector kết quả
        vector<int> result;

        for(int i = left; i <= right; i++){
            result.push_back(arr[i]);
        }

        return result;
    }
};