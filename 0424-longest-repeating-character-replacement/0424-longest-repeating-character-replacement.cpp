class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int> count(26, 0); // lưu số lần xuất hiện của A-Z

        int left = 0;
        int maxCount = 0; // ký tự xuất hiện nhiều nhất
        int result = 0;

        for(int right = 0; right < s.size(); right++){

            // tăng số lần xuất hiện ký tự
            count[s[right] - 'A']++;

            // cập nhật ký tự xuất hiện nhiều nhất
            maxCount = max(maxCount, count[s[right] - 'A']);

            // nếu số ký tự cần thay > k thì thu nhỏ cửa sổ
            while((right - left + 1) - maxCount > k){
                count[s[left] - 'A']--;
                left++;
            }

            // cập nhật kết quả
            result = max(result, right - left + 1);
        }

        return result;
    }
};