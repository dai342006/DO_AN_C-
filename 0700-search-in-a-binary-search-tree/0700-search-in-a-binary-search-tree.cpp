class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {

        // Nếu cây rỗng hoặc đã tìm thấy node cần tìm
        if(root == nullptr || root->val == val)
            return root;

        // Nếu giá trị cần tìm nhỏ hơn root
        // thì tìm bên cây con trái
        if(val < root->val)
            return searchBST(root->left, val);

        // Nếu giá trị cần tìm lớn hơn root
        // thì tìm bên cây con phải
        return searchBST(root->right, val);
    }
};