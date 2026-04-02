class Solution {
public:
    string generateTheString(int n) {
        
        string result = "";
        
        // nếu n là số lẻ
        if(n % 2 == 1){
            result = string(n, 'a');
        }
        else{
            // n chẵn
            result = string(n-1, 'a') + "b";
        }
        
        return result;
    }
};