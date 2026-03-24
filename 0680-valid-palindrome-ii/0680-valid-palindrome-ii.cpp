class Solution {
public:

    // hàm kiểm tra chuỗi con s[l..r] có phải palindrome không
    bool isPalindromeRange(const string &s, int l, int r){
        while(l < r){
            if(s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }

    bool validPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while(left < right){
            if(s[left] == s[right]){
                left++;
                right--;
            } else {
                // thử bỏ left hoặc bỏ right
                return isPalindromeRange(s, left+1, right) || isPalindromeRange(s, left, right-1);
            }
        }

        return true; // nếu hết vòng while mà không return false
    }
};