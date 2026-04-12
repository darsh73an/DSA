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

void printll(Node* head){
    while( head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << "NULL\n";
}


void push_end(Node*& head,int val){
    Node* newNode = new Node(val);

    if( head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL){
        temp =  temp->next;  // jumping next temp to next node
    }

    temp->next = newNode;
}

void pop_end(Node* head){
    if( head == NULL){
        return;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
        return ;
    }

    Node* temp = head;

    //temp = 10
// temp->next = 20
// temp->next->next = 30 
// move temp → 20
    while(temp->next->next != NULL){
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;


}

int main() {

    Node* head = NULL;

    push_end(head,3);
    push_end(head,2);
    push_end(head,1);

    pop_end(head);

    printll(head);



    return 0;
}