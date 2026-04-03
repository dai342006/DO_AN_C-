class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        // Cây rỗng → không có đường đi
        if (root == nullptr) return false;

        // Nếu là node lá
        if (root->left == nullptr && root->right == nullptr) {
            return targetSum == root->val;
        }

        // Trừ giá trị node hiện tại
        int remain = targetSum - root->val;

        // Kiểm tra 2 nhánh
        return hasPathSum(root->left, remain) || 
               hasPathSum(root->right, remain);
    }
};