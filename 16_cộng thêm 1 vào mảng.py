class Solution(object):
    def plusOne(self, digits):
        n = len(digits)
        
        # duyệt từ phải sang trái
        for i in range(n - 1, -1, -1):
            if digits[i] < 9:
                digits[i] += 1
                return digits
            else:
                digits[i] = 0
        
        # nếu tất cả đều là 9
        return [1] + digits
solution = Solution()

print(solution.plusOne([1,2,3]))   # [1,2,4]
print(solution.plusOne([4,3,2,1])) # [4,3,2,2]
print(solution.plusOne([9]))       # [1,0]
print(solution.plusOne([9,9,9]))   # [1,0,0,0]
