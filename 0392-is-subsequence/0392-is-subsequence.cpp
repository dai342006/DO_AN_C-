class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0; // con trỏ cho chuỗi s
        int j = 0; // con trỏ cho chuỗi t

        // duyệt chuỗi t
        while(i < s.size() && j < t.size()){

            // nếu ký tự giống nhau
            if(s[i] == t[j]){
                i++; // chuyển sang ký tự tiếp theo của s
            }

            // luôn tăng j để duyệt t
            j++;
        }

        // nếu đã duyệt hết s thì là subsequence
        return i == s.size();
    }
};