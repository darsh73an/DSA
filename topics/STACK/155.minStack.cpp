class MinStack {
public:
    //    val,minVal
    stack<pair<int,int>> s;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val,val}); // val and min val are same if stack is empty
        }else{
            int minVal = min(val,s.top().second); // cmp curr val and s top val and update it
            s.push({val,minVal});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        int high = s.top().first;
        return high;
    }
    
    int getMin() {
        int min = s.top().second;
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */