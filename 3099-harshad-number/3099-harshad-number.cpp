class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {

        int sum = 0;
        int temp = x;

        // tính tổng các chữ số
        while(temp > 0){
            sum += temp % 10;
            temp /= 10;
        }

        // kiểm tra Harshad
        if(x % sum == 0){
            return sum;
        }

        return -1;
    }
};