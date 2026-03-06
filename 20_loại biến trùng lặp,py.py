class ListNode(object):
    def __init__(self, gia_tri=0, tiep_theo=None):
        self.gia_tri = gia_tri
        self.tiep_theo = tiep_theo


class Solution(object):
    def deleteDuplicates(self, head):
        nut_hien_tai = head
        
        # duyệt danh sách liên kết
        while nut_hien_tai and nut_hien_tai.tiep_theo:
            # nếu trùng nhau thì bỏ node sau
            if nut_hien_tai.gia_tri == nut_hien_tai.tiep_theo.gia_tri:
                nut_hien_tai.tiep_theo = nut_hien_tai.tiep_theo.tiep_theo
            else:
                nut_hien_tai = nut_hien_tai.tiep_theo
        
        return head
# Hàm tạo danh sách liên kết
def tao_danh_sach_lien_ket(gia_tri):
    nut_gia = ListNode(0)
    hien_tai = nut_gia
    for so in gia_tri:
        hien_tai.tiep_theo = ListNode(so)
        hien_tai = hien_tai.tiep_theo
    return nut_gia.tiep_theo

# Hàm in danh sách
def in_danh_sach(head):
    while head:
        print(head.gia_tri, end=" -> ")
        head = head.tiep_theo
    print("None")

# Test
head = tao_danh_sach_lien_ket([1,1,2,3,3])
solution = Solution()
ket_qua = solution.deleteDuplicates(head)

in_danh_sach(ket_qua)
