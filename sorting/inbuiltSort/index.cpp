#include<iostream>
using namespace std;
#include<algorithm>

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[]={1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, arr+n, greater<int>());
    print(arr, n);
    return 0;
}