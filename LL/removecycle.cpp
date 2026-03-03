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

        while( fast != NULL && fast->next != NULL){
            slow = slow->next;      // +1
            fast = fast->next->next;// +2
        }

        if( slow = fast ){
            cout << "cycle exist n this ll\n";
        }
        else{
            cout << "cycle does not exist\n";
        }

    }
};

int main( ){

    List ll;

    ll.push_front(5);
     ll.printList();
    ll.push_front(4);
     ll.printList();
    ll.push_front(3);
     ll.printList();
    ll.push_front(2);
     ll.printList();
    ll.push_front(1);

    ll.printList();

    return 0;
}