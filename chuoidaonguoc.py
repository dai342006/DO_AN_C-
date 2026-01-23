# Bài 2: Đảo ngược chuỗi

# Nhập chuỗi từ bàn phím
s = input("Nhập chuỗi: ")

# B1: Tự đếm độ dài chuỗi (không dùng len)
length = 0
for ch in s:           # duyệt từng ký tự trong chuỗi s
    length += 1        # mỗi lần gặp ký tự thì tăng độ dài thêm 1

# B2: Tạo chuỗi đảo ngược
rev = ""               # khởi tạo chuỗi đảo ngược rỗng
i = length - 1         # bắt đầu từ vị trí cuối cùng trong chuỗi
while i >= 0:          # lặp cho đến khi i < 0
    rev = rev + s[i]   # nối ký tự tại vị trí i vào chuỗi rev
    i -= 1             # giảm i xuống để duyệt ngược về đầu

# B3: In kết quả
print("Chuỗi đảo ngược:", rev)
