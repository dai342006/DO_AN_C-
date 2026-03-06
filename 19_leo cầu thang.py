class Solution(object):
    def climbStairs(self, n):
        # Trường hợp cơ bản
        if n == 1:
            return 1
        if n == 2:
            return 2
        
        # so_cach_truoc_1 = f(n-1)
        so_cach_truoc_1 = 2
        # so_cach_truoc_2 = f(n-2)
        so_cach_truoc_2 = 1
        
        # Tính từ bậc 3 đến n
        for i in range(3, n + 1):
            so_cach_hien_tai = so_cach_truoc_1 + so_cach_truoc_2
            so_cach_truoc_2 = so_cach_truoc_1
            so_cach_truoc_1 = so_cach_hien_tai
        
        return so_cach_truoc_1
solution = Solution()

print(solution.climbStairs(2))  # 2
print(solution.climbStairs(3))  # 3
print(solution.climbStairs(4))  # 5
