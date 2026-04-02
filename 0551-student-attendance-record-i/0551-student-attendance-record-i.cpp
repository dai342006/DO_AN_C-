class Solution {
public:
    bool checkRecord(string s) {

        int countA = 0;   // đếm số lần vắng mặt 'A'
        int countL = 0;   // đếm số lần 'L' liên tiếp

        // duyệt từng ký tự trong chuỗi
        for(int i = 0; i < s.length(); i++){

            // nếu là 'A'
            if(s[i] == 'A'){
                countA++;       // tăng số lần vắng
                countL = 0;     // reset L liên tiếp

                // nếu vắng từ 2 lần trở lên → không đạt
                if(countA >= 2){
                    return false;
                }
            }

            // nếu là 'L'
            else if(s[i] == 'L'){
                countL++;       // tăng số L liên tiếp

                // nếu có 3 L liên tiếp → không đạt
                if(countL >= 3){
                    return false;
                }
            }

            // nếu là 'P' (Present)
            else{
                countL = 0;     // reset L liên tiếp
            }
        }

        // nếu không vi phạm điều kiện
        return true;
    }
};