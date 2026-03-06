def isPalindrome(x: int) -> bool:#kiểm tra số đối xứng
    # Số âm không phải số đối xứng
    if x < 0:
        return False

    s = str(x)
    return s == s[::-1]


# Test
x = int(input("nhap so can kiem tra: "))
print(isPalindrome(x))
