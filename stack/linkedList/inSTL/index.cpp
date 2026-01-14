#include<iostream>
using namespace std;
#include<list>

template<class T>
class Stack{
    list<T> ll;
    public:
    void push(T val){
        ll.push_front(val);
        return;
    }

    void pop(){
        ll.pop_front();
        return;
    }

    T top(){
        return ll.front();
    }

    bool isEmpty(){
        return ll.front()==0;
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