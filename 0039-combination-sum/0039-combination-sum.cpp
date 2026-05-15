class Solution {
public:

    vector<vector<int>> result; // lưu tất cả kết quả
    vector<int> path;           // lưu tổ hợp hiện tại

    void backtrack(vector<int>& candidates, int target, int start){

        // nếu tổng = target
        if(target == 0){
            result.push_back(path);
            return;
        }

        // duyệt các số từ vị trí start
        for(int i = start; i < candidates.size(); i++){

            // nếu số lớn hơn target thì bỏ
            if(candidates[i] > target) continue;

            // chọn số
            path.push_back(candidates[i]);

            // gọi đệ quy (có thể dùng lại số đó)
            backtrack(candidates, target - candidates[i], i);

            // quay lui (xóa số vừa thêm)
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        backtrack(candidates, target, 0);

        return result;
    }
};