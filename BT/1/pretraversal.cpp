#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* leftChild;
    Node* rightChild;

    Node(int val){
        this->data = val; //data = val;
        leftChild = rightChild = NULL;
    };
};


static int idx = -1;

Node* BuildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->leftChild = BuildTree(nodes); // for left tree after call idx becomes ++ 
    currNode->rightChild = BuildTree(nodes); // for right sub tree

    return currNode;
}

void preOrderTraversal(Node* root){
    //bc
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preOrderTraversal(root->leftChild);
    preOrderTraversal(root->rightChild);
}

void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    postOrderTraversal(root->leftChild);
    postOrderTraversal(root->rightChild);
    cout << root->data << " ";
}

void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    inOrderTraversal(root->leftChild);
    cout << root->data << " ";
    inOrderTraversal(root->rightChild);
}

void levelOrderTraversal(Node* root){
    //bc
    if(root == NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL); //bcoz for levels we will print NULL after each level

    while (!q.empty()){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            cout << endl;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        }else{
            cout << curr->data << " ";
            if(curr->leftChild != NULL){
                q.push(curr->leftChild);
            }
            if(curr->rightChild != NULL){
                q.push(curr->rightChild);
            }
        }
    }
}

int height(Node* root){
    //bc
    Node* curr = root;
    if( curr == NULL ){
        return 0;
    }

    int leftHeight = height(root->leftChild);
    int rightHeight = height(root->rightChild);

    int currHeight = max(leftHeight , rightHeight) + 1;
    return currHeight;
}

int count(Node* root){
    //bc
    Node* curr = root;
    if( curr == NULL ){
        return 0;
    }

    int leftCount = count(root->leftChild);
    int rightCount = count(root->rightChild);

    int totalCount = leftCount + rightCount + 1;

    return totalCount;
}


int main () {

    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = BuildTree(nodes);

    preOrderTraversal(root);
    cout << endl;
    inOrderTraversal(root);
    cout << endl;
    postOrderTraversal(root);
    cout << endl;
    levelOrderTraversal(root);

    cout << height(root) << endl;
    cout << count(root) << endl;
  

    return 0;
}