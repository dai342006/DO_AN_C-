class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {

        unordered_map<int,int> first, last, count;

        int n = nums.size();

        for(int i = 0; i < n; i++){
            int x = nums[i];
            if(first.find(x) == first.end()) first[x] = i; // lưu index đầu tiên
            last[x] = i;                                   // lưu index cuối cùng
            count[x]++;                                    // đếm số lần xuất hiện
        }

        int degree = 0;
        for(auto &p : count)
            degree = max(degree, p.second); // tìm degree

        int minLength = n;
        for(auto &p : count){
            if(p.second == degree){
                int len = last[p.first] - first[p.first] + 1;
                minLength = min(minLength, len);
            }
        }

        return minLength;
    }
};