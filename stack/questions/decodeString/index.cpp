#include<iostream>
using namespace std;
#include<stack>
#include<string>

string decodeString(string str){
    stack<int> numStack;
    stack<string> strStack;
    string curr="";
    int num=0;

    for(int i=0; i<str.size(); i++){
        char ch=str[i];
        if(isdigit(ch)){
            num = num*10 + (ch-'0');
        }
        else if(ch =='['){
            numStack.push(num);
            strStack.push(curr);
            num=0;
            curr="";
        }
        else if(ch==']'){
            int repeat=numStack.top();
            numStack.pop();
            string prev=strStack.top();
            strStack.pop();

            while(repeat--){
                prev+=curr;
            }
            curr=prev;
        }
        else{
            curr+=ch;
        }
    }
    return curr;
}

int main(){
    string str = "2[abc]3[cd]ef";

    cout<<decodeString(str);

    return 0;
}