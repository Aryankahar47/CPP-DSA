#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int absoluteDiff(vector<int> a, vector<int> b){ //TC = O(n log n)
    int n=a.size();
    int ans=0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i = 0; i<n; i++){
        ans+=abs(a[i]-b[i]);
    }
    return ans;
}

int main(){
    vector<int> a = {4, 1, 8, 7};
    vector<int> b = {2, 3, 6, 5};

    cout<<absoluteDiff(a, b);
    return 0;
}