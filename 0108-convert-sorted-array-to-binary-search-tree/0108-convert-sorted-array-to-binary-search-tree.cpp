class Solution {
public:

    // Hàm đệ quy tạo cây từ đoạn [left, right]
    TreeNode* build(vector<int>& nums, int left, int right) {
        // Nếu không còn phần tử
        if (left > right) return nullptr;

        // Lấy phần tử giữa
        int mid = (left + right) / 2;

        // Tạo node gốc
        TreeNode* root = new TreeNode(nums[mid]);

        // Xây cây con bên trái
        root->left = build(nums, left, mid - 1);

        // Xây cây con bên phải
        root->right = build(nums, mid + 1, right);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // Gọi hàm build với toàn bộ mảng
        return build(nums, 0, nums.size() - 1);
    }
};