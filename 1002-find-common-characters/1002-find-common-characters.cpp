class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        // mảng lưu số lần xuất hiện nhỏ nhất của mỗi ký tự
        // 26 chữ cái a -> z
        vector<int> minFreq(26, INT_MAX);

        // ====================================
        // BƯỚC 1: DUYỆT TỪNG TỪ TRONG MẢNG
        // ====================================

        for(string word : words){

            // mảng đếm số lần xuất hiện ký tự trong 1 từ
            vector<int> freq(26, 0);

            // duyệt từng ký tự trong từ
            for(char c : word){

                // tăng số lần xuất hiện ký tự
                freq[c - 'a']++;
            }

            // cập nhật số lần xuất hiện nhỏ nhất
            for(int i = 0; i < 26; i++){

                minFreq[i] = min(minFreq[i], freq[i]);
            }
        }

        // ====================================
        // BƯỚC 2: TẠO KẾT QUẢ
        // ====================================

        vector<string> result;

        // duyệt từng chữ cái a -> z
        for(int i = 0; i < 26; i++){

            // nếu ký tự xuất hiện trong tất cả các từ
            while(minFreq[i] > 0){

                // chuyển số thành ký tự
                char c = 'a' + i;

                // thêm vào kết quả
                result.push_back(string(1, c));

                minFreq[i]--;
            }
        }

        return result;
    }
};