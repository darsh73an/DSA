// After splitting, connect 1st half's current node → 2nd half's current node, then 2nd half's current node → next node of 1st half. After these two connections, move both pointers one position forward and repeat.
class Solution {
public:

    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* next = nullptr; // no need to move next bcox curr->next auto move with curr
        // we are no using curr pointer bcoz basically ts just head
        // ie ListNode* curr = head ===  head same

        while(head){
            next = head->next; // save next to head->next
            head->next = prev; // reverse
            prev = head; // prev moves to head
            head = next; // head moves to 
        }
        return prev;
    }

    void reorderList(ListNode* head) {
       if(!head || !head->next) return;

       // find middle to split two halfs
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = slow->next;
        slow->next = nullptr;
        second = reverse(second);

        ListNode* first = head;

        while(second){
            ListNode* firstNext = first->next;  // bcoz to move both 1->2 after mergeing
            ListNode* secondNext = second->next;

            first->next = second;
            second->next = firstNext;

            first = firstNext;
            second = secondNext;
        }
    }
};

// 0(n)
// 0(1)