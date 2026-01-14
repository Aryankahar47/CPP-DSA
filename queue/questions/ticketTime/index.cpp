#include<iostream>
using namespace std;
#include<queue>
#include<vector>

int ticketTime(vector<int> &tickets, int k){
    queue<int> q;
    for(int i=0; i<tickets.size(); i++){
        q.push(i);
    }

    int time=0;
    while(!q.empty()){
        int idFront = q.front();
        q.pop();
        tickets[idFront]--;
        time++;
        if(k==idFront && tickets[idFront]==0){
        return time;
        }
        if(tickets[idFront]!=0){
            q.push(idFront);
        }
    }
    return time;
}

//optimal solution
int timeRequired(vector<int> tickets, int k){
    int time=0;
    for(int i= 0; i<tickets.size(); i++){
        if(i<=k){
            time+=min(tickets[i], tickets[k]);
        }
        if(i>k){
            time+=min(tickets[i], tickets[k]-1);
        }
    }
    return time;
}

int main(){
    vector<int> tickets={5, 1, 1, 1};
    int k=0;
    cout<<timeRequired(tickets, k);
    return 0;
}