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

Node* LCA(Node* root, int n1, int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node*leftTree=LCA(root->left, n1, n2);
    Node*rightTree=LCA(root->right, n1, n2);

    if(leftTree!=NULL&&rightTree!=NULL){
        return root;
    }

    return leftTree==NULL?rightTree:leftTree;
}

int dist(Node* root, int n){
    if(root==NULL){
        return -1;
    }

    if(root->data==n){
        return 0;
    }
    int leftDist=dist(root->left, n);
    if(leftDist!=-1){
        return leftDist+1;
    }
    int rightDist=dist(root->right, n);
    if(rightDist!=-1){
        return rightDist+1;
    }
    return -1;
}

int minDist(Node* root, int n1, int n2){
    Node* rootNode=LCA(root, n1, n2);

    int dist1=dist(rootNode, n1);
    int dist2=dist(rootNode, n2);

    return dist1+dist2;
}

int main(){
    vector<int> nodes={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root=preorder(nodes);
    cout<<minDist(root, 4, 5);
    return 0;
}