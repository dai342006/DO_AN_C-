class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        // mảng đếm 26 chữ cái
        int count[26] = {0};

        // đếm số lần xuất hiện trong magazine
        for(char c : magazine){
            count[c - 'a']++;
        }

        // kiểm tra từng chữ trong ransomNote
        for(char c : ransomNote){

            // nếu không còn chữ này
            if(count[c - 'a'] == 0){
                return false;
            }

            // dùng 1 chữ
            count[c - 'a']--;
        }

        return true;
    }
};