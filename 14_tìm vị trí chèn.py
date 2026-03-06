class Solution(object):
    def searchInsert(self, nums, target):
        trai = 0
        phai = len(nums) - 1
        
        while trai <= phai:
            giua = (trai + phai) // 2
            
            if nums[giua] == target:
                return giua
            elif nums[giua] < target:
                trai = giua + 1
            else:
                phai = giua - 1
        
        # không tìm thấy → vị trí chèn
        return trai
solution = Solution()

print(solution.searchInsert([1,3,5,6], 5))  # 2
print(solution.searchInsert([1,3,5,6], 2))  # 1
print(solution.searchInsert([1,3,5,6], 7))  # 4
print(solution.searchInsert([1,3,5,6], 0))  # 0
