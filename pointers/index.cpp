#include<iostream>
using namespace std;

// void changeA(int a){
//     a=20;
//     cout<<a<<endl;
// }

// void changeA(int *ptr){
//     *ptr=20;
//     cout<<*ptr<<"\n";
// }

void changeA(int &param){
    param=30;
    cout<<param<<endl;
}
int main(){
    int a = 10;
    changeA(a);

   cout<< a<< endl;
    return 0 ;
    
}
