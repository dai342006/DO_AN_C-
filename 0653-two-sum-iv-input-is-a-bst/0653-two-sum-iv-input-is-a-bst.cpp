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

    bool dfs(TreeNode* root, int k, unordered_set<int>& s){

        // Nếu node rỗng thì không làm gì
        if(root == nullptr)
            return false;

        // Kiểm tra nếu tồn tại số k - root->val
        if(s.count(k - root->val))
            return true;

        // Lưu giá trị node hiện tại vào set
        s.insert(root->val);

        // Tìm tiếp ở cây con trái hoặc phải
        return dfs(root->left, k, s) || dfs(root->right, k, s);
    }

    bool findTarget(TreeNode* root, int k) {

        unordered_set<int> s;  // lưu các giá trị đã gặp

        return dfs(root, k, s);
    }
};