class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        // Tạo dummy node để xử lý trường hợp xóa node đầu
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        // Hai con trỏ
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Cho fast đi trước n+1 bước
        for(int i = 0; i <= n; i++){
            fast = fast->next;
        }

        // Di chuyển fast và slow cho đến khi fast tới cuối
        while(fast != nullptr){
            fast = fast->next;
            slow = slow->next;
        }

        // Xóa node thứ n từ cuối
        slow->next = slow->next->next;

        // Trả về danh sách mới
        return dummy->next;
    }
};