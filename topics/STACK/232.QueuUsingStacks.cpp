class MyQueue {
public:
    stack<int> s1;    // main
    stack<int> s2;     // helper
    MyQueue() {
        // FIFO
    }
    
    void push(int x) {
        // step 1   s1 -> s2
        if(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        // step 2   push ele in s1
        s1.push(x);
        //step 3   s2 -> s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        //FIFO so last element entered will bw the ele that is going to be removed
        int ans = s1.top();
        return ans;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */