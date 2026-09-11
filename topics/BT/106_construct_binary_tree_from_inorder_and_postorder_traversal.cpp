class Solution {
public:
//     Complexity
//      Time: O(n²) because search() is O(n) for every node.
//      Space: O(h) recursion stack.

    int search(vector<int>&inorder, int left, int right,int val){
        for(int i=left; i<=right; i++){
            if(inorder[i] == val){
                return i;   // returns the position of root element in inorder
            }
        }
        return -1;
    }
        

    TreeNode* helper(vector<int>&inorder, vector<int> & postorder, int left, int right,int& posIdx){
        if(left > right){
            return nullptr;
        }

        TreeNode* root = new TreeNode(postorder[posIdx]);
        int inIdx = search(inorder,left,right,postorder[posIdx]);
        posIdx--;

        root->right = helper(inorder,postorder,inIdx+1,right,posIdx);
        root->left = helper(inorder,postorder,left,inIdx-1,posIdx);

        return root;
    }


    // Main function to build tree
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int posIdx = postorder.size()-1;
        return helper(inorder,postorder,0,inorder.size()-1,posIdx);
    }
};