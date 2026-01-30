
#include <iostream>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n == 0) return "";

        int start = 0;      // vị trí bắt đầu của chuỗi kết quả
        int maxLen = 1;     // độ dài chuỗi đối xứng dài nhất

        for (int i = 0; i < n; i++) {
            // 1. Đối xứng độ dài lẻ (aba)
            int left = i, right = i;
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }
                left--;
                right++;
            }

            // 2. Đối xứng độ dài chẵn (abba)
            left = i;
            right = i + 1;
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }
                left--;
                right++;
            }
        }

        return s.substr(start, maxLen);
    }
};
int main(){
	Solution sol;              // tạo đối tượng
    string s = "babad";        // chuỗi test

    string result = sol.longestPalindrome(s);  // gọi hàm

    cout << result << endl;    // in kết quả
    return 0;
}
