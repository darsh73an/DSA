/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode dummy = ListNode(0);
       dummy.next = head;

       ListNode* slow = &dummy;
       ListNode* fast = &dummy;

        // to reach one left side of deletion node
       for(int i=0; i<=n; i++){
        fast = fast->next;
       }

        // find the left last node of deletion node using pointers 
       while(fast){
        slow = slow->next;
        fast = fast->next;
       }

        // delete the nth node
       slow->next = slow->next->next;

       return dummy.next;
    }
};