class Solution {
public:
    int countBinarySubstrings(string s) {

        vector<int> groups; // lưu độ dài các nhóm 0 hoặc 1 liên tiếp
        int n = s.size();
        int count = 1;       // đếm độ dài nhóm hiện tại

        // duyệt từ ký tự thứ 2
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]){
                count++;
            } else {
                groups.push_back(count);
                count = 1;
            }
        }
        groups.push_back(count); // thêm nhóm cuối

        // tính số substring
        int result = 0;
        for(int i = 0; i < groups.size() - 1; i++){
            result += min(groups[i], groups[i+1]);
        }

        return result;
    }
};