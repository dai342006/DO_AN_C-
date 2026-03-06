class ListNode:
    def __init__(self, gia_tri=0, tiep_theo=None):
        self.gia_tri = gia_tri
        self.tiep_theo = tiep_theo


class Solution:
    def mergeTwoLists(self, danh_sach_1, danh_sach_2):
        nut_gia = ListNode(0)      # node giả
        hien_tai = nut_gia
        
        while danh_sach_1 and danh_sach_2:
            if danh_sach_1.gia_tri <= danh_sach_2.gia_tri:
                hien_tai.tiep_theo = danh_sach_1
                danh_sach_1 = danh_sach_1.tiep_theo
            else:
                hien_tai.tiep_theo = danh_sach_2
                danh_sach_2 = danh_sach_2.tiep_theo
            
            hien_tai = hien_tai.tiep_theo
        
        # nối phần còn lại
        if danh_sach_1:
            hien_tai.tiep_theo = danh_sach_1
        else:
            hien_tai.tiep_theo = danh_sach_2
        
        return nut_gia.tiep_theo


# Hàm tạo danh sách liên kết từ list Python
def tao_danh_sach_lien_ket(gia_tri):
    nut_gia = ListNode(0)
    hien_tai = nut_gia
    for so in gia_tri:
        hien_tai.tiep_theo = ListNode(so)
        hien_tai = hien_tai.tiep_theo
    return nut_gia.tiep_theo


# Hàm in danh sách liên kết
def in_danh_sach_lien_ket(dau):
    while dau:
        print(dau.gia_tri, end=" -> ")
        dau = dau.tiep_theo
    print("None")


# Tạo hai danh sách
danh_sach_1 = tao_danh_sach_lien_ket([1, 2, 4])
danh_sach_2 = tao_danh_sach_lien_ket([1, 3, 4])

# Ghép danh sách
giai_phap = Solution()
danh_sach_da_ghep = giai_phap.mergeTwoLists(danh_sach_1, danh_sach_2)

# In kết quả
print("Danh sách sau khi ghép:")
in_danh_sach_lien_ket(danh_sach_da_ghep)
