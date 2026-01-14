#include<iostream>
using namespace std;
#include<stack>
#include<sstream>
#include<string>

string simplifyPath(string path){
    stack<string> s;
    string token;
    stringstream ss(path);

    while(getline(ss, token,'/')){
        if(token=="" || token=="."){
            continue;
        }
        else if(token==".."){
            if(!s.empty()){
                s.pop();
            }
        }
        else{
            s.push(token);
        }
    }

    string result="";
    while(!s.empty()){
        result="/"+s.top()+result;
        s.pop();
    }

    return result.empty()?"/":result;
}

int main(){
    string path = "/home//foo/";

    cout<<simplifyPath(path);

    return 0;
}

