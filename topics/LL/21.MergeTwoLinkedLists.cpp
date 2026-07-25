class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode dummy;              // Fake head to simplify building the merged list. like k = m+n
        ListNode* tail = &dummy;     // tail starts at dummy and always points to the last node.
       while(list1 != nullptr && list2 != nullptr){
            if(list1->val <= list2->val){
                tail->next = list1;
                list1 = list1->next;
            }else{
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
       }

       if(list1 == nullptr){
            tail->next = list2;
       }else{
            tail->next = list1;
       }
       return dummy.next;           // Skip the fake head; dummy.next is the real head of the merged list.
    }
};