#include<iostream>
using namespace std;
#include<vector>

class Node{
    public:
    int data;
    Node * next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
    head = NULL;
    tail= NULL;
    }
    ~List(){
        Node* temp= head;
        while(temp!=NULL){
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
        head= tail= NULL;
    }
    void pushFront(int val){
        Node* newNode= new Node(val);
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
        cout<<endl;
    }
    void reverseLL(){
        Node* prev = NULL;
        Node* curr = head;
        tail = head;
        while(curr!=NULL){
            Node* next = curr->next;
            curr->next= prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
    bool isPalindrom(){
        vector<int>val;
        Node* temp=head;
        while(temp!=NULL){
            val.push_back(temp->data);
            temp=temp->next;
        }
        int st=0;
        int end=val.size()-1;
        while(st<end){
            if(val[st]!=val[end]){
               return false;
            }
            st++;
            end--;
        }
        return true;
    }
};

int main(){
    List ll;
    ll.pushFront(1);
    ll.pushFront(2);
    ll.pushFront(1);
    ll.printLL();
    ll.reverseLL();
    ll.printLL();
    cout<<ll.isPalindrom();

    return 0;
}