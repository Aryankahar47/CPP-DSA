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
Node * preorder(vector<int> nodes){
    i++;
    if(nodes[i]==-1){
        return NULL;
    }
    Node* currNode=new Node(nodes[i]);
    currNode->left=preorder(nodes);
    currNode->right=preorder(nodes);
    return currNode;
}

bool LCApath(Node* root, int n, vector<int> &path){
    if(root==NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data==n){
        return true;
    }
    int leftpath = LCApath(root->left, n, path);
    int rightpath =LCApath(root->right, n, path);

    if(leftpath || rightpath){
        return true;
    }
    path.pop_back();
    return false;
}

int LCA(Node* root, int n1, int n2){
    vector<int> path1;
    vector<int>path2;
    
    LCApath(root, n1, path1);
    LCApath(root, n2, path2);
    int minLen = min(path1.size(), path2.size());
    int lca=-1;
    for(int i=0; i<minLen; i++){
        if(path1[i]!=path2[i]){
            return lca;
        }
        lca=path1[i];
    }
    return lca;

}

//approach 2, TC=O(n), SC=O(1);
Node* LCA2(Node* root, int n1, int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node* leftSubTree=LCA2(root->left, n1, n2);
    Node* rightSubTree=LCA2(root->right, n1, n2);

    if(leftSubTree!=NULL && rightSubTree!=NULL){
        return root;
    }
    return leftSubTree==NULL ? rightSubTree:leftSubTree; 
} 

int main(){
    vector<int> nodes={1 ,2 ,4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root=preorder(nodes);
    int n1=3;
    int n2=6;
    //cout<<LCA(root, n1, n2);
    cout<<LCA2(root, n1, n2)->data;
    return 0;
}