class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        unordered_map<int, int> mp; 
        // mp[sum] = số lần xuất hiện của tổng nums1[i] + nums2[j]

        // Bước 1: duyệt nums1 và nums2
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                int sum = nums1[i] + nums2[j];
                mp[sum]++; // tăng số lần xuất hiện
            }
        }

        int count = 0;

        // Bước 2: duyệt nums3 và nums4
        for (int i = 0; i < nums3.size(); i++) {
            for (int j = 0; j < nums4.size(); j++) {
                int sum = nums3[i] + nums4[j];

                // cần tìm giá trị đối nhau để tổng = 0
                int target = -sum;

                // nếu tồn tại trong map
                if (mp.find(target) != mp.end()) {
                    count += mp[target]; 
                    // cộng số lần xuất hiện
                }
            }
        }

        return count;
    }
};