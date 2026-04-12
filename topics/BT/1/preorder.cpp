#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* leftChild;
    Node* rightChild;

    Node(int val){
        this->data = val; //data = val;
        leftChild = rightChild = NULL;
    }
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

int main () {

    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    cout << BuildTree << endl;

    return 0;
}