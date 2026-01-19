#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<map>

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
    Node*currNode=new Node(nodes[i]);
    currNode->left=preorder(nodes);
    currNode->right=preorder(nodes);
    return currNode;
}

void topView(Node *root){
    queue<pair<Node*, int>> q;
    map<int, int> m;

    q.push(make_pair(root, 0));

    while(!q.empty()){
        pair<Node*, int> curr = q.front();
        Node* currNode = curr.first;
        int currHd = curr.second;
        q.pop();

        if(m.count(currHd)==0){
            m[currHd]=currNode->data;
        }
        if(currNode->left!=NULL){
            pair<Node *, int> leftpair = make_pair(currNode->left, currHd-1);
            q.push(leftpair);
        }
        if(currNode->right!=NULL){
            pair<Node*, int> rightpair=make_pair(currNode->right, currHd+1);
            q.push(rightpair);
        }
    }

    for(auto it:m){
        cout<<it.second<<" ";
    }
}

int main(){
    vector<int> nodes ={1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node * root=preorder(nodes);
    topView(root);
    return 0;
}

