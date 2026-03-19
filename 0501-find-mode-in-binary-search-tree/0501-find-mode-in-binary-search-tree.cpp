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

    // Hàm DFS để duyệt cây và đếm số lần xuất hiện
    void dfs(TreeNode* root, unordered_map<int,int>& freq){

        if(root == nullptr)
            return;

        // tăng số lần xuất hiện của giá trị
        freq[root->val]++;

        // duyệt cây con trái
        dfs(root->left, freq);

        // duyệt cây con phải
        dfs(root->right, freq);
    }

    vector<int> findMode(TreeNode* root) {

        unordered_map<int,int> freq; // lưu tần suất
        vector<int> result;

        // duyệt cây và đếm
        dfs(root, freq);

        int maxFreq = 0;

        // tìm tần suất lớn nhất
        for(auto &p : freq){
            maxFreq = max(maxFreq, p.second);
        }

        // lấy các giá trị có tần suất lớn nhất
        for(auto &p : freq){
            if(p.second == maxFreq)
                result.push_back(p.first);
        }

        return result;
    }
};