#include<iostream>
using namespace std;

class Node{
public:

    int data;
    Node* nextPointer;

    Node(int val){      // constructor of Node
        data = val;         // two values data and next pointer
        nextPointer = NULL;
    }
};

void push_front(Node*& head,int val){
    Node* newNode = new Node(val);

    newNode->nextPointer = head; //newNode’s nextPointer now stores the address that head was pointing to. ie it points to st node and stores the data
    head = newNode; // head is assigned to newnode ie st node
};

void printNodes(Node* head){
    while(head != NULL){
        cout << head->data << ",";
        head = head->nextPointer;
    }
    cout << "NULL\n";
}



int main() {

    Node* head = NULL;

    push_front(head,1);
    push_front(head,2);
    push_front(head,3);
     push_front(head,3);
      push_front(head,3);
       push_front(head,3);

    printNodes(head);
    return 0;
}