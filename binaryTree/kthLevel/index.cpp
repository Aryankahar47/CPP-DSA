#include<iostream>
using namespace std;
#include<vector>

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

static int i=-1;
Node* preorder(vector<int> nodes){
    i++;
    if(nodes[i]==-1){
        return NULL;
    }
    Node* currNode = new Node(nodes[i]);
    currNode->left=preorder(nodes);
    currNode->right=preorder(nodes);
    return currNode;
}

void kthHelper(Node* root, int k, int currLevel){
    if(root==NULL){
        return;
    }
    if(currLevel==k){
        cout<<root->data<<" ";
        return;
    }
    kthHelper(root->left, k, currLevel+1);
    kthHelper(root->right, k, currLevel+1);
}

void kthLevel(Node*root, int k){
    kthHelper(root, k, 1);
}

int main(){
    vector<int> nodes={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root=preorder(nodes);
    kthLevel(root, 2);
    return 0;
}