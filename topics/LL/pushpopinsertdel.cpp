class Node {
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;   // OR int data = val
        next = NULL;
    } 
}
class MyLinkedList {
public:
        Node* head;
        Node* tail;
        int size;  
    
    MyLinkedList() {
         head = tail = NULL;
    }
    
    int get(int index) {
        
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }

        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }
    
    void addAtIndex(int index, int val) {
        Node* newNode = new Node(val);

        //BC
        if(index < 0 || index > size){
            return;
        }

        if(index == 0){
            addAtHead(val);
            return;
        }

        if(index == size){
            addAtTail(val);
            return;
        }

        Node* temp = head;
        for(int i=0; i<index-1; i++){
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {

    if (index < 0 || index >= size)
        return;

    if (index == 0) {
        Node* temp = head;
        head = head->next;

        if (head == NULL)
            tail = NULL;

        delete temp;
        size--;
        return;
    }

    Node* temp = head;

    for (int i = 0; i < index - 1; i++) {
        temp = temp->next;
    }

    Node* curr = temp->next;
    temp->next = curr->next;

    if (curr == tail)
        tail = temp;

    delete curr;
    size--;
}
};

class Node {
public:
    int val;
    Node* next;

    Node(int val) : val(val) , next(nullptr) {}
};

class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;  
    
    MyLinkedList() : head(nullptr), tail(nullptr), size(0) {}  //size =0
    
    int get(int index) {
        if(index < 0 || index >= size){
            return -1;
        }

        Node* temp = head;
        for(int i = 0; i < index; i++){
            temp = temp->next;
        }

        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);

        if(head == nullptr){
            head = tail = newNode;
            size++;
            return;
        }

        newNode->next = head;
        head = newNode;
        size++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if(head == nullptr){
            head = tail = newNode;
            size++;
            return;
        }

        tail->next = newNode;
        tail = newNode;
        size++;
    }
    
    void addAtIndex(int index, int val) {

        //BC
        if(index < 0 || index > size){
            return;
        }

        if(index == 0){
            addAtHead(val);
            return;
        }

        if(index == size){
            addAtTail(val);
            return;
        }

        Node* newNode = new Node(val);

        Node* temp = head;
        for(int i=0; i<index-1; i++){
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {

        if (index < 0 || index >= size)
            return;

        if (index == 0) {
            Node* temp = head;
            head = head->next;

            if (head == nullptr)
                tail = nullptr;

            delete temp;
            size--;
            return;
        }

        Node* temp = head;

        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }

        Node* curr = temp->next;
        temp->next = curr->next;

        if (curr == tail)
            tail = temp;

        delete curr;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */