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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy ;
        ListNode* curr = &dummy;

        int carry = 0;

        while(l1 || l2 || carry){
            int sum = carry;

            if(l1){  // calcualting no in l1
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;                     // we get last number that we can add in next node

            curr->next = new ListNode(sum % 10);  // this is remainder ie we will write this in curr place
            curr = curr->next;
        }
        return dummy.next;
    }
};