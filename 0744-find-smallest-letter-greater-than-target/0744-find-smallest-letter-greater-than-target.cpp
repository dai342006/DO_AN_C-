class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0;
        int right = letters.size() - 1;
        char ans = letters[0]; // default = vòng lại ký tự đầu tiên

        while(left <= right){
            int mid = left + (right - left) / 2;
            if(letters[mid] > target){
                ans = letters[mid];  // candidate hợp lệ
                right = mid - 1;     // tìm ký tự nhỏ hơn nhưng vẫn > target
            } else {
                left = mid + 1;      // ký tự <= target, bỏ qua
            }
        }

        return ans;
    }
};