class Solution {
public:

    long secondMin = LONG_MAX; // lưu giá trị nhỏ thứ 2
    int minVal;                // giá trị nhỏ nhất

    void dfs(TreeNode* node){
        if(node == nullptr) return;

        // nếu node > minVal thì có thể là ứng viên secondMin
        if(node->val > minVal && node->val < secondMin){
            secondMin = node->val;
        }

        // duyệt tiếp cây
        dfs(node->left);
        dfs(node->right);
    }

    int findSecondMinimumValue(TreeNode* root) {

        minVal = root->val;

        dfs(root);

        // nếu không tìm được
        if(secondMin == LONG_MAX)
            return -1;

        return secondMin;
    }
};