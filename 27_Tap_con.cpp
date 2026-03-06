#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> result;

    void backtrack(vector<int>& nums, vector<int>& subset, int index) {
        // Lưu tập con hiện tại
        result.push_back(subset);

        for (int i = index; i < nums.size(); i++) {
            subset.push_back(nums[i]);        // chọn phần tử
            backtrack(nums, subset, i + 1);  // gọi đệ quy
            subset.pop_back();               // bỏ chọn (quay lui)
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        backtrack(nums, subset, 0);
        return result;
    }
};
int main() {
    Solution s;
    vector<int> nums = {1,2,3};
    
    vector<vector<int>> ans = s.subsets(nums);

    for (auto v : ans) {
        cout << "[";
        for (int x : v) {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}
