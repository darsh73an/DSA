#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
    Node* head;
    Node* tail; 

public:
    Queue(){
        head = tail = NULL;
    }

    void pushback(int val){
        Node* newNode = new Node(val);

        if(empty()){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void popfront(){
        if(empty()){
            return;
        }

        Node* temp = head;
        head = head->next;

        if(head == NULL){
            tail = NULL;
        }

        delete temp;
    }

    int front(){
        if(empty()){
            return -1;
        }
        return head->data;
    }

    bool empty(){
        return head == NULL;
    }
};

int main(){

    Queue q;

    q.pushback(1);
    q.pushback(2);
    q.pushback(3);

    q.popfront();
    q.popfront();

    while(!q.empty()){
        cout << q.front() << " ";
        q.popfront();
    }

    cout << endl;

    return 0;
}