#include<iostream>
using namespace std;
#include<list>
#include<iterator>

// void deleteNNodes(int M, int N, list<int> :: iterator itr, list<int> & ll){
//     if(itr==ll.end()){
//         return;
//     }

//     for(int i=0; i<M; i++){
//         if(itr==ll.end()){
//             return;
//         }
//         itr++;
//     }
//     for(int j=0; j<N; j++){
//         if(itr==ll.end()){
//             break;
//         }
//         itr= ll.erase(itr);
//     }

//     deleteNNodes(M, N, itr, ll);

// }

// int main(){
//     list<int> ll;
//     ll.push_back(1);
//     ll.push_back(2);
//     ll.push_back(3);
//     ll.push_back(4);
//     ll.push_back(5);
//     ll.push_back(6);
//     ll.push_back(7);
//     ll.push_back(8);
//     ll.push_back(9);

//     int M = 2;
//     int N = 2;

//     list<int> :: iterator itr = ll.begin();

//     deleteNNodes(M, N, itr, ll);

//     for(int x:ll){
//         cout<<x<<"->";
//     }
//     cout<<"NULL";

//     return 0;


// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
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
    
    void pushBack(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void printLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;;
    }
};

void deleteNNode(int M, int N, Node* head){
    Node* current = head;
    while(current!=NULL){
        for(int i= 1; i<M && current!=NULL; i++){
            current=current->next;
        }

        if(current==NULL){
            return;
        }

        Node* temp=current->next;

        for(int j=0; j<N && temp!=NULL; j++){
           Node* del = temp;
           temp=temp->next;
           delete del;
        }
        current->next=temp;
        current=temp;
    }
}

int main(){
    List ll;
    int M=2, N=2;
    ll.pushBack(1);
    ll.pushBack(2);
    ll.pushBack(3);
    ll.pushBack(4);
    ll.pushBack(5);
    ll.pushBack(6);
    ll.pushBack(7);
    ll.pushBack(8);
    ll.pushBack(9);

    ll.printLL();

    deleteNNode(M, M, ll.head);

    ll.printLL();

    return 0;
}