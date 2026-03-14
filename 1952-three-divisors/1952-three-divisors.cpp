class Solution {
public:
    bool isPrime(int x){
        if(x < 2) return false;
        for(int i = 2; i * i <= x; i++){
            if(x % i == 0) return false;
        }
        return true;
    }

    bool isThree(int n) {
        int x = sqrt(n);
        if(x * x != n) return false; 
        return isPrime(x);
    }
};