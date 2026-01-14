#include<iostream>
using namespace std;
#include<vector>

void activitySelection(vector<int>start, vector<int>end){
    int endTime=end[0];
    int count =1;
    int n=start.size();
    for(int i=1; i<n; i++){
        if(start[i]>=endTime){
            count++;
            endTime=end[i];
        }
    }
    cout<<count;
}

int main(){
    vector<int> start ={1, 3, 0, 5, 8, 5};
    vector<int> end={2, 4, 6, 7, 9, 9};

    activitySelection(start, end);

    return 0;
}