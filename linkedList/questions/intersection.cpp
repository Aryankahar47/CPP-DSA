#include<iostream>
using namespace std;

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

void connect(List &A, List &B, int pos){
    if(pos==0){
        return;
    }
    Node* tempA = A.head;
    while(pos>1 && tempA!=NULL){
        tempA = tempA->next;
        pos--;
    }
    Node* tempB = B.tail;
    tempB->next=tempA;
}

int intersection(Node* headA, Node* headB){
    Node* itrA = headA;
    Node* itrB = headB;
   
    while(itrA!=NULL && itrB!=NULL){
        if(itrA == itrB){
            break;
        }
        itrA = itrA->next;
        itrB = itrB->next;
        if(itrA==NULL){
            itrA = headB;
        }else if(itrB==NULL){
            itrB = headA;
        }
    }
    if(itrA == NULL){
        cout<<"no intersection"<<endl;
    }

    Node* temp = headA;
    int pos =1;
    while(temp!=itrA){
        temp=temp->next;
        pos++;
    }
    cout<<"intersection at node: "<<pos<<", value: "<<itrA->data<<endl;
}

int main(){
    List A;
    List B;

    A.pushFront(5);
    A.pushFront(4);
    A.pushFront(3);
    A.pushFront(2);
    A.pushFront(1);

    B.pushFront(8);
    B.pushFront(7);
    B.pushFront(6);

    A.printLL();
    B.printLL();

    connect(A, B, 5);
    A.printLL();
    B.printLL();

    intersection(A.head, B.head);


    return 0;
}