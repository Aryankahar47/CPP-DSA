#include<iostream>
using namespace std;
#include<stack>

void PAB(stack<int>& s1, int val){
    if(s1.empty()){
        s1.push(val);
        return;
    }
    int temp = s1.top();
    s1.pop();
    PAB(s1, val);
    s1.push(temp);
    return;
}

void reverseStack(stack<int> &s1){
    if(s1.empty()){
        return;
    }
    int temp = s1.top();
    s1.pop();
    reverseStack(s1);
    PAB(s1, temp);
}

void printStack(stack<int> s1){
    while(!s1.empty()){
    cout<<s1.top()<<" ";
    s1.pop();
    }
    cout<<endl;
    return;
}

int main(){
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    printStack(s1);

    reverseStack(s1);

    printStack(s1);

return 0;

}
