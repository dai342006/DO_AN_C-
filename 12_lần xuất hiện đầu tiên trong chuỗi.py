class Solution(object):
    def strStr(self, haystack, needle):
        if needle == "":
            return 0
        
        do_dai_haystack = len(haystack)
        do_dai_needle = len(needle)
        
        for i in range(do_dai_haystack - do_dai_needle + 1):
            if haystack[i:i + do_dai_needle] == needle:
                return i
        
        return -1
solution = Solution()

print(solution.strStr("sadbutsad", "sad"))   # 0
print(solution.strStr("leetcode", "leeto")) # -1
