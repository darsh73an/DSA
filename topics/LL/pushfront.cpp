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

    // ~Node(){
    //     cout << "Deleting node " << data << endl;
    //     delete next;
    //     next = NULL;
    // }
};

class List{
public:

    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    // ~List(){
    //     cout << "list"<< endl;
    //     if(head != NULL){
    //         delete head;
    //         head = NULL;
    //     }
    // }

    //printing list
    void printList(){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

    // push front
    void push_front(int val){
        Node* newNode = new Node(val);  // dynamic
        // Node* newNode(val); // static 

        cout << "push front\n";


        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    //push back
    void push_back(int val){
        Node* newNode = new Node(val);

        cout << "push back\n";

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;  // both are same  tail = newNode  bcoz tail is last element
        }
    }

    //push mid
    void push_mid(int val,int pos){
        Node* newNode = new Node(val);

        cout << "push mid\n";

        Node* temp = head;
        for(int i=1; i<pos-1; i++){
            if(temp == NULL){
                cout << "invalid position\n";
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next;  // temp is at pos-1 and we are connecting with pos means right side then left
        temp->next = newNode;
    }

    // temp = newNode; It DOES NOT change the linked list structure.
    // temp->next = newNode; You are changing the structure of the linked list.

    void pop_front(){
         if(head == NULL){
            cout << "List is NULL\n";
            return;
        }
        cout << "pop front\n";
      
            Node* temp = head;
            head = head->next;  // moving head to next node to make it as 1st node

            temp->next =  NULL;  // deleting node's next will bepointing to null
            delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "list is empty\n";
            return;
        }
        cout << "pop_back\n";
        

        Node* temp = head;
        while( temp->next->next != NULL ){ // means temp is in left of tail
            temp = temp->next;
        }

        temp->next = NULL;      // making the temp->next null so that it can be last node
        delete tail;            // delete tail so last ele will be deleted
        tail = temp;            // assign tail to temp so that tail is last ele in node
    }


    // search key using itearator
    int searchItr(int key){
    Node* temp = head;
    int idx = 0;

    while(temp != NULL){
        if(temp->data == key){
            return idx;
        }
        temp = temp->next;
        idx++;
    }
    return -1;
}

    // search key using recursion
    int helper(Node* h,int key){

        if(h == NULL){
            return -1;
        }

        if( h->data == key){
            return 0;
        }

       int idx =  helper(h->next,key);

       if(idx == -1){
        return -1;
       }
       return idx+1;
    }

    int search(int key){
        return helper(head,key);        // currElement = head same
    }

    //reverse
    // using three pointer prev curr next first prev points to NULL the after it comes to ll
    void reverse() {
        Node* prev = NULL;
        Node* curr = head;

        while(curr != NULL){
            Node* next = curr->next; 
            curr->next = prev;

            //update prev or move it to next node
            prev = curr;
            curr = next;

        }
        head = prev; // after updations prev becomes first new node and curr points to NULL then loop ends
        //we use this for printing from back so we point head to prev ie 1st node
    }

    int getsize(){
        int sizee = 0;
        Node* temp = head;

        while(temp != NULL){
            temp = temp->next;
            sizee++;
        }

        return sizee;
    }

    void delNthLast(int n){
        int size = getsize();
        Node* prev = head;

        for(int i=1; i<(size-n); i++){
            prev = prev->next;  // here the prev becomes the deletion node's prev bcoz < size - n   
        }
        Node*  del = prev->next;
        cout << "going to delete :" << del->data << endl;
        prev->next = prev->next->next;
    }

   bool llPalindrome(){
    if(head == NULL || head->next == NULL){
        return true;
    }

    Node* slow = head;
    Node* fast = head;

    // Find middle
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    // Skip middle for odd
    if(fast != NULL){
        slow = slow->next;
    }

    // Reverse second half
    Node* prev = NULL;
    Node* curr = slow;

    while(curr != NULL){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // Compare halves
    Node* first = head;
    Node* second = prev;

    while(second != NULL){
        if(first->data != second->data){
             cout << "no palin\n";
            return false;
        }
        first = first->next;
        second = second->next;
    }
     cout << "palin\n";
    return true;
}


};

bool isCyclic(Node* head){
    Node* slow = head;
    Node* fast = head;

    while( fast != NULL && fast->next != NULL){
        slow = slow->next; // +1 moving slow to next node
        fast = fast->next->next; //+2
    
        if( slow == fast){
            cout << "cycle exist\n";
            return true;
        }
    }
    cout << "cycle does not exist" << endl;
    return false;
}








int main() {

    List ll;

    ll.push_front(3);
    ll.printList();
    ll.push_front(2);
    ll.printList();
    ll.push_front(1);
    ll.printList();

    ll.push_back(4);
    ll.printList();

    ll.push_mid(5,1);



    // ll.pop_front();

    // ll.printList();

    // ll.pop_back();
    ll.printList();

    cout << ll.searchItr(1) << endl;
    cout << ll.search(100) << endl;

    ll.reverse();
    ll.printList();

    ll.delNthLast(3);
    ll.printList();
    
    ll.llPalindrome();

    ll.tail->next = ll.head; // now its cyclic

    isCyclic(ll.head);



    return 0;
}
