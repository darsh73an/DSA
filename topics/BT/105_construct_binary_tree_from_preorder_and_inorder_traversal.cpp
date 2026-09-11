class Solution {
public:
        //     Complexity
//      Time: O(n²) because search() is O(n) for every node.
//      Space: O(h) recursion stack.


    int search(vector<int>& inorder, int left, int right, int preRoot){
        for(int i=left; i<=right; i++){
            if(preRoot == inorder[i]){
                return i;
            }
        }
        return -1; // this will not happen bcoz they have said inorder and preorder is valid
    }

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int left, int right, int& preIdx){
        // for bc null values
        if(left > right){  // the idx in inOrder
            return nullptr;
        }

        TreeNode* root = new TreeNode(preorder[preIdx]);  // we need to send int val not TreeNode* root

        int inIdx = search(inorder,left,right,preorder[preIdx]);  // after search only increment prreIdx 
        preIdx++;

        root->left = helper(preorder,inorder,left,inIdx-1,preIdx);
        root->right = helper(preorder,inorder,inIdx+1,right,preIdx);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIdx = 0;
        return helper(preorder,inorder,0,inorder.size()-1,preIdx);
    }
};