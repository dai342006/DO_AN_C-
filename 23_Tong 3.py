class Solution(object):
    def threeSum(self, nums):
        # Sắp xếp mảng
        nums.sort()
        ket_qua = []
        n = len(nums)

        # Duyệt từng phần tử làm phần tử đầu tiên
        for i in range(n - 2):
            # Bỏ qua số trùng nhau
            if i > 0 and nums[i] == nums[i - 1]:
                continue

            trai = i + 1
            phai = n - 1

            while trai < phai:
                tong = nums[i] + nums[trai] + nums[phai]

                if tong == 0:
                    # Lưu bộ ba hợp lệ
                    ket_qua.append([nums[i], nums[trai], nums[phai]])

                    # Bỏ qua các số trùng nhau
                    while trai < phai and nums[trai] == nums[trai + 1]:
                        trai += 1
                    while trai < phai and nums[phai] == nums[phai - 1]:
                        phai -= 1

                    # Di chuyển cả hai con trỏ
                    trai += 1
                    phai -= 1

                elif tong < 0:
                    trai += 1
                else:
                    phai -= 1

        return ket_qua
nums = [-1, 0, 1, 2, -1, -4]
sol = Solution()
print(sol.threeSum(nums))
