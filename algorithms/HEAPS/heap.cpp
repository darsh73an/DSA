
#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue {
    vector<int> heap;

public:

    void push(int val){
        heap.push_back(val);
        int i = heap.size() - 1 ; // last element ir the ele which we have just added

        // balance maxHeap, if parent is big then maxHeap else minHeap
        while(i > 0 && heap[(i-1) / 2] < heap[i]){ // for minHeap just heap[(i-1)/2 > heap[i]]
            swap(heap[i],heap[(i-1) / 2]);
            i = (i-1) / 2; 
        }
    }

    void pop(){
        if(heap.empty()) return;

        heap[0] = heap.back();
        heap.pop_back();

        int i = 0, n = heap.size(); // i is curr idx

        while(true){
            int largest = i;
            int l = i*2 + 1, r = i*2 + 2; // indexes not values

            if(l < n && heap[l] > heap[largest]){ // update largest if left is largest
                largest = l;
            }

            if(r < n && heap[r] > heap[largest]){ // update largest if right is largest
                largest = r;
            }

            if(i == largest) break; // if curr is largest skip

            swap(heap[i],heap[largest]); // make balance in heap
            i = largest;  // make curr element as largest
        }
    }

    int top() {
        if (heap.empty()) throw runtime_error("Priority queue is empty");
        return heap[0];
    }

    bool empty() {
        return heap.empty();
    }

    int size() {
        return heap.size();
    }
};

int main() {
    PriorityQueue pq;

    pq.push(10);
    pq.push(20);
    pq.push(5);

    cout << pq.top() << '\n'; // 30

    pq.pop();
    cout << pq.top() << '\n'; // 20
}
