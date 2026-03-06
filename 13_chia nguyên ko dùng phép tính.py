class Solution(object):
    def divide(self, dividend, divisor):
        # Giới hạn 32-bit
        MIN_INT = -2**31
        MAX_INT = 2**31 - 1
        
        # Trường hợp tràn
        if dividend == MIN_INT and divisor == -1:
            return MAX_INT
        
        # Xác định dấu
        am = (dividend < 0) != (divisor < 0)
        
        # Lấy giá trị tuyệt đối
        so_bi_chia = abs(dividend)
        so_chia = abs(divisor)
        
        thuong = 0
        
        # Trừ liên tiếp
        while so_bi_chia >= so_chia:
            so_bi_chia -= so_chia
            thuong += 1
        
        # Gắn dấu
        if am:
            thuong = -thuong
        
        return thuong
solution = Solution()

print(solution.divide(10, 3))    # 3
print(solution.divide(7, -3))    # -2
print(solution.divide(0, 1))     # 0
print(solution.divide(1, 1))     # 1
