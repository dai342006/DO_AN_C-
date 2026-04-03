class Solution {
public:
    int minDepth(TreeNode* root) {
        // Cây rỗng
        if (root == nullptr) return 0;

        // Nếu không có con trái
        if (root->left == nullptr)
            return 1 + minDepth(root->right);

        // Nếu không có con phải
        if (root->right == nullptr)
            return 1 + minDepth(root->left);

        // Có đủ 2 con
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};