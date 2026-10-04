class Solution {
  public:
    int getLevel(struct Node *node, int target) {
        
        if(node == nullptr) return 0;
        
        queue<Node*> q;
        q.push(node);
        
        int level = 1;
        
        while(!q.empty()){
            int n = q.size(); // number of nodes in current level
            
            while(n--){ // process all nodes of current level
                Node* curr = q.front(); // get front node
                q.pop();
                
                if(curr->data == target)
                    return level; // target found
                
                if(curr->left)
                    q.push(curr->left); // add left child
                
                if(curr->right)
                    q.push(curr->right); // add right child
            }
            
            level++; // move to next level
        }
        
        return 0; // target not found
    }
};