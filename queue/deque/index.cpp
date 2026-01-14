#include<iostream>
using namespace std;
#include<deque>

int main(){
    deque<int> dq;
    dq.push_front(2);
    dq.push_front(1);
    dq.push_back(3);
    dq.push_back(4);

    dq.pop_front();
    dq.pop_back();

    cout<<dq.front();
    cout<<dq.back();

    return 0;
}