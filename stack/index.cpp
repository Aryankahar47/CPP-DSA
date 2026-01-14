#include<iostream>
using namespace std;
#include<vector>

template <class T>
class stack{
    vector<T> vec;
    public:
    void push(T val){
        vec.push_back(val);
    }

    void pop(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        vec.pop_back();
    }

    T top(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
            return -1;
        }
         int lastIdx = vec.size()-1;
         return vec[lastIdx];
    }

    bool isEmpty(){
        return vec.size()==0;
    }
};

int main(){
    stack<char> s1;
    s1.push('a');
    s1.push('b');
    s1.push('c');
    s1.push('d');

    s1.pop();

    

    while(!s1.isEmpty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }

     s1.isEmpty();
    return 0;
}