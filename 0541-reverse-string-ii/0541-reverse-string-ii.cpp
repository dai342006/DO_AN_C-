class Solution {
public:
    string reverseStr(string s, int k) {

        // Duyệt chuỗi s, mỗi lần nhảy 2*k ký tự
        // Vì theo đề bài: cứ mỗi 2k ký tự thì đảo k ký tự đầu
        for(int i = 0; i < s.length(); i += 2*k){

            // vị trí bắt đầu của đoạn cần đảo
            int left = i;

            // vị trí kết thúc của đoạn cần đảo
            // i + k - 1 là ký tự thứ k
            // dùng min để tránh vượt quá độ dài chuỗi
            int right = min(i + k - 1, (int)s.length() - 1);

            // đảo chuỗi bằng cách đổi chỗ 2 đầu
            while(left < right){

                // đổi chỗ 2 ký tự
                swap(s[left], s[right]);

                // tăng left lên
                left++;

                // giảm right xuống
                right--;
            }
        }

        // trả về chuỗi sau khi đã đảo
        return s;
    }
};