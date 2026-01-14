#include<iostream>
using namespace std;

template<class T>
class Node{
    public:
    T data;
    Node* next;
    Node(T val){
        data = val;
        next = NULL;
    }
};

template<class T>
class Stack{
    public:
    Node<T>* head;

    Stack(){
        head=NULL;
    }
    void push(T val){
        Node<T>* newNode = new Node<T>(val);
        if(head==NULL){
            head=newNode;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        Node<T>* temp = head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    T top(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return T();
        }
        return head->data;
    }

    bool isEmpty(){
        return head==NULL;
    }
};

int main(){
    Stack<int> s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    s1.pop();

    while(!s1.isEmpty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}