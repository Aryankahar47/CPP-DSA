#include<iostream>
using namespace std;
#include<queue>

int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}
