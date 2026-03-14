class Solution {
public:
    bool divisorGame(int n) {
        
        // Nếu n là số chẵn -> Alice thắng
        // Nếu n là số lẻ -> Alice thua
        
        return n % 2 == 0;
    }
};