#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data= val;
        next = NULL;
    }
};

class List{
    public:
    Node* head;
    Node* tail;
    List(){
        head=NULL;
        tail=NULL;
    }

    void pushFront(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }

    void printLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        } 
        cout<<"NULL"<<endl;
    }
};

Node* splitAtMid(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(prev!=NULL){
        prev->next=NULL;
    }

    return slow;
}

Node* reverseLL(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }

    return prev;
}

void zigzagLL(Node* head){
    Node* righthead = splitAtMid(head);
    Node* reversehead = reverseLL(righthead);

    Node* left = head;
    Node* right = reversehead;
    Node* tail =right;

    while(left!=NULL && right!=NULL){
     Node* nextleft = left->next;
     Node* nextright = right->next;
     
     left->next=right;
     right->next=nextleft;
     
     tail = right;

     left=nextleft;
     right=nextright;
    }

    if(tail!=NULL){
        tail->next=right;
        tail=right;
    }
}

int main(){
    List ll;
    ll.pushFront(10);
    ll.pushFront(9);
    ll.pushFront(8);
    ll.pushFront(7);
    ll.pushFront(6);
    ll.pushFront(5);
    ll.pushFront(4);
    ll.pushFront(3);
    ll.pushFront(2);
    ll.pushFront(1);
    ll.printLL();   
    zigzagLL(ll.head);
    ll.printLL();
    return 0;
}