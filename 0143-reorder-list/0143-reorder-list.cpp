class Solution {
public:
    void reorderList(ListNode* head) {

        // Nếu danh sách rỗng hoặc chỉ có 1 node thì không cần làm gì
        if(head == nullptr || head->next == nullptr) return;

        // ===== BƯỚC 1: Tìm node ở giữa danh sách =====
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;          // slow đi 1 bước
            fast = fast->next->next;    // fast đi 2 bước
        }

        // Lúc này slow đang ở giữa danh sách

        // ===== BƯỚC 2: Đảo ngược nửa sau =====
        ListNode* prev = nullptr;
        ListNode* curr = slow->next;

        slow->next = nullptr;   // cắt danh sách thành 2 phần

        while(curr != nullptr){
            ListNode* nextTemp = curr->next; // lưu node tiếp theo

            curr->next = prev;               // đảo chiều

            prev = curr;                     // di chuyển prev
            curr = nextTemp;                 // di chuyển curr
        }

        // prev là đầu của danh sách đã đảo

        // ===== BƯỚC 3: Trộn hai danh sách =====
        ListNode* first = head;
        ListNode* second = prev;

        while(second != nullptr){

            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;

            first->next = second;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }
    }
};