#include<iostream>
using namespace std;
#include<vector>

class Node{
    public:
    int data;
    Node *left, *right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};

static int i=-1;
Node * buildTree(vector<int> nodes){
    i++;
    if(nodes[i]==-1){
        return NULL;
    }

    Node *currNode=new Node(nodes[i]);
    currNode->left=buildTree(nodes);
    currNode->right=buildTree(nodes);
    return currNode;
}

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHt=height(root->left);
    int rightHt=height(root->right);

    return max(leftHt, rightHt)+1;
}

int diameter(Node * root){ //O(n^2)
    if(root==NULL){
        return 0;
    }
    int rootDia = height(root->left)+height(root->right)+1;
    int leftSubTree = diameter(root->left);
    int rightSubTree = diameter(root->right);

    return max(rootDia, max(leftSubTree, rightSubTree));
}

int main(){
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root= buildTree(nodes);
    cout<<diameter(root);
    return 0;
}