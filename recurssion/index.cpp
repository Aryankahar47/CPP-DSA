#include<iostream>
using namespace std;
#include<vector>

void print(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    print(n-1);
}

// int main(){
// print(10000);
// return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//sum of n numbers
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
// int main(){
//     cout<<sum(20);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//n fibonacci
int fibonacci(int n){
    if(n==1 || n==0){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
} 
// int main(){
//     cout<<fibonacci(1);
// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//is array sorted
bool isSort(int arr[], int n, int i){
    if(i==(n-1)){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSort(arr, n, i+1);
}
// int main(){
//     int arr1[]={1, 2, 3, 4, 5};
//     int arr2[]={5, 4, 3, 2, 1};
//     cout<<isSort(arr2, 5, 0);
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//first occurance
int firstOcc(vector<int> arr, int target, int i){
    if(i==arr.size()){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return firstOcc(arr, target, i+1);
}

//last occurance
int lastOcc(vector<int>arr, int target, int i){
    if(i==arr.size()){
        return -1;
    }
    int idxFound=lastOcc(arr, target, i+1);
    if(idxFound==-1&&arr[i]==target){
        return i;
    }
    return idxFound;
}
// int main(){
//     vector<int> arr={1, 2, 3, 3, 4};
//     int target=3;
//     cout<<lastOcc(arr, target, 0);
//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//x to the power n
int pow(int x, int n){
    if(n==0){
        return 1;
    }
    int halfPow = pow(x, n/2);
    int halfPowSquare = halfPow*halfPow;
    if(n%2!=0){
        return x*halfPowSquare;
    }
    return halfPowSquare;
}
// int main(){
//     cout<<pow(2, 10);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//tiling problem
int tilingProblem(int n){
    if(n==0 || n==1){
        return 1;
    }
    return tilingProblem(n-1)+tilingProblem(n-2);
}
// int main(){
//     cout<<tilingProblem(7);
//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//remove duplicate
void removeDuplicate(string str, string ans, int i, int map[26]){
    if(i==str.size()){
        cout<<"ans : "<<ans;
        return;
    }
    int mapIdx=(int)(str[i]-'a');
    if(map[mapIdx]){
        removeDuplicate(str, ans, i+1, map);
    }else{
        map[mapIdx]=true;
        removeDuplicate(str, ans+str[i], i+1, map);
    }
}
// int main(){
//     string str="aryankahar";
//     string ans="";
//     int map[26]={false};
//     removeDuplicate(str, ans, 0, map);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//n pair of friends
int friendPair(int n){
    if(n==1 || n==2){
        return n;
    }
    return friendPair(n-1)+ (n-1)*friendPair(n-2);
}
// int main(){
//     cout<<friendPair(4);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//print binary string
int binString(int n, int lastspace, string ans){
    if(n==0){
        cout<<ans<<endl;
        return 0;
    }
    if(lastspace!=1){
        binString(n-1, 0, ans+"0");
        binString(n-1, 1, ans+"1");
    }
    else{
         binString(n-1, 0, ans+"0");
    }
}
// int main(){
//     string ans="";
//     binString(3, 0, ans);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//binary search
int binarySearch(vector<int>&arr, int key, int i, int j){
   if( i>j){
    return -1;
   }
   int mid=i+(j-i)/2;
   if(arr[mid]==key){
    return mid;
   }
   else if(key<arr[mid]){
    return binarySearch(arr, key, i, mid-1);
   }else if(key>arr[mid]){
    return binarySearch(arr, key, mid+1, j);
   }
}
// int main(){
//     vector<int> arr = {1,2, 3, 4, 5, 6, 7};
//     int key=7;
//     cout<<binarySearch(arr, key, 0, arr.size()-1);
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//find indices of n
void returnIndices(int arr[], int key, int i, int n){
    if(i==n){
        return;
    }
    if(arr[i]==key){
        cout<<i<<" ";
    }
    return returnIndices(arr, key, i+1, n);
}
int main(){
    int arr[]= {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int key=2;
    int n=sizeof(arr)/sizeof(int);
    returnIndices(arr, key, 0, n);
}

