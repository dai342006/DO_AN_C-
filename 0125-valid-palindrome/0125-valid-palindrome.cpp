class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;                  // con trỏ trái
        int right = s.size() - 1;      // con trỏ phải

        // duyệt từ 2 đầu vào giữa
        while (left < right) {

            // bỏ qua ký tự không phải chữ hoặc số bên trái
            while (left < right && !isalnum(s[left])) {
                left++;
            }

            // bỏ qua ký tự không phải chữ hoặc số bên phải
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            // so sánh 2 ký tự (chuyển về chữ thường)
            if (tolower(s[left]) != tolower(s[right])) {
                return false;          // khác → không phải palindrome
            }

            left++;   // tiến vào trong
            right--;  // tiến vào trong
        }

        return true;  // duyệt hết mà không sai → là palindrome
    }
};