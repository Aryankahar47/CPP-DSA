#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data= val;
        next= NULL;
        prev= NULL;
    }
};

class dblList{
    public:
    Node* head;
    Node* tail;
    dblList(){
        head= NULL;
        tail= NULL;
    }

    void pushFront(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }

    void popFront(){
        Node* temp = head;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;
        }
        temp->next=NULL;
        delete temp;
    }

    void pushBack(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }

    }

    void popBack(){
        if(tail==NULL){
            cout<<"empty list"<<endl;
            return;
        }
        Node* temp = tail;
        if(tail->prev==NULL){
            head=tail=NULL;
        }else{
            tail=tail->prev;
            tail->next=NULL;
        }
        temp->prev=NULL;
        delete temp;
    }

    void printLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" <=> ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    dblList dbLL;
    dbLL.pushFront(5);
    dbLL.pushFront(4);
    dbLL.pushFront(3);
    dbLL.pushFront(2);
    dbLL.pushFront(1);
    dbLL.printLL();
    dbLL.popFront();
    dbLL.printLL();
    dbLL.pushBack(6);
    dbLL.printLL();
    dbLL.popBack();
    dbLL.printLL();
    return 0;
}