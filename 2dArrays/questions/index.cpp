#include<iostream>
using namespace std;

// void print7(int arr[][3], int n, int m){
//     int count=0;
//      for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr[i][j]==7){
//                 count++;
//             }
//         }
//      }
//      cout<<count;
// }

// int main(){
//     int arr[2][3]={{4, 5, 3},
//                  {8, 8, 4}};
//     print7(arr, 2, 3);    
//     return 0;
                 
// }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//sum of second row of nums

// void sum(int nums[][3], int n, int m){
//     int sum2=0;
//     for(int j=0; j<m; j++){
//        sum2=sum2+nums[1][j];
//     }
//     cout<<sum2;
// }

// int main(){
//     int nums[3][3]={{1, 4, 9},
//                   {11, 4, 3},
//                   {2, 2, 3}};
//     sum(nums, 3, 3);              
//     return 0;              
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//transpose of a matrix

void transpose(const char* matrix[][3], int n, int m){
    const char* transpose[m][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           transpose[j][i]=matrix[i][j];
        }
    }

    //print
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    const char* matrix[2][3]={{"a11", "a12", "a13"},
                              {"a21", "a22", "a23"}};
    transpose(matrix, 2, 3);
    return 0;                    
}