class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        // Tạo dummy node để xử lý trường hợp xóa head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        // Con trỏ dùng để duyệt danh sách
        ListNode* current = dummy;

        // Duyệt toàn bộ linked list
        while(current->next != nullptr){

            // Nếu node tiếp theo có giá trị cần xóa
            if(current->next->val == val){

                // Bỏ node đó bằng cách nối sang node tiếp theo
                current->next = current->next->next;

            } else {

                // Nếu không xóa thì di chuyển sang node tiếp theo
                current = current->next;
            }
        }

        // Trả về danh sách mới (bỏ dummy)
        return dummy->next;
    }
};