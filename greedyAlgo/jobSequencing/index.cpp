#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool compare(pair<int, int>p1, pair<int, int>p2){
    return p1.second > p2.second;
}

int maxProfit(vector<pair<int, int>> jobs, int n){
    sort(jobs.begin(), jobs.end(), compare);

    int endTime = 2;
    int ans=jobs[0].second;

    for(int i=1; i<n; i++){
        if(jobs[i].first>=endTime){
            ans+=jobs[i].second;
            endTime++;
        }
    }
    return ans;
}

int main(){
    int n=4;
    vector<pair<int, int>> jobs(n, make_pair(0, 0));

    jobs[0]=make_pair(4, 20);
    jobs[1]=make_pair(1, 10);
    jobs[2]=make_pair(1, 40);
    jobs[3]=make_pair(1, 30);

    cout<<maxProfit(jobs, n);
    return 0;
}