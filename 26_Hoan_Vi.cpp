#include <iostream>   // Thư viện nhập xuất (cout, endl)
#include <vector>     // Thư viện vector
using namespace std;

// Class Solution theo đúng chuẩn LeetCode
class Solution {
public:
    // Lưu tất cả các hoán vị tìm được
    vector<vector<int>> ketQua;

    // Lưu hoán vị đang xây dựng
    vector<int> hoanViHienTai;

    // Đánh dấu phần tử nào trong nums đã được dùng
    vector<bool> daDung;

    // Hàm quay lui để tạo hoán vị
    void quayLui(vector<int>& nums) {

        // Nếu hoán vị hiện tại đã đủ số phần tử
        if (hoanViHienTai.size() == nums.size()) {
            // Lưu hoán vị này vào kết quả
            ketQua.push_back(hoanViHienTai);
            return; // Dừng nhánh đệ quy này
        }

        // Duyệt qua tất cả các phần tử trong nums
        for (int i = 0; i < nums.size(); i++) {

            // Nếu phần tử nums[i] chưa được dùng
            if (daDung[i] == false) {

                // Đánh dấu là đã dùng
                daDung[i] = true;

                // Thêm nums[i] vào hoán vị hiện tại
                hoanViHienTai.push_back(nums[i]);

                // Gọi đệ quy để chọn số tiếp theo
                quayLui(nums);

                // ===== QUAY LUI =====
                // Bỏ phần tử vừa thêm
                hoanViHienTai.pop_back();

                // Đánh dấu lại là chưa dùng
                daDung[i] = false;
            }
        }
    }

    // Hàm chính để LeetCode gọi
    vector<vector<int>> permute(vector<int>& nums) {

        // Khởi tạo mảng đánh dấu (ban đầu chưa dùng số nào)
        daDung.resize(nums.size(), false);

        // Bắt đầu quá trình quay lui
        quayLui(nums);

        // Trả về tất cả hoán vị
        return ketQua;
    }
};

// Hàm main để test trên máy (KHÔNG dùng trên LeetCode)
int main() {
    Solution solution;

    // Mảng đầu vào
    vector<int> nums = {1, 2, 3};

    // Gọi hàm tạo hoán vị
    vector<vector<int>> result = solution.permute(nums);

    // In kết quả ra màn hình
    cout << "All permutations:" << endl;
    for (const auto& perm : result) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
