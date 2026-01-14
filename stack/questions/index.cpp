#include<iostream>
using namespace std;
#include<stack>

//push at bottom stack
void pab(stack<int>&s1, int val){
    if(s1.empty()){
        s1.push(val);
        return;
    }

    int temp = s1.top();
    s1.pop();

    pab(s1, val);
    s1.push(temp);

    return;
}

int main(){
    stack<int> s1;

    s1.push(40);
    s1.push(30);
    s1.push(20);
    s1.push(10);

    pab(s1, 50);

    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}
