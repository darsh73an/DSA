class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};

        queue<TreeNode*>q;
        q.push(root);
        vector<int> ans;

        while(!q.empty()){
            int n = q.size();

            for(int i=0; i<n; i++){
                TreeNode* curr = q.front();
                q.pop();

                if(i == n-1){           // imp understand i == n-1 means right side nodes only
                    ans.push_back(curr->val);
                } 

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        return ans;
    }
};