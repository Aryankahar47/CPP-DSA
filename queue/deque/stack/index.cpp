#include<iostream>
using namespace std;
#include<deque>

class Stack{
    deque<int> dq;
    public:
    void push(int val){
        dq.push_front(val);
    }

    void pop(){
        dq.pop_front();
    }

    int top(){
        return dq.front(); 
    }

    bool empty(){
        return dq.empty();
    }
};

int main(){
    Stack s;
    for(int i=1; i<=5; i++){
        s.push(i);
    }

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}