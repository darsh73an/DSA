class Solution {
public:
    ListNode* reverse(ListNode* head,ListNode* end){
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != end){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0,head);
        ListNode* prevGroup =  &dummy; 

        while(true){
            ListNode* kth = prevGroup;  // so prevGroup will become the head that has to attached to ll

            // find kth node means the last node of th size
            for(int i=0; i<k; i++){
                kth = kth->next;
                if(!kth) return dummy.next;
            }

            ListNode* groupStart = prevGroup->next; // prevGroup = dummy->next
            ListNode* nextGroup = kth->next;  // kth = last node in k=2,3

            //reverse the kth size nodes
            ListNode* newHead = reverse(groupStart,nextGroup);

            //connect prev group
            prevGroup->next = newHead;

            //connect reversed to whole ll
            groupStart->next = nextGroup;  // bcoz after rev groupStart will be in end

            // move to next group
            prevGroup =  groupStart;
        }
    }
};

// 0(n)
// 0(1)