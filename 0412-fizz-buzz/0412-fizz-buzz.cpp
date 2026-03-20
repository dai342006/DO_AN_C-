class Solution {
public:
    vector<string> fizzBuzz(int n) {

        // tạo vector để lưu kết quả
        vector<string> result;

        // duyệt từ 1 đến n
        for(int i = 1; i <= n; i++){

            // nếu chia hết cho cả 3 và 5
            if(i % 3 == 0 && i % 5 == 0){
                result.push_back("FizzBuzz");
            }

            // nếu chỉ chia hết cho 3
            else if(i % 3 == 0){
                result.push_back("Fizz");
            }

            // nếu chỉ chia hết cho 5
            else if(i % 5 == 0){
                result.push_back("Buzz");
            }

            // nếu không chia hết cho 3 hoặc 5
            else{
                result.push_back(to_string(i));
            }
        }

        // trả về kết quả
        return result;
    }
};