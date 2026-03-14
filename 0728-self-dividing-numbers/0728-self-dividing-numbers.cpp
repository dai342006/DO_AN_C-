class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> result; // lưu các số tự chia hết
        
        for(int i = left; i <= right; i++) { // duyệt từ left đến right
            int num = i;      // lưu số để tách chữ số
            bool ok = true;   // giả sử số hợp lệ
            
            while(num > 0) {
                int digit = num % 10; // lấy chữ số cuối
                
                // nếu chữ số = 0 hoặc không chia hết
                if(digit == 0 || i % digit != 0){
                    ok = false;
                    break;
                }
                
                num /= 10; // bỏ chữ số cuối
            }
            
            if(ok) result.push_back(i); // thêm vào kết quả
        }
        
        return result; // trả về danh sách
    }
};