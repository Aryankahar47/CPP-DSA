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
static int i = -1;

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

pair<int, int> info(Node* root){ //O(n)
    if(root==NULL){
        return make_pair(0, 0);
    }
    pair<int, int> leftInfo = info(root->left);
    pair<int, int> rightInfo = info(root->right);

    int height = max(leftInfo.second, rightInfo.second)+1;
    int rootDia = leftInfo.second +rightInfo.second + 1;
    int diameter = max(rootDia, max(leftInfo.first, rightInfo.first));
    
    return make_pair(diameter, height);
}

int main(){
 vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
 Node* root= preorder(nodes);
 pair<int, int> ans = info(root);
 cout<<ans.first;
 return 0;
}