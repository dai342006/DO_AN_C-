#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    // Số âm không thể là palindrome
    if (x < 0) return false;

    int original = x; // Lưu giá trị ban đầu của x
    int reversed = 0;

    // Đảo ngược số
    while (x != 0) {
        int digit = x % 10;

        // Kiểm tra tràn số
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
            return false;
        }

        reversed = reversed * 10 + digit;
        x /= 10;
    }

    // Kiểm tra nếu số đảo ngược bằng số ban đầu
    return original == reversed;
}

int main() {
    int x;
    cout << "Nhap so nguyen: ";
    cin >> x;

    if (isPalindrome(x)) {
        cout << x << " la so palindrome.\n";
    } else {
        cout << x << " khong phai la so palindrome.\n";
    }

    return 0;
}