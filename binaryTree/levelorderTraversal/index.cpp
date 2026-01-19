#include<iostream>
using namespace std;
#include<vector>
#include<queue>

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

void levelorder(Node *root){
    if(root==NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        if(curr==NULL){
             cout<<endl;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        }else{
            cout<<curr->data<<" ";
            if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }

        }
    }
}

int main(){
    vector<int> nodes={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node* root=buildTree(nodes);
    levelorder(root);
    return 0;
}