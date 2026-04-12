#include<iostream>
#include<queue>
#include<map>
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

    while (!q.empty()){ // used to travel all the elements
        Node* curr = q.front(); // curr stores the data
        q.pop(); // now the data is popped but its still in curr but removed from queue

        if(curr == NULL){ // here we are cmp curr ie value stored in curr to NULL not queue
            cout << endl;
            if(q.empty()){
                break; // means exit from this loop
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

int sum(Node* root){
    //bc
    if(root == NULL){
        return 0;
    }

    int leftSum = sum(root->leftChild);
    int rightSum = sum(root->rightChild);

    int totalSum = leftSum + rightSum + root->data;
    cout  << totalSum <<  " ";

    return totalSum;

}

void topView(Node*root){
    queue<pair<Node*,int>>q;
    map<int,int> m;

    q.push(make_pair(root,0)); // horizontal sitance is initailly zero
    while(!q.empty()){
        pair<Node*,int> curr = q.front();
        q.pop();

        Node* currNode = curr.first; // means node value
        int currHD = curr.second; // means horizontal distance

        if(m.count(currHD) == 0){    // for adding hori dist values in map
            m[currHD] = currNode->data;
        }

        if(currNode->leftChild != NULL){
            pair<Node*,int> left = make_pair(currNode->leftChild,currHD-1);
            q.push(left);
        }

        if(currNode->rightChild != NULL){
            pair<Node* ,int> right = make_pair(currNode->rightChild,currHD+1);
            q.push(right);
        }
    }

    for(auto ite : m){
        cout << ite.second << " ";
    }
    cout << endl;
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
    cout << sum(root) << endl;

    topView(root);
  

    return 0;
}