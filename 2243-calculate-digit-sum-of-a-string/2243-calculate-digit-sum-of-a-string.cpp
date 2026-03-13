class Solution {
public:
    string digitSum(string s, int k) {

        while(s.size() > k){

            string newStr = "";

            // duyệt từng nhóm k
            for(int i = 0; i < s.size(); i += k){

                int sum = 0;

                // tính tổng chữ số trong nhóm
                for(int j = i; j < i + k && j < s.size(); j++){
                    sum += s[j] - '0';
                }

                // thêm tổng vào chuỗi mới
                newStr += to_string(sum);
            }

            s = newStr;
        }

        return s;
    }
};