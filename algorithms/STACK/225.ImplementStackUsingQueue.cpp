class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        
    }
    
    void push(int x) {  // TC 0(n) left are all 0(1)
        // step 1 if top or front of queue is not empty then copy it to q2
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        // step 2 after removing every ele now insert at front
        q1.push(x);
        // step 3 now write nack the elements to q1 main queue
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */