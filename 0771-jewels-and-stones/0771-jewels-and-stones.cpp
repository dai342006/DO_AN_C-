class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int count = 0;  // biến đếm số viên đá là đá quý

        // duyệt từng ký tự trong chuỗi stones
        for(char s : stones){

            // duyệt từng ký tự trong chuỗi jewels
            for(char j : jewels){

                // nếu viên đá s trùng với một loại đá quý j
                if(s == j){
                    count++;    // tăng số lượng đá quý lên 1
                    break;      // thoát vòng lặp vì đã tìm thấy
                }
            }
        }

        // trả về tổng số đá quý tìm được
        return count;
    }
};