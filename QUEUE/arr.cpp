#include<iostream>
#include<queue>
using namespace std;

class CircularQueue{
private:
    int* arr;
    int front;
    int rear;
    int size;
public:
    CircularQueue(int n){
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool empty(){
        return front == -1;
    }

    bool full(){
        return (rear+1) % size == front;
    }

    void enqueue(int val){
        if(full()){
            cout << "queue is full\n";
            return;
        }

        if(empty()){
            front = rear = 0;
            arr[rear] = val;
        }else{
            rear = (rear + 1) % size; // moving rear to next
            arr[rear] = val;
        }
    }

    void dequeue(){
        if(empty()){
            cout << "queue is empty\n";
            return;
        }

        if(front == rear)
            front = rear = -1;
        else
            front = (front + 1) % size;
    }

    int getfront(){
        if(empty()) return -1;
        return arr[front];
    }

    int getrear(){
        if(empty()) return -1;
        return arr[rear];
    }

    void print(){
        if(empty()){
            cout << "Queue is empty\n";
            return;
        }

        int i = front;
        while(true){
            cout << arr[i] << " ";
            if(i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};


int main () {


    CircularQueue q(5);

    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(1);

    q.print();

    cout << q.getfront() << endl;
    cout << q.getrear() << endl;

    q.dequeue();

    q.print();

    cout << q.getfront() << endl;
    cout << q.getrear() << endl;

    return 0;
}