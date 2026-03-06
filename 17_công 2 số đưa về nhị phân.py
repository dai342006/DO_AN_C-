class Solution(object):
    def addBinary(self, a, b):
        # Con trỏ duyệt chuỗi a và b từ phải sang trái
        i = len(a) - 1
        j = len(b) - 1
        
        nho = 0              # biến nhớ khi cộng
        ket_qua = []         # lưu các bit kết quả
        
        # Duyệt khi còn chữ số hoặc còn nhớ
        while i >= 0 or j >= 0 or nho:
            
            # Lấy bit hiện tại của a (nếu hết thì = 0)
            if i >= 0:
                bit_a = int(a[i])
            else:
                bit_a = 0
            
            # Lấy bit hiện tại của b (nếu hết thì = 0)
            if j >= 0:
                bit_b = int(b[j])
            else:
                bit_b = 0
            
            # Tổng của hai bit và nhớ
            tong = bit_a + bit_b + nho
            
            # Bit kết quả là phần dư chia 2
            ket_qua.append(str(tong % 2))
            
            # Cập nhật nhớ
            nho = tong // 2
            
            # Giảm con trỏ
            i -= 1
            j -= 1
        
        # Đảo ngược kết quả vì ta cộng từ phải sang trái
        ket_qua.reverse()
        
        return "".join(ket_qua)
solution = Solution()

print(solution.addBinary("11", "1"))      # "100"
print(solution.addBinary("1010", "1011")) # "10101"
