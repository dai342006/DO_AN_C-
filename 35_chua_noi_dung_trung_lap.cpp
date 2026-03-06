#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        set<int> s; // set dùng để lưu các số đã xuất hiện

        for(int num : nums) { // duyệt từng phần tử trong mảng

            // nếu số đã có trong set -> trùng
            if(s.count(num)) {
                return true;
            }

            // nếu chưa có thì thêm vào set
            s.insert(num);
        }

        // nếu duyệt hết mà không trùng
        return false;
    }
};

int main() {

    vector<int> nums = {1,2,3,1};

    Solution s;

    if(s.containsDuplicate(nums))
        cout << "true";
    else
        cout << "false";
return 0;
}