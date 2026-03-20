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

    // Hàm kiểm tra hai cây có giống nhau không
    bool isSameTree(TreeNode* a, TreeNode* b){

        // Nếu cả hai đều rỗng → giống nhau
        if(a == nullptr && b == nullptr)
            return true;

        // Nếu một cái rỗng một cái không → khác nhau
        if(a == nullptr || b == nullptr)
            return false;

        // Nếu giá trị node khác → không giống
        if(a->val != b->val)
            return false;

        // Kiểm tra tiếp cây con trái và phải
        return isSameTree(a->left, b->left) &&
               isSameTree(a->right, b->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        // Nếu root rỗng → không thể chứa subtree
        if(root == nullptr)
            return false;

        // Nếu hai cây giống nhau → tìm thấy subtree
        if(isSameTree(root, subRoot))
            return true;

        // Kiểm tra subtree ở cây con trái hoặc phải
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};