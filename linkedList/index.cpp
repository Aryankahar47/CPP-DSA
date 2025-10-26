#include<iostream>
using namespace std;

class Node{
    int data;
    Node* next;
    public:
    Node(int val){
        data = val;
        next = NULL;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
            next=NULL;
        }
    }
    friend class List;
};

class List{
    Node *head;
    Node *tail;
    public:
    List(){
        head=NULL;
        tail=NULL;
    }
    ~List(){
        if(head!=NULL){
            delete head;
        }
    }
    void pushFront(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }
    void pushBack(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void insertNode(int val, int pos){
        Node*newNode=new Node(val);
        Node*temp=head;
        for(int i=0; i<pos-1; i++){
            if(temp==NULL){
                return;
            }
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void printList(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}   
    void pop_front(){
        Node* temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        cout<<"front node deleted\n";
    }
    void pop_back(){
        Node* temp = head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    int searchIdx(int key){
        Node* temp=head;
        int idx=0;
        while(temp!=NULL){
            if(temp->data==key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
    }
    int helper(Node* temp, int key){
        if(temp==NULL){
            return -1;
        }
        if(temp->data==key){
            return 0;
        }
        int idx= helper(temp->next, key);
        if(idx==-1){
            return -1;
        }
        return idx+1;
    }
    int recursiveSearch(int key){
        return helper(head, key);
    }
    void reverseLL(){
        Node*prev = NULL;
        Node* curr = head;
        tail = head;
        while(curr!=NULL){
            Node* next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
    int getSize(){
        int sz = 0;
        Node* temp = head;
        while(temp!=NULL){
            temp=temp->next;
            sz++;
        }
        return sz;
    }
    void deleteNth(int n){
        int size = getSize();
        Node* prev = head;
        for(int i =1; i<(size-n); i++){
            prev = prev->next;
        }
        Node* toDel = prev->next;
        cout<<"going to delete\n";
        prev->next = prev->next->next;
    }
};

int main(){
    List ll;
    ll.pushFront(3);
    ll.pushFront(2);
    ll.pushFront(1);
    ll.pushBack(10);
    ll.pushBack(9);
    ll.pushBack(8);
    ll.insertNode(11, 4);
    ll.printList();
    ll.pop_front();
    ll.printList();
    ll.pop_back();
    ll.printList();
    cout<<ll.searchIdx(11)<<endl;
    cout<<ll.recursiveSearch(11)<<endl;
    ll.reverseLL();
    ll.printList();
    ll.deleteNth(3);
    ll.printList();
    return 0;
}