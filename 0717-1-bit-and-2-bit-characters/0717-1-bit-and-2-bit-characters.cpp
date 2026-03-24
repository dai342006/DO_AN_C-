class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        int n = bits.size();

        while(i < n - 1){ // chỉ duyệt đến n-2
            if(bits[i] == 1){
                i += 2; // 2-bit character
            } else {
                i += 1; // 1-bit character
            }
        }

        // nếu i == n-1 nghĩa là kết thúc đúng bằng 1-bit character
        return i == n - 1;
    }
};