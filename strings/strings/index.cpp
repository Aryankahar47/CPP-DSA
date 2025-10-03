#include<iostream>
using namespace std;
#include<string>

int main(){
    string str ="aryan kahar";
    for(int i=0; i<str.length(); i++){
        cout<<str[i]<<endl;

    }

    for(char ch: str){
        cout<<ch;
    }

    return 0;
}