#include<iostream>
using namespace std;
#include<queue>

void firstNonRepeat(string s){
    int freq[26]={0};
    queue<char> q;
    for(int i=0; i<s.size(); i++){
        char ch=s[i];
        q.push(ch);
        freq[ch-'a']++;

        while(!q.empty() && freq[q.front()-'a']>1){
            q.pop();
        }

        if(q.empty()){
            cout<<"-1"<<" ";
        }
        else{
            cout<<q.front()<<" ";
        }
    }
}

int main(){
    string s="aabccxb";
    firstNonRepeat(s);
    return 0;
}