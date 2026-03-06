def isValid(s):
    # Tạo một ngăn xếp rỗng
    stack = []
    # Tạo một bảng ánh xạ giữa dấu ngoặc đóng và mở
    mapping = {')': '(', '}': '{', ']': '['}

    # Duyệt qua từng ký tự trong chuỗi
    for char in s:
        # Nếu là dấu ngoặc đóng
        if char in mapping:
            # Lấy dấu ngoặc mở ở đầu ngăn xếp (nếu có)
            top_element = stack.pop() if stack else '#'
            # Kiểm tra xem có khớp với dấu ngoặc đóng không
            if mapping[char] != top_element:
                return False
        else:
            # Nếu là dấu ngoặc mở, thêm vào ngăn xếp
            stack.append(char)

    # Kiểm tra ngăn xếp có rỗng không (nếu rỗng thì hợp lệ)
    return not stack

# Kiểm tra
s = input("Nhập chuỗi dấu ngoặc: ")
if isValid(s):
    print("Chuỗi hợp lệ.")
else:
    print("Chuỗi không hợp lệ.")