/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        queue<pair<Node*,int>> q;
        map<int,int> mp;  // bcoz we have ans in sorted order currHD,node
        q.push({root,0}); // in horizontal dis 0 is already occupied
        vector<int>ans;
        
        if(!root) return ans;
        
        while(!q.empty()){
            
            Node* curr = q.front().first;
            int currHD = q.front().second;
            q.pop();
            
            if(mp.find(currHD) == mp.end()){ // means not ppresent
                mp[currHD] = curr->data;
            }
            
            if(curr->left) q.push({curr->left,currHD - 1});
            if(curr->right) q.push({curr->right,currHD + 1});
        }
        for(auto i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};