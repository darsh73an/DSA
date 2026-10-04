#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
public:
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    

    void push_front(int val){
        Node* newNode = new Node(val);
        cout << "push front\n";

        if( head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode; // head moved to 1st node
        }

    }

    void printList(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void removeCycle(){
        Node* slow = head;
        Node* fast = head;
        bool isCyclic = false;
        cout << "cycle remove is called\n";


        // to meet slow and fast at one point
        while( fast != NULL && fast->next != NULL){
            slow = slow->next;      // +1
            fast = fast->next->next;// +2

            // to detect cycle
            if( slow == fast ){
                cout << "cycle exist in this ll\n";
                isCyclic = true;
                break;
        }
        }
      
        if(!isCyclic){
            cout << "cycle does not exist\n";
            return;
        }

        slow = head;

        // full cyclic like circle
        if (slow == fast) {   // special case : tail -> head

            while (fast->next != slow) { // this makes the fast connect to first ele of ll then remove it
                fast = fast->next;
            }

        fast->next = NULL;   // remove cycle
        }       

        else { // in this the fast->next is connect with other center ele not head or tail

            Node* prev = fast;

            while (slow != fast) {
                slow = slow->next; // +1
                prev = fast;       // here prev stays back of fast the fast moves to next node
                fast = fast->next; // +1
            }  // slow and fast will meet at one point and we have to del prev->next so that cycle get deleted

            prev->next = NULL;   // remove cycle
        }

    }
};

int main(){

    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printList();  // normal print

    // Create cycle
    ll.tail->next = ll.head;

    // DO NOT PRINT HERE (infinite loop)

    ll.removeCycle();

    ll.printList();  // now safe

    return 0;
}