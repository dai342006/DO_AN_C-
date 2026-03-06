#include <bits/stdc++.h>
using namespace std;

int tongBaSoGanNhat(vector<int>& nums, int mucTieu) {
    sort(nums.begin(), nums.end());
    int n = nums.size();

    // Khởi tạo tổng ban đầu
    int tongGanNhat = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < n - 2; i++) {
        int trai = i + 1;
        int phai = n - 1;

        while (trai < phai) {
            int tongHienTai = nums[i] + nums[trai] + nums[phai];

            // Nếu tổng hiện tại gần mục tiêu hơn thì cập nhật
            if (abs(tongHienTai - mucTieu) < abs(tongGanNhat - mucTieu)) {
                tongGanNhat = tongHienTai;
            }

            if (tongHienTai < mucTieu) {
                trai++;
            } else if (tongHienTai > mucTieu) {
                phai--;
            } else {
                // Nếu bằng luôn mục tiêu thì khỏi tìm nữa
                return tongHienTai;
            }
        }
    }

    return tongGanNhat;
}

int main() {
    vector<int> nums = {-1, 8, 1, -4};
    int mucTieu = 1;
cout <<"=========================================";
    cout << ("tong 3 so: ",tongBaSoGanNhat(nums, mucTieu));
    return 0;
}
