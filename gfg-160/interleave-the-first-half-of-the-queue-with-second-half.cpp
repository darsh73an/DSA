class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        int n = q.size();
        queue<int> q2;
        
        // store all right side half elements in q2
        for(int i=0; i<n/2; i++){
            q2.push(q.front());
            q.pop();
        }
        
        // q = 5 6 7 8  q2 = 1 2 3 4 
        // ans should be q = 1 5 2 6 3 7 4 8
        

        while(!q2.empty()){
            q.push(q2.front());
            q2.pop();
            
            q.push(q.front());
            q.pop();
        }
    }
};

// O(n)
// O(n) -> auxiliary space