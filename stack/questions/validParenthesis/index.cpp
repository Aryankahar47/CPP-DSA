#include<iostream>
using namespace std;
#include<stack>
#include<string>

bool validPerenthesis(string str){
    stack<char> s;
    for(int i=0; i<str.size(); i++){
        char ch=str[i];
        if(ch=='(' || ch=='[' || ch=='{'){
            s.push(ch);
        }else{
            if(s.empty()){
                return false;
            }
                if(ch==')' && s.top()=='(' ||
                   ch==']' && s.top()=='[' ||
                   ch=='}' && s.top()=='{'){
                    s.pop();
                   }else{
                    return false;
                   }
            
        }
    }
    return s.empty();
}

int main(){
    string str1= "([}])";
    string str2="([{}])";

    cout<<validPerenthesis(str1)<<endl;
    cout<<validPerenthesis(str2)<<endl;
    return 0;
}

