#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool compare(pair<double, int>p1, pair<double, int> p2){
    return p1.first > p2.first;
}

double maxValue(vector<int> value, vector<int> weight, int W){ //TC = O(n log n)
    int n= value.size();
    double max=0;
    vector<pair<double, int>> ratio(n, make_pair(0.0, 0));

    for(int i=0; i<n; i++){
        double r=value[i]/(double)weight[i];
        ratio[i]=make_pair(r, i);
    }
    sort(ratio.begin(), ratio.end(), compare);

    for(int i=0; i<n; i++){
        int idx=ratio[i].second;
        if(weight[idx]<=W){
            max=max+value[idx];
            W-=weight[idx];
          
        }else{
            max+=W*ratio[i].first;
            W=0;
            break;
        }
    }
    cout<<max<<endl;
return max;

}

int main(){
    vector<int> value={60, 100, 120};
    vector<int> weight={10, 20, 30};

    int W=50;
    cout<<maxValue(value, weight, W);
    return 0;
}