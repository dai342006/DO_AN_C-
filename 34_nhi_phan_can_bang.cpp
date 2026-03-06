#include <bits/stdc++.h> 
using namespace std;

/* Cấu trúc node của cây nhị phân */
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:

    /* Hàm tính chiều cao của cây */
    int height(TreeNode* root) {

        // Nếu node rỗng -> chiều cao = 0
        if (root == NULL)
            return 0;

        // Tính chiều cao cây trái
        int left = height(root->left);

        // Tính chiều cao cây phải
        int right = height(root->right);

        // Lấy chiều cao lớn hơn + 1
        return 1 + max(left, right);
    }

    /* Hàm kiểm tra cây có cân bằng không */
    bool isBalanced(TreeNode* root) {

        // Nếu cây rỗng -> luôn cân bằng
        if (root == NULL)
            return true;

        // Lấy chiều cao trái
        int left = height(root->left);

        // Lấy chiều cao phải
        int right = height(root->right);

        // Kiểm tra điều kiện cân bằng
        if (abs(left - right) > 1)
            return false;

        // Kiểm tra tiếp cây con
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
int main() {

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution s;

    if (s.isBalanced(root))
        cout << "true";
    else
        cout << "false";
}