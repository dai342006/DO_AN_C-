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
    int sumOfLeftLeaves(TreeNode* root) {

        // Nếu node hiện tại rỗng thì không có gì để cộng
        if(root == nullptr)
            return 0;

        // Biến lưu tổng các lá bên trái
        int sum = 0;

        // Kiểm tra xem node hiện tại có con trái hay không
        if(root->left != nullptr){

            // Kiểm tra con trái có phải là lá hay không
            // Lá nghĩa là không có con trái và không có con phải
            if(root->left->left == nullptr && root->left->right == nullptr){

                // Nếu đúng là lá bên trái thì cộng giá trị của nó vào tổng
                sum += root->left->val;

            }else{

                // Nếu con trái không phải lá
                // thì tiếp tục duyệt cây con bên trái
                sum += sumOfLeftLeaves(root->left);
            }
        }

        // Sau đó tiếp tục duyệt cây con bên phải
        // (bên phải có thể chứa các lá bên trái của node khác)
        sum += sumOfLeftLeaves(root->right);

        // Trả về tổng các lá bên trái tìm được
        return sum;
    }
};