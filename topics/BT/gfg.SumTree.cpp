class Solution {
  public:

    int sum(Node* node) {
        if (node == nullptr) return 0;

        int left = sum(node->left);
        int right = sum(node->right);

        if (!node->left && !node->right)
            return node->data;

        if (left == -1 || right == -1)
            return -1;

        if ((left + right) != node->data)
            return -1;

        return node->data + left + right;
    }

    bool isSumTree(Node* node) {
        return sum(node) != -1;
    }
};

// return -1 means invalid