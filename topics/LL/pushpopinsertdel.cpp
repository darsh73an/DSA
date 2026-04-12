#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Print List
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " → ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Push at Start
void pushStart(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// Push at End
void pushEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Push at Middle (after position)
void pushMiddle(Node* head, int pos, int val) {
    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 1; i < pos; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// Pop from Start
void popStart(Node*& head) {
    if (head == NULL) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

// Pop from End
void popEnd(Node*& head) {
    if (head == NULL) return;
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

// Pop from Middle (after position)
void popMiddle(Node* head, int pos) {
    Node* temp = head;
    for (int i = 1; i < pos; i++) {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;
}

int main() {

    Node* head = NULL;

    pushStart(head, 20);
    pushStart(head, 10);      // 10 → 20

    // pushEnd(head, 30);        // 10 → 20 → 30

    // pushMiddle(head, 1, 15);  // 10 → 15 → 20 → 30

    // printList(head);

    // popStart(head);           // 15 → 20 → 30
    // popEnd(head);             // 15 → 20
    // popMiddle(head, 1);       // 15

    printList(head);

    return 0;
}