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
    // ~List(){
    //     Node * current = head;
    //     while(current!=NULL){
    //         Node* nextNode = current->next;
    //         delete current;
    //         current = nextNode;
    //     }
    //     head=tail=NULL;
    //     cout<<"List deleted\n";
    // }
    void pushFront(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }

};
bool detectCycle(Node* head){
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                cout<<"cycle exist\n";
                return true;
            }
        }
        cout<<"cycle doesn't exist\n";
        return false;
    }

void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL\n";

    return;
}
int main(){
    List ll;
    ll.pushFront(1);
    ll.pushFront(2);
    ll.pushFront(3);
    ll.pushFront(4);
    ll.tail->next=ll.head;
    detectCycle(ll.head);
    return 0;
}