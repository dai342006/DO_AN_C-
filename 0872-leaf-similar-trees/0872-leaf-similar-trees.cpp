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

    // Hàm DFS dùng để tìm các node lá của cây
    void dfs(TreeNode* root, vector<int>& leaves){

        // Nếu node rỗng thì dừng lại
        if(root == nullptr)
            return;

        // Kiểm tra nếu node hiện tại là node lá
        // Node lá là node không có con trái và con phải
        if(root->left == nullptr && root->right == nullptr){
            // Lưu giá trị node lá vào vector
            leaves.push_back(root->val);
        }

        // Duyệt tiếp cây con bên trái
        dfs(root->left, leaves);

        // Duyệt tiếp cây con bên phải
        dfs(root->right, leaves);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        // Tạo hai vector để lưu các node lá của hai cây
        vector<int> a;
        vector<int> b;

        // Lấy danh sách node lá của cây thứ nhất
        dfs(root1, a);

        // Lấy danh sách node lá của cây thứ hai
        dfs(root2, b);

        // So sánh hai danh sách node lá
        // Nếu giống nhau hoàn toàn thì trả về true
        return a == b;
    }
};