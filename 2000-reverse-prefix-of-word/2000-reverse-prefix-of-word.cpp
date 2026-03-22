class Solution {
public:
    string reversePrefix(string word, char ch) {

        // duyệt từng ký tự trong chuỗi
        for(int i = 0; i < word.size(); i++){

            // nếu tìm thấy ký tự ch
            if(word[i] == ch){

                // đảo ngược từ vị trí 0 đến i
                reverse(word.begin(), word.begin() + i + 1);

                // sau khi đảo xong thì trả về kết quả
                return word;
            }
        }

        // nếu không tìm thấy ch thì trả chuỗi ban đầu
        return word;
    }
};