#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next=NULL;
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
};
void removeCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    bool isCycle = false;
    while(fast!=NULL || fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"cycle exist\n";
            isCycle=true;
            break;
        }
    }
    if(!isCycle){
         cout<<"cycle doesn't exist\n";
         return;
    }
    slow=head;
    if(slow==fast){
        while(fast->next!=slow){
            fast=fast->next;
        }
        fast->next=NULL;
    }else{
        Node* prev = fast;
        while(slow!=fast){
            slow=slow->next;
            prev=fast;
            fast=fast->next;
        }
        prev->next=NULL;
    }

}
void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
    List ll;
    ll.pushFront(1);
    ll.pushFront(2);
    ll.pushFront(3);
    ll.pushFront(4);
    ll.pushFront(5);
    ll.tail->next=ll.head;
    removeCycle(ll.head);
    printLL(ll.head);

    return 0;
}
