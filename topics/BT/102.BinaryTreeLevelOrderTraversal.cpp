/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;

        if(!root) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();   // size of queue
            vector<int> temp;  // stores each lvl like 9,20

            for(int i=0; i<n; i++){
                TreeNode* curr = q.front(); // store and pop root
                q.pop();                    

                temp.push_back(curr->val);              // push in temp not ans
                if(curr->left) q.push(curr->left);      // push in queue for lvl
                if(curr->right) q.push(curr->right);
            }
            ans.push_back(temp);                    // push whole lvl
        } 
        return ans;
    }
};
