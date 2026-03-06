#include <bits/stdc++.h>   // Thư viện tổng hợp (vector, string, iostream,...)
using namespace std;

// Class Solution theo đúng chuẩn LeetCode
class Solution {
public:
    // Hàm đơn giản hóa đường dẫn
    string simplifyPath(string path) {

        // Vector dùng như stack để lưu các thư mục hợp lệ
        vector<string> nganXep;

        // Biến tạm để lưu tên thư mục đang đọc
        string thuMuc = "";

        // Duyệt từng ký tự trong path
        // Duyệt tới <= length để xử lý cả thư mục cuối
        for (int i = 0; i <= path.length(); i++) {

            // Nếu gặp dấu '/' hoặc đã tới cuối chuỗi
            if (i == path.length() || path[i] == '/') {

                // Trường hợp thư mục rỗng hoặc "."
                // → bỏ qua vì là thư mục hiện tại
                if (thuMuc == "" || thuMuc == ".") {
                    // Không làm gì
                }

                // Trường hợp ".." → quay về thư mục cha
                else if (thuMuc == "..") {
                    if (!nganXep.empty()) {
                        nganXep.pop_back(); // Xóa thư mục trước đó
                    }
                }

                // Trường hợp là tên thư mục hợp lệ
                else {
                    nganXep.push_back(thuMuc);
                }

                // Reset để đọc thư mục tiếp theo
                thuMuc = "";
            }
            else {
                // Ghép ký tự vào tên thư mục hiện tại
                thuMuc += path[i];
            }
        }

        // ===== GHÉP KẾT QUẢ =====
        // Đường dẫn chuẩn luôn bắt đầu bằng "/"
        string ketQua = "/";

        // Ghép các thư mục trong stack lại
        for (int i = 0; i < nganXep.size(); i++) {
            ketQua += nganXep[i];

            // Thêm "/" nếu chưa phải thư mục cuối
            if (i < nganXep.size() - 1) {
                ketQua += "/";
            }
        }

        // Trả về đường dẫn đã được đơn giản hóa
        return ketQua;
    }
};

// Hàm main để test trên máy (KHÔNG dùng khi nộp LeetCode)
int main() {
    Solution solution;

    // Đường dẫn test
    string path = "/a/./b/../../c/";

    // In đường phân cách
    cout << "===================================" << endl;

    // Gọi hàm và in kết quả
    cout << solution.simplifyPath(path) << endl; // Output: /c

    return 0;
}
