#include<iostream>
using namespace std;
#include<vector>

//TC = O(2^n)
//SC = O(n)

// void printSubset(string str, string subset){
//     char ch =str[0];
//     if(str.size()==0){
//         cout<<subset<<" ";
//         return;
//     }
//     printSubset(str.substr(1, str.size()), subset+ch);
//     printSubset(str.substr(1, str.size()), subset);
//     return;
// }

// int main(){
//     string str = "abc";
//     string subset;
//     printSubset(str, subset);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// find permutations

//TC = O(n!)
//SC = O(n)
// void printPermutations(string str, string ans){
//     int n=str.size();
//     if(n==0){
//         cout<<ans<<" ";
//     }
//     for(int i=0; i<n; i++){
//         char ch=str[i];
//         string nextstr = str.substr(0, i)+str.substr(i+1, n-i-1);
//         printPermutations(nextstr, ans+ch);
//     }
//     return;
// }
// int main(){
//     string str = "aryan";
//     string ans="";
//     printPermutations(str, ans);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//N queens problem

// void printBoard(vector<vector<char>>board){
//     int n= board.size();
//     for(int i = 0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<board[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"---------------"<<endl;
// }

// bool isSafe(vector<vector<char>> board, int row, int col){
//     int n=board.size();
//     for(int j=0; j<n; j++){
//         if(board[row][j]=='Q'){
//         return false;
//         }
//     }
//     for(int i=0; i<n; i++){
//         if(board[i][col]=='Q'){
//             return false;
//         }
//     }
//     for(int i=row, j=col; i>=0 && j>=0; i--, j--){
//         if(board[i][j]=='Q'){
//             return false;
//         }
//     }
//     for(int i= row, j=col; i>=0 && j<n; i--, j++){
//         if(board[i][j]=='Q'){
//             return false;
//         }
//     }
//     return true;
// }
// void nQueens(vector<vector<char>>board, int row){
//     int n=board.size();
//     if(row==n){
//         printBoard(board);
//         return;
//     }
//     for(int j=0; j<n; j++){
//         if(isSafe(board, row, j)){
//              board[row][j]='Q';
//         nQueens(board, row+1);
//         board[row][j]='.';
//         }
       
//     }
// }
// int main(){
//     vector<vector<char>> board;
//     int n=5;

//     for(int i=0; i<n; i++){
//         vector<char>newRow;
//         for(int j=0; j<n; j++){
//             newRow.push_back('.');
//         }
//         board.push_back(newRow);
//     }
// nQueens(board, 0);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//grid ways
// int gridWays(int row, int col, int n, int m){
//     if(row==n-1 && col==m-1){
//         return 1;
//     }
//     if(row>=n || col>=m){
//         return 0;
//     }
//     int val1=gridWays(row, col+1, n, m);
//     int val2=gridWays(row+1, col, n, m);
//     return val1+val2;
// }
// int main(){
//     int n= 4;
//     int m= 3;
//     cout<<gridWays(0,0, n, m);
//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//sudoku solver
void printSudoku(int sudoku[][9]){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout<<sudoku[i][j]<<" ";
           }
        cout<<endl;
        }
}

bool isSafe(int sudoku[][9], int row, int col, int digit){
    for(int i=0; i<=8; i++){
        if(sudoku[i][col]==digit){
            return false;
        }
    }
    for(int i=0; i<=8; i++){
        if(sudoku[row][i]==digit){
            return false;
        }
    }
    int startRow = (row/3)*3;
    int startCol = (col/3)*3;
    for(int i=startRow; i<=startRow+2; i++){
        for(int j=startCol; j<=startCol+2; j++){
            if(sudoku[i][j]==digit){
                return false;
            }
        }
    }
    return true;
}

bool sudokuSolver(int sudoku[][9], int row, int col){
    if(row == 9){
        printSudoku(sudoku);
        return true;
    }
    int nextRow = row;
    int nextCol = col+1;
    if(col+1==9){
        nextRow = row+1;
        nextCol = 0;
    }
    if(sudoku[row][col]!=0){
        return sudokuSolver(sudoku, nextRow, nextCol);
    }
    for(int digit=1; digit<=9; digit++){
        if(isSafe(sudoku, row, col, digit)){
            sudoku[row][col]=digit;
            if(sudokuSolver(sudoku, nextRow, nextCol)){
                return true;
            }
            sudoku[row][col]=0;
        }
    }
    return false;
}
int main(){
    int sudoku[9][9]={{0, 0, 8, 0, 0, 0, 0, 0, 0},
                   {4, 9, 0, 1, 5, 7, 0, 0, 2},
                   {0, 0, 3, 0, 0, 4, 1, 9, 0},
                   {1, 8, 5, 0, 6, 0, 0, 2, 0},
                   {0, 0, 0, 0, 2, 0, 0, 6, 0},
                   {9, 6, 0, 4, 0, 5, 3, 0, 0},
                   {0, 3, 0, 0, 7, 2, 0, 0, 4},
                   {0, 4, 9, 0, 3, 0, 0, 5, 7},
                   {8, 2, 7, 0, 0, 9, 0, 1, 3}};
    sudokuSolver(sudoku, 0, 0);              
    return 0;               
}