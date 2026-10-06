class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        int n = st.size();
        stack<int> s;
        
        while(!st.empty()){
            
            int x = st.top();  // selecting top as first element and pop
            st.pop(); 
            
            while(!s.empty() && x > s.top()){  // move all elements greater than x back to st
                st.push(s.top());
                s.pop();
            }
            s.push(x);
        }
        
         while(!s.empty()){   // if any elements are left in s after all cmp then add all elements in s to st
                st.push(s.top());
                s.pop();
        }
    }
};
