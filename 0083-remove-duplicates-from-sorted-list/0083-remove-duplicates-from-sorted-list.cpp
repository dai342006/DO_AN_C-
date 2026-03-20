class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        // Nếu danh sách rỗng thì trả về luôn
        if(head == nullptr)
            return head;

        // Con trỏ dùng để duyệt danh sách
        ListNode* current = head;

        // Duyệt đến node cuối
        while(current->next != nullptr){

            // Nếu giá trị node hiện tại và node tiếp theo giống nhau
            if(current->val == current->next->val){

                // Bỏ node tiếp theo
                current->next = current->next->next;

            }else{

                // Nếu không trùng thì di chuyển sang node tiếp theo
                current = current->next;
            }
        }

        // Trả về head của danh sách
        return head;
    }
};