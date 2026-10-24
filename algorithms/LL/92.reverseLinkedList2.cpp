class Solution {
public:
    // not normal reevrse function
    ListNode* reverse(ListNode* head, int left, int right) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        for (int i = 0; i < right - left + 1; i++) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) return head; // single node

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* before = dummy; // to join the reversed list

        for (int i = 1; i < left; i++) {
            before = before->next;
        }

        ListNode* st = before->next; // st point of reverse list
        ListNode* after = st; // end point

        for (int i = left; i <= right; i++) {
            after = after->next;
        }

        before->next = reverse(st, left, right); // reverse and join
        st->next = after; // join in right side

        return dummy->next;
    }
};

// O(n)
// O(1)

// before -> the node before the st node of reverse pointer to join it after reversing
// after -> the node at the right pointer to join after reversing