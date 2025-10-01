#include <iostream>
using namespace std;
#include<climits>

// int main(){
//  //largest value in an array
 
//  int arr[5]={76, 45,5 , 16, 90};
//  int n = sizeof(arr)/sizeof(int);
//  int max= arr[0];

//  for(int i =0; i<n; i++){
//     if(arr[i]>max){
//         max = arr[i];
//     }

//  }

//  cout<<"largest no is :"<<max;
//   return 0;
// }


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//reverse of an array

// void reverseArray(int *num, int n){
//         for(int i = 0; i<n; i++){
//         cout<<num[i]<<", ";

//     }

// }
// int main(){
//     int num[7]={1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(num)/sizeof(int);

//     int start = 0, end = n-1;
//     while(start<end){
//         int temp = num[start];
//         num[start] = num[end];
//         num[end] = temp;

//         start++;
//         end--;
        
//     }

//     reverseArray(num, n);
//     return 0;
// }


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//binsry search (sorted array)

// int binarySearch(int *arr, int n, int key){
//     int start=0, end=n-1;
//  while(start<=end){
//     int mid=(start+end)/2;
//         if(arr[mid]==key){
//             return mid; 
//         }
//         else if(arr[mid]<key){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[7]={1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr)/sizeof(int);
//     cout<<binarySearch(arr, n, 55);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//print continous subarray

// void subArray(int *arr, int n){
//     for(int start=0; start<n; start++){
//         for(int end=start; end<n; end++){
//             // cout<< "{"<< start<<", "<<end<<"}";
//             cout<<"{";
//             for(int i=start; i<=end; i++){
//                 cout<< arr[i];
//         }
//         cout<<"}";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
//     subArray(arr, n);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Max sub array sum

// void maxSubArray(int *arr, int n){
//  int maxSum = INT_MIN;
//      for(int start=0; start<n; start++){
//         for(int end=start; end<n; end++){
//             int currSum = 0;
//             for(int i=start; i<=end; i++){
//                currSum = currSum + arr[i];
//             }
//             cout<<currSum<<", ";
//             maxSum = max(maxSum, currSum);
//         }
//         cout<<endl;
//      }
//      cout<<"maximum sum of a sub array is : "<<maxSum;
     
// }


//optimised code
// void maxSubArray(int *arr, int n){
//     int maxSum = INT_MIN;
//     for(int start=0; start<n; start++){
//         int currSum = 0;
//         for(int end=start; end<n; end++){
//             currSum = currSum+arr[end];
//             maxSum = max(maxSum, currSum);
//         }
//     }
//     cout<< "max sum of an sub array is: "<< maxSum;
// }


//kadan's algorithm for max sum sub arrray
// void maxSubArray(int *arr, int n){
//     int maxSum = INT_MIN;
//     int currSum = 0;
//     for(int i = 0; i<n; i++){
//         currSum += arr[i];
//         maxSum = max(maxSum, currSum);
//         if(currSum<0){
//             currSum = 0;
//         }

//     }
//     cout<<"max sum sub array is : "<<maxSum;
// }


// int main(){
//     int arr[]={-1, -2, -3, -4};
//     int n = sizeof(arr)/sizeof(int);
//     maxSubArray(arr, n);
// return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//best buy and sell stock
// void maxProfit(int *price, int n){
//     int bestBuy[100000];
//     bestBuy[0] = INT_MAX;
   
//     for(int i = 1; i<n; i++){
//         bestBuy[i] = min(bestBuy[i-1], price[i-1]);
        
//     }
//     int maxProfitsell = 0;
//     for(int i=0; i<n; i++){
//         int currProfit = price[i]-bestBuy[i];
//         maxProfitsell = max(maxProfitsell, currProfit);
//     }

//     cout<<maxProfitsell;
    
// }
// int main(){
//     int price[]={7, 1, 5, 3, 6, 4};
//     int n = sizeof(price)/sizeof(int);
//     maxProfit(price, n);

//     return 0;
// }


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//water trapped
// void waterTrapped(int *height, int n){
//     int leftMax[20000], rightMax[20000];
//     int totalWaterTrap=0;
//     leftMax[0]= height[0], rightMax[n-1]= height[n-1];
   
//     for(int i = 1; i<n; i++){
//         leftMax[i] = max(height[i-1], leftMax[i-1]);
         
//     }
    
//     for(int i=n-2; i>=0; i--){
//         rightMax[i]  = max(height[i+1], rightMax[i+1]);
        
//     }
//     for(int i=0; i<n; i++){
//         int currWater= min(leftMax[i], rightMax[i]) - height[i];
//         if(currWater>0){
//           totalWaterTrap += currWater;
//         }
       
//     }
// cout<<totalWaterTrap;
// }

// int main(){
//     int height[]={4, 2, 0, 6, 3, 2, 5};
//     int n = sizeof(height)/sizeof(int);

//     waterTrapped(height, n);

//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//if any value appears twice
int twiceValue(int *arr, int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                
                cout<<"ok"<<endl;
                return true;

            }
        }
    }
    return false;
}
int main(){
    int arr[]={1, 2, 3, 1};
    int n = sizeof(arr)/sizeof(int);

    cout<<twiceValue(arr, n);
    
    return 0;


}