class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != nullptr){
            ListNode* next = curr->next; // for updating the curr

            curr->next = prev;  // brreaking the arrow and reversing back
            prev = curr;        // updating prev
            curr = next;        // updating curr
        }
        return prev;            // last ele will be the head if reversed so in last prev will be there so return prev
    }
};