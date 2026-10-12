class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        int n = q.size();
        stack<int> s;
        
        
        for(int i=0; i<n; i++){
            s.push(q.front());
            q.pop();
        }
        
        for(int i=0; i<n; i++){
            q.push(s.top());
            s.pop();
        }
    }
};

// O(n)
// O(n)

// Using stack bcoz if we add all elements and remove all elements it will be in reverse order. So we can use stack to reverse the queue.