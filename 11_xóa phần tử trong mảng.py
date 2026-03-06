class Solution(object):
    def removeElement(self, nums, val):
        k = 0  # số phần tử không bằng val
        
        for i in range(len(nums)):
            if nums[i] != val:
                nums[k] = nums[i]
                k += 1
        
        return k
nums = [3,2,2,3]
val = 3

solution = Solution()
k = solution.removeElement(nums, val)

print("k =", k)
print("Mảng sau khi xóa:", nums[:k])