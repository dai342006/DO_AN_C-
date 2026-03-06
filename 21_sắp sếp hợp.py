class Solution(object):
    def merge(self, nums1, m, nums2, n):
        # Con trỏ trỏ vào phần tử cuối của nums1 (phần hợp lệ)
        i = m - 1
        # Con trỏ trỏ vào phần tử cuối của nums2
        j = n - 1
        # Con trỏ trỏ vào vị trí cuối cùng của nums1
        k = m + n - 1
        
        # Gộp từ cuối về đầu
        while i >= 0 and j >= 0:
            if nums1[i] > nums2[j]:
                nums1[k] = nums1[i]
                i -= 1
            else:
                nums1[k] = nums2[j]
                j -= 1
            k -= 1
        
        # Nếu nums2 còn phần tử thì chép nốt vào nums1
        while j >= 0:
            nums1[k] = nums2[j]
            j -= 1
            k -= 1
nums1 = [1,2,3,0,0,0]
m = 3
nums2 = [2,5,6]
n = 3

solution = Solution()
solution.merge(nums1, m, nums2, n)

print(nums1)
