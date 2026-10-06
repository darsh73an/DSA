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
    // reverse function
    ListNode* Reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != nullptr){
            ListNode* next = curr->next;

            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        // bc
        if(head == nullptr || head->next == nullptr){
            return true;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        // Find mid ie slow
        while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        // cmp both first half and secondf half
        ListNode* secondHalf = Reverse(slow->next);
        ListNode* firstHalf = head;

        ListNode* temp = secondHalf;  // used temp bcoz secondhalf contains half elements not head of it

        while(temp != nullptr){
            if(firstHalf->val != temp->val){
                return false;
            }
            firstHalf = firstHalf->next;
            temp = temp->next;
        }
        return true;
    }
};