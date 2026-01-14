#include<iostream>
using namespace std;

class stack{
    int arr[5];
    int idx;
    public:
    stack(){
        idx=-1;
    }
    void push(int val){
        if(idx==4){
            cout<<"stack overflow"<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
        
        return;
    }

    void pop(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        idx--;
        return;
    }

    int top(){
        if(isEmpty()){
            cout<<"stack is empty";
            return-1;
        }
        return arr[idx];
    }

    bool isEmpty(){
        return idx==-1;
    }



};

int main(){
    stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    
    

    while(!s1.isEmpty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }

    return 0;
}