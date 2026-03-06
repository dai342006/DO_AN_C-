def longestCommonPrefix(strs):
    # Nếu mảng rỗng
    if not strs:
        return ""

    prefix = strs[0]  # Lấy chuỗi đầu tiên làm tiền tố

    for s in strs[1:]:
        i = 0
        # So sánh từng ký tự
        while i < len(prefix) and i < len(s) and prefix[i] == s[i]:
            i += 1
        prefix = prefix[:i]  # Cắt lại tiền tố
        if prefix == "":
            return ""

    return prefix


# Test
strs = ["flower","flow","flight"]
print(longestCommonPrefix(strs))
