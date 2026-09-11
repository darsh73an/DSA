class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root == p || root == q) return root;

        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);

        if(left && right) return root; // if both the p,q got thier comman parent then this will run

        return left ? left : right;  //The recursion goes down first, finds p/q, and then while recursion returns upward, these conditions are checked:
    }
};