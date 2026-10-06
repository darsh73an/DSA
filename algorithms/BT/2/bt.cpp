#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node*left;
    Node*right;

    Node(int val){
        this->data = val;
        left = right = NULL;
    }
};

static int idx = -1;

Node* BuildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return NULL;
    }

    Node* newNode = new Node(nodes[idx]);
    newNode->left = BuildTree(nodes);
    newNode->right = BuildTree(nodes);

    return newNode;
}


int height(Node* root) {
    if (root == NULL) return 0;
    return max(height(root->left), height(root->right)) + 1;
}

int diameter(Node* root) {  // 0(n2)
    if (root == NULL) {
        return 0;
    }

    int currDiameter = height(root->left) + height(root->right) + 1;
    int leftDiameter = diameter(root->left); 
    int rightDiameter = diameter(root->right);

 
    return max(currDiameter, max(leftDiameter, rightDiameter)); //bcoz if left child has more childs than right
}

pair <int,int> diam2(Node* root){
    //bc
    if(root == NULL){
        return make_pair(0,0);
    }

    //(diameter,height)
    pair<int,int> leftInfo = diam2(root->left);
    pair<int,int> rightInfo = diam2(root->right);

    int currDiam = leftInfo.second + rightInfo.second + 1;
    int totalDiam = max(currDiam,max(leftInfo.first,rightInfo.first));
    int totalHeight = max(leftInfo.second,rightInfo.second) + 1;

    return make_pair(totalDiam,totalHeight);
}

bool isIdentical(Node* root,Node* subroot){
    //bc
    if(root == NULL && subroot == NULL){
        return true;
    }else if(root == NULL || subroot == NULL){
        return false;
    }

    if( root->data != subroot->data){
        return false;
    }
    return isIdentical(root->left,subroot->left) && isIdentical(root->right,subroot->right);
}

bool isSubTree(Node* root,Node* subroot){
    //bc
    if(root == NULL && subroot == NULL){
        return true;
    }else if(root == NULL || subroot == NULL){
        return false;
    }

    if(root->data == subroot->data){
        if(isIdentical(root,subroot)){
            return true;
        }
    }
    int leftSubtree =  isSubTree(root->left,subroot);
    if(!leftSubtree){
        return isSubTree(root->right,subroot);
    }
    return true;
}


void kthLevel(Node* root, int k) {
    if(root == NULL) return;

    if(k == 1) { // kth level node
        cout << root->data << " ";
        return;
    }

    kthLevel(root->left, k - 1); // bcoz if we want level 3 1st is 1 so k-1 = 2 level again k-1 = 1 then print root data
    kthLevel(root->right, k - 1);
}


int main (){

    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    // vector<int> nodes = {1, 2, 4, 8, -1, -1, 1, -1, -1, 1, 1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, -1};
    Node* root = BuildTree(nodes);

    // 2 4 5 
    Node* subroot = new Node(2);
    subroot->left = new Node(4);
    subroot->right = new Node(10);


    cout << "diameter with 0(n2) : " << diameter(root) << endl;

    cout << "diameter with 0(n) : " << diam2(root).first << endl;

    cout << "height  : " << diam2(root).second << endl;

    cout << isSubTree(root,subroot) << endl;

    kthLevel(root,3);

    return 0;
}
