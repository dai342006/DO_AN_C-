class Solution {
public:

    // Hàm DFS để duyệt cây theo postorder
    void dfs(TreeNode* root, vector<int>& result){

        // Nếu node rỗng thì dừng
        if(root == nullptr)
            return;

        // 1. Duyệt cây con bên trái
        dfs(root->left, result);

        // 2. Duyệt cây con bên phải
        dfs(root->right, result);

        // 3. Thêm giá trị node hiện tại vào kết quả
        result.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {

        vector<int> result; // vector lưu kết quả

        // gọi hàm DFS
        dfs(root, result);

        return result;
    }
};