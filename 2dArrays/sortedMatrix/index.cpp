#include<iostream>
using namespace std;

bool sortedMatrix(int mat[4][4], int n, int m, int key){
    int i=0;
    int j=m-1;
    int cell=mat[i][j];

    while(i<n && j>=0){
         if(mat[i][j]==key){
            cout<<"Key value found : ("<<i<<", "<<j<<")";
            return true;
         }
         else if(mat[i][j]>key){
            j--;
         }
         else{
            i++;
         }
    }
    cout<<"key not found";
    return false;
}

int main(){
    int matrix[4][4]={{10, 20 , 30, 40},
                      {15, 25, 35, 45},
                       {27, 29, 37, 38},
                      {32, 33, 49, 50}};
    sortedMatrix(matrix, 4, 4, 51);
    return 0;
}