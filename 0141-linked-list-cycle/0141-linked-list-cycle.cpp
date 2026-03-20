class Solution {
public:
    bool hasCycle(ListNode *head) {

        // Nếu danh sách rỗng hoặc chỉ có 1 node
        if(head == nullptr || head->next == nullptr)
            return false;

        // Hai con trỏ
        ListNode* slow = head;
        ListNode* fast = head;

        // Duyệt danh sách
        while(fast != nullptr && fast->next != nullptr){

            slow = slow->next;         // slow đi 1 bước
            fast = fast->next->next;   // fast đi 2 bước

            // Nếu hai con trỏ gặp nhau → có cycle
            if(slow == fast){
                return true;
            }
        }

        // Nếu fast tới cuối danh sách → không có cycle
        return false;
    }
};