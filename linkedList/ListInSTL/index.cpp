#include<iostream>
using namespace std;
#include<list>
#include<iterator>

void printList(list<int> ll){
    list<int> :: iterator itr;
    for(itr = ll.begin(); itr!=ll.end(); itr++){
        cout<<(*itr)<<"->";
    }
    cout<<"NULL"<<endl;
}


int main(){
    list<int> ll;
    ll.push_front(1);
    ll.push_back(2);
    ll.push_front(3);
    ll.push_back(4);
     printList(ll);
    ll.pop_front();
    ll.pop_back();
    cout<<"size:"<<ll.size()<<"\n";
    cout<<"front:"<<ll.front()<<"\n";
    cout<<"back:"<<ll.back()<<"\n";
    printList(ll);
    return 0;

}