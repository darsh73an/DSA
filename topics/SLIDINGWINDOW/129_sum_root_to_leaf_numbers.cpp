class Solution {
public:
    int solve(TreeNode* root,int sum){
        if(!root) return 0;   // for sum if no node then 0

        sum = sum * 10 + root->val;     // for calc sum like 12 root,root->left so sum = sum *10+val
        // first calc sum then check is its leaf net or not
        if(!root->left && !root->right) return sum;

        return solve(root->left,sum) + solve(root->right,sum);
    }

    int sumNumbers(TreeNode* root) {
        return solve(root,0);
    }
};