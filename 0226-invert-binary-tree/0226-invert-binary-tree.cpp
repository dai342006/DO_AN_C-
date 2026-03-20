/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        // Nếu node rỗng thì không cần đảo
        if(root == nullptr)
            return nullptr;

        // Hoán đổi cây con trái và cây con phải
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        // Tiếp tục đảo cây con bên trái
        invertTree(root->left);

        // Tiếp tục đảo cây con bên phải
        invertTree(root->right);

        // Trả về root sau khi đã đảo
        return root;
    }
};