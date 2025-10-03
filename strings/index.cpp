#include<iostream>
using namespace std;
#include<cstring>

// void toUpper(char word[], int n){
//     for(int i=0; i<n; i++){
//         char ch=word[i];
//         if(ch>='A'&&ch<='Z'){
//             continue;
//         }else{
//             word[i]=ch-'a'+'A';
//         }
//     }
// }

// int main(){
//     char word[]="ApPle";
//     toUpper(word, strlen(word));
//     cout<<word<<endl;
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//reveerse the char array
// void reverseChar(char arr[], int n){
//     int start=0;
//     int end = n-1;
//     while(start<=end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     char arr[]="code";
//     reverseChar(arr, strlen(arr));
//     cout<<arr;
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// valis palindrom
// bool validPal(char arr[], int n){
//     int start=0, end=n-1;
//     while(start<end){
//         if(arr[start]!=arr[end]){
//             cout<<"not a valid palindrom";
//             return false;
//         }
//         start++;
//         end--;
//     }
//     cout<<"valid palindrom";
//     return true;
// }
// int main(){
//     char arr[]="racecar";
//     validPal(arr, strlen(arr));
//     return 0;
// }