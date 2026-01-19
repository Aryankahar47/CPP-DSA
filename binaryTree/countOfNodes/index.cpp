#include<iostream>
using namespace std;
#include<vector>

class Node{
    public:
    int data;
    Node* left, * right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

static int i=-1;
Node *buildTree(vector<int> nodes){
    i++;
    if(nodes[i]==-1){
        return NULL;
    }

    Node *currNode=new Node(nodes[i]);
    currNode->left=buildTree(nodes);
    currNode->right=buildTree(nodes);
    return currNode;
}

int count(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftCount=count(root->left);
    int rightCount=count(root->right);
    return leftCount+rightCount+1;
}
int main(){
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root=buildTree(nodes);
    cout<<count(root);
    return 0;
}