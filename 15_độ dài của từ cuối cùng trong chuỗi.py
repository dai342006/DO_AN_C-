class Solution(object):
    def lengthOfLastWord(self, s):
        s = s.strip()          # bỏ khoảng trắng đầu/cuối
        cac_tu = s.split()     # tách thành các từ
        return len(cac_tu[-1]) # độ dài từ cuối
solution = Solution()

print(solution.lengthOfLastWord("Hello World"))        # 5
print(solution.lengthOfLastWord("   fly me   to   the moon  "))  # 4
print(solution.lengthOfLastWord("luffy is still joyboy"))        # 6
