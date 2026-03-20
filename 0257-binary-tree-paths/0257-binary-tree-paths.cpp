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

    // Hàm DFS để duyệt cây và xây dựng đường đi
    void dfs(TreeNode* root, string path, vector<string>& result){

        // Nếu node rỗng thì dừng
        if(root == nullptr)
            return;

        // Thêm giá trị node hiện tại vào path
        path += to_string(root->val);

        // Nếu node là lá (không có con trái và phải)
        if(root->left == nullptr && root->right == nullptr){

            // Lưu đường đi vào result
            result.push_back(path);
            return;
        }

        // Nếu chưa phải lá thì thêm mũi tên
        path += "->";

        // Duyệt cây con bên trái
        dfs(root->left, path, result);

        // Duyệt cây con bên phải
        dfs(root->right, path, result);
    }

    vector<string> binaryTreePaths(TreeNode* root) {

        vector<string> result; // lưu tất cả đường đi

        // gọi DFS bắt đầu từ root
        dfs(root, "", result);

        return result;
    }
};