#include<iostream>
using namespace std;
#include<vector>

class Node{
    public:
    int data;
    Node*left, *right;
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
    Node* currNode=new Node(nodes[i]);
    currNode->left=preorder(nodes);
    currNode->right=preorder(nodes);
    return currNode;
}

int kthAncestor(Node* root, int node, int k){
    if(root==NULL){
        return -1;
    }
    if(root->data==node){
        return 0;
    }
    
    int leftTree=kthAncestor(root->left, node, k);
    int rightTree=kthAncestor(root->right, node, k);

    if(leftTree==-1 && rightTree==-1){
        return -1;
    }

    int validVal=leftTree==-1?rightTree:leftTree;
    if(validVal+1==k){
        cout<<root->data;
    }
    return validVal+1;
}

int main(){
    vector<int> nodes={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root=preorder(nodes);
    kthAncestor(root, 5, 2);
    return 0;
}
