#include <bits/stdc++.h> 
using namespace std;     

/* Cấu trúc của một node trong cây nhị phân */
struct TreeNode {
    int val;          // Giá trị của node
    TreeNode* left;   // Con bên trái
    TreeNode* right;  // Con bên phải

    // Hàm khởi tạo node
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    // Khi tạo node mới thì:
    // val = x
    // left = NULL
    // right = NULL
};

/* Class chứa thuật toán */
class Solution {
public:

    // Hàm tính độ sâu tối đa của cây nhị phân
    int maxDepth(TreeNode* root) {

        // Nếu node rỗng thì độ sâu = 0
        if (root == NULL) return 0;

        // Tính độ sâu của cây con bên trái
        int left = maxDepth(root->left);

        // Tính độ sâu của cây con bên phải
        int right = maxDepth(root->right);

        // Lấy độ sâu lớn hơn giữa trái và phải rồi cộng thêm 1 (node hiện tại)
        return 1 + max(left, right);
    }
};

int main() {

    // Tạo node gốc của cây
    TreeNode* root = new TreeNode(1);

    // Tạo node bên trái của root
    root->left = new TreeNode(2);

    // Tạo node bên phải của root
    root->right = new TreeNode(3);

    // Tạo node con bên trái của node 2
    root->left->left = new TreeNode(4);

    // Tạo node con bên phải của node 2
    root->left->right = new TreeNode(5);

    /*
        Cây tạo ra sẽ như sau

              1
             / \
            2   3
           / \
          4   5
    */

    // Tạo object để gọi hàm
    Solution solution;

    // In độ sâu tối đa của cây
    cout << "Do sau toi da cua cay nhi phan la: "
         << solution.maxDepth(root) << endl;

    return 0; // Kết thúc chương trình
}