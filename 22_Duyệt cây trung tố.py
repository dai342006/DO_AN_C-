class TreeNode(object):
    def __init__(self, gia_tri=0, trai=None, phai=None):
        self.gia_tri = gia_tri
        self.trai = trai
        self.phai = phai


class Solution(object):
    def inorderTraversal(self, root):
        ket_qua = []
        
        def duyet_trung_to(nut):
            if not nut:
                return
            
            # duyệt cây con bên trái
            duyet_trung_to(nut.trai)
            
            # xử lý nút hiện tại
            ket_qua.append(nut.gia_tri)
            
            # duyệt cây con bên phải
            duyet_trung_to(nut.phai)
        
        duyet_trung_to(root)
        return ket_qua


# ===== TEST =====
# Tạo cây: root = [1, null, 2, 3]
root = TreeNode(1)
root.phai = TreeNode(2)
root.phai.trai = TreeNode(3)

solution = Solution()
print(solution.inorderTraversal(root))  # [1, 3, 2]
