class Solution {
public:
    string reverseWords(string s) {

        int start = 0; // vị trí bắt đầu của mỗi từ

        // duyệt toàn bộ chuỗi
        for(int i = 0; i <= s.length(); i++){

            // nếu gặp khoảng trắng hoặc hết chuỗi
            if(i == s.length() || s[i] == ' '){

                int left = start;   // đầu từ
                int right = i - 1;  // cuối từ

                // đảo từ
                while(left < right){
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }

                // cập nhật vị trí bắt đầu từ tiếp theo
                start = i + 1;
            }
        }

        // trả về chuỗi sau khi đảo
        return s;
    }
};