#include<iostream>
using namespace std;
#include<stack>

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data= val;
        next=NULL;
    }
};

class List{
    public:
    Node*head;
    Node* tail;
    List(){
        head=NULL;
        tail=NULL;
    }

    void push(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
};

bool isPalindrome(Node* head){
    Node* slow=head;
    Node* fast=head;
    stack<int> s;

    while(fast!=NULL && fast->next!=NULL){
        s.push(slow->data);
        slow=slow->next;
        fast=fast->next->next;
    }

    //if odd
    if(fast!=NULL){
        slow=slow->next;
    }

    //if even list
    while(slow!=NULL){
        if(s.top()!=slow->data){
          return false;
        }
        s.pop();
        slow=slow->next;
        }

    return true;
}

int main(){
    List ll;
    ll.push(1);
    ll.push(2);
    ll.push(2);
    ll.push(1);
   
    cout<<isPalindrome(ll.head);

    return 0;
}
