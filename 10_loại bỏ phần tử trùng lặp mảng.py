class Solution(object):
    def removeDuplicates(self, nums):
        if len(nums) == 0:
            return 0
        
        k = 1  # số lượng phần tử duy nhất
        
        for i in range(1, len(nums)):
            if nums[i] != nums[i - 1]:
                nums[k] = nums[i]
                k += 1
        
        return k
nums = [0,0,1,1,1,2,2,3,3,4]

solution = Solution()
k = solution.removeDuplicates(nums)

print("k =", k)
print("Các phần tử duy nhất:", nums[:k])
