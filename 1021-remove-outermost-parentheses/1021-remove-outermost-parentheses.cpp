class Solution {
public:
    string removeOuterParentheses(string s) {

        string result = ""; // chuỗi kết quả
        int depth = 0;      // độ sâu của ngoặc

        // duyệt từng ký tự trong chuỗi
        for(char c : s){

            // nếu là ngoặc mở
            if(c == '('){

                // nếu depth > 0 thì không phải ngoặc ngoài
                if(depth > 0){
                    result += c;
                }

                // tăng độ sâu
                depth++;
            }

            // nếu là ngoặc đóng
            else{

                // giảm độ sâu trước
                depth--;

                // nếu depth > 0 thì không phải ngoặc ngoài
                if(depth > 0){
                    result += c;
                }
            }
        }

        return result;
    }
};