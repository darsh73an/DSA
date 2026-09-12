// LCA Think of it as: the first common node when you move upward from both nodes.
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root){
            return nullptr;
        }

        // in BST the lca is the node in which the two p,q exists in subtree from leaf 

        if(root->val > p->val && root->val > q->val){ // left 
            return lowestCommonAncestor(root->left,p,q);     // Use return ... when you're just searching for/returning an answer
        }
        else if(root->val < p->val && root->val < q->val){ // right
            return  lowestCommonAncestor(root->right,p,q);
        }
        else{  // this is the 1st LCA node from leaf which has both p,q in tis subtree
            return root;
        }
    }
};