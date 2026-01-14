#include<iostream>
using namespace std;
#include<deque>

class Queue{
    deque<int> dq;
    public:
    void push(int val){
        dq.push_back(val);
    }

    void pop(){
        dq.pop_front();
    }

    int front(){
        return dq.front();
    }

    bool empty(){
        return dq.empty();
    }
};
int main(){
   Queue q;
   for(int i=1; i<=5; i++){
    q.push(i);
   }

   while(!q.empty()){
    cout<<q.front();
    q.pop();
   }
   return 0;
}
