class Solution {
public:
    int findLUSlength(string a, string b) {
        
        // nếu 2 chuỗi giống nhau
        if(a == b){
            return -1;
        }
        
        // nếu khác nhau trả về độ dài chuỗi dài hơn
        return max(a.length(), b.length());
    }
};