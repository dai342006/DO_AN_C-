class Solution {
public:
    string toLowerCase(string s) {

        // duyệt từng ký tự trong chuỗi
        for(int i = 0; i < s.length(); i++){

            // nếu là chữ hoa
            if(s[i] >= 'A' && s[i] <= 'Z'){

                // chuyển thành chữ thường
                s[i] = s[i] + 32;
            }
        }

        // trả về chuỗi đã chuyển
        return s;
    }
};