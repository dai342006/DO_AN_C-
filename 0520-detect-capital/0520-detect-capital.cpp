class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0; // biến đếm số chữ in hoa
        
        // duyệt từng ký tự trong chuỗi
        for(char c : word){
            if(isupper(c)){ // nếu là chữ hoa
                upper++;
            }
        }

        // TH1: tất cả chữ hoa
        if(upper == word.length()) return true;

        // TH2: tất cả chữ thường
        if(upper == 0) return true;

        // TH3: chỉ chữ đầu viết hoa
        if(upper == 1 && isupper(word[0])) return true;

        // các trường hợp còn lại là sai
        return false;
    }
};