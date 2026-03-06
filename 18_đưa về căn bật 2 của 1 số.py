class Solution(object):
    def mySqrt(self, x):
        # Trường hợp đặc biệt
        if x < 2:
            return x
        
        trai = 1            # biên trái
        phai = x // 2       # biên phải
        ket_qua = 0         # lưu kết quả tạm
        
        while trai <= phai:
            giua = (trai + phai) // 2
            binh_phuong = giua * giua
            
            if binh_phuong == x:
                return giua
            elif binh_phuong < x:
                ket_qua = giua      # giua còn hợp lệ
                trai = giua + 1
            else:
                phai = giua - 1
        
        return ket_qua
solution = Solution()

print(solution.mySqrt(4))   # 2
print(solution.mySqrt(8))   # 2
print(solution.mySqrt(0))   # 0
print(solution.mySqrt(1))   # 1
