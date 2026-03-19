class Solution {
public:
    char findTheDifference(string s, string t) {

        char result = 0; // Biến lưu XOR của tất cả ký tự

        // XOR tất cả ký tự trong s
        for(char c : s)
            result ^= c;  // ^ là XOR

        // XOR tất cả ký tự trong t
        for(char c : t)
            result ^= c;

        // Ký tự thừa sẽ còn lại ở result
        return result;
    }
};