#include<iostream>
using namespace std;
#include<vector>
#include<stack>

void maxAreaHisto(vector<int> height){
    int n=height.size();
    stack<int> s;
    vector<int> nsL(n);
    vector<int> nsR(n);

    //nsL
    s.push(0);
    nsL[0]=-1;
    for(int i=1; i<n; i++){
        int curr=height[i];
        while(!s.empty() && curr<=height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsL[i]=-1;
        }else{
            nsL[i]=s.top();
        }
        s.push(i);
    }

    while(!s.empty()){
        s.pop();
    }

    //nsR
    s.push(n-1);
    nsR[n-1]=n;
    for(int i=n-2; i>=0; i--){
        int curr=height[i];
        while(!s.empty() && curr<=height[s.top()]){
            s.pop();
        }
        if(s.empty()){
            nsR[i]=n;
        }
        else{
            nsR[i]=s.top();
        }
        s.push(i);
    }
     

    for(int i=0; i<n; i++){
        int area = height[i]*(nsR[i]-nsL[i]-1);
       int maxArea=0;
        maxArea=max(area, maxArea);
     cout<<maxArea<<", ";  
    }
     
    cout<<endl;
}



int main(){
    vector<int> height={2, 1, 5, 6, 2, 3};
    maxAreaHisto(height);
    return 0;
}