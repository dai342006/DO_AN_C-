#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;

        int k = 2;  // vị trí ghi

        for (int i = 2; i < n; i++) {
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
int main() {
    Solution s;
    vector<int> nums = {1,1,1,2,2,3};

    int k = s.removeDuplicates(nums);

    cout << "k = " << k << endl;

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
