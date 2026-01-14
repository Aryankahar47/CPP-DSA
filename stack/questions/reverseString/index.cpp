#include<iostream>
using namespace std;
#include<string>
#include<stack>

string reverseStr(string str){
    string ans;
    stack<char> s1;

    for(int i=0; i<str.size(); i++){
        s1.push(str[i]);
    }

    while(!s1.empty()){
        char top = s1.top();
        ans+=top;
        s1.pop();
    }
    return ans;
}

int main(){
    string str = "Aryan Kahar";
    cout<<reverseStr(str);
    return 0;
}