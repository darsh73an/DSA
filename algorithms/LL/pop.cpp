#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* nextPointer;

    Node(int val){ // set the props which requires each single node
        data = val;
        nextPointer = NULL;
    }
};

// Push at Start
void push_front(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->nextPointer = head;
    head = newNode;
}


void pop_back(Node*& head){
    if(head == NULL){  // if empty ll
        return;
    }
    if(head->nextPointer == NULL){ // if only one node is present in ll
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;      // temp points to st node of ll

    while(temp->nextPointer->nextPointer != NULL){ // until st nodes next's next node is not empty
        temp = temp->nextPointer;            // moving temp to nxt node
    }
    delete temp->nextPointer;  // del that last node
    temp->nextPointer = NULL;  // assign nextpointer to last node
}

void push_back(Node*& head,int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->nextPointer != NULL){
        temp = temp->nextPointer;
    }
    temp->nextPointer = newNode;
}

void pop_front(Node*& head){
    if( head == NULL){
        return;
    }

    Node* temp = head;
    head = head->nextPointer;
    delete temp;
}

void printList(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->nextPointer;
    }
    cout << "NULL\n";
}

void pop_mid(Node* head,int pos){
    Node* temp = head;

    for(int i=1; i<pos; i++){
        temp = temp->nextPointer;
    }
    Node* delNode = temp->nextPointer;
    temp->nextPointer = delNode->nextPointer;
    delete delNode;
}

void push_mid(Node*& head,int pos,int val){
    Node* newNode = new Node(val);
    Node* temp = head;

    for(int i=1; i<pos; i++){
        temp = temp->nextPointer;
    }

    newNode->nextPointer = temp->nextPointer;
    temp->nextPointer = newNode;

}



int main() {

    Node* head = NULL;

    push_back(head,9);
    push_back(head,7);
    push_back(head,8);
    push_front(head,3);
    push_front(head,2);
    push_front(head,1);

    push_mid(head,3,111);

    pop_back(head);
    pop_front(head);

    pop_mid(head,3);

    printList(head);

 
    return 0;
}