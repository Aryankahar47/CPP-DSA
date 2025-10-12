#include<iostream>
#include<vector>
using namespace std;


//Tc = O(nlogn)
//SC = O(n)

void merge(int arr[], int si, int mid, int ei){
    int i =si, j=mid+1;
    vector<int> temp;
    while(i<=mid && j<=ei){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
     while(i<=mid){
            temp.push_back(arr[i++]);
        }
        while(j<=ei){
            temp.push_back(arr[j++]);
        }
        for(int idx=si, x=0; idx<=ei; idx++){
            arr[idx]=temp[x++];
        }
}

void mergeSort(int arr[], int si, int ei){
    if(si>=ei){
        return;
    }
    int mid=si+(ei-si)/2;
    mergeSort(arr, si, mid);
    mergeSort(arr, mid+1, ei);
    merge(arr, si, mid, ei);
}
void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={6, 3, 7, 5, 2, 4};
    int n = sizeof(arr)/sizeof(int);
    mergeSort(arr, 0, n-1);
    printArr(arr, n);
return 0;
}

