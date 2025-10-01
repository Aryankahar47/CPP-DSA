#include<iostream>
using namespace std;

int main(){

//tringrl pattern
// int main(){
//     int n = 10;

//     for(int i = 1; i<=n; i++){

//         for(int j = 1; j<=i; j++){
//             cout<<"*"<<" ";

//         }
//         cout<<endl;
//     }
// }



//inverted tringle
// int main(){
//     int n = 5;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=n-i+1; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }



//half pyramid pattern
// int n = 5;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         cout<<j<<" ";

//     }
//     cout<<endl;
// }


//character pyramid pattern
// int n = 5;
// char ch = 'a';

// for(int i =1; i<=n; i++){
//     for(int j =1; j<=i; j++){
//         cout<<ch++<<" ";
        
//     }
//     cout<<endl;
// }


//hollow rectangle pattern
// int n = 5;
// for(int i = 1; i<=n; i++){
//     cout<<"*"<<" ";
    
//     for(int j= 1; j<=n-2; j++){
//        if(i==1 || i==n){
//         cout<<"*"<<" ";
//        }else{
//         cout<<"  ";}
//        }
//        cout<<"*"<<" "<<endl;
// }



//inverted and roteted half pyramid
// int n = 10;
// for(int i = 1; i<=n; i++){
//     for(int j = 1; j<=n; j++){
//         if(j>=n-i+1){
//             cout<<"*"<<" ";
//         }
//         else{
//             cout<<"  ";
//         }

//     }
//     cout<<endl;
// }


//floiyd's trinagle pattern
// int n = 5;
// int num = 1;
// for(int i = 1; i<=n; i++){
//     for(int j =1; j<=i; j++){
//        cout<<num++<<" ";
//     }
//     cout<<endl;
    
// }



//diamond pattern
// int n = 4;
// for(int i =1; i<=n; i++){
//     for(int j=1; j<=n-i; j++){
//         cout<<"  ";
//     }

//     for(int j=1; j<=2*i-1; j++){
//         cout<<"* ";
//     }
//     cout<<endl;    
// }

// for(int i =n; i>=1; i--){
//     for(int j=1; j<=n-i; j++){
//         cout<<"  ";
//     }

//     for(int j=1; j<=2*i-1; j++){
//         cout<<"* ";
//     }
//     cout<<endl;    
// }




//butterfly pattern
// int n = 4;

//  for(int i = 1; i<=n; i++){
//     for(int j= 1; j<=i; j++ ){
//          cout<<"* ";
//     }

//     for(int j = 1; j<=2*(n-i); j++){
//         cout<<"  ";
//     }

//     for(int j= 1; j<=i; j++ ){
//          cout<<"* ";
//     }
//     cout<<endl;
    
// }

// for(int i = n; i>=1; i--){
//     for(int j= 1; j<=i; j++ ){
//          cout<<"* ";
//     }

//     for(int j = 1; j<=2*(n-i); j++){
//         cout<<"  ";
//     }

//     for(int j= 1; j<=i; j++ ){
//          cout<<"* ";
//     }
//     cout<<endl;
    
// }



//0-1 triangle
// int n= 5;
// bool val = true;

// for(int i =1; i<=n; i++){

//     for(int j = 1; j<=i; j++){
//         cout<<val<<" ";
//         val = !val;
//     }
//     cout<<endl;
    
// }




//rhombus pattern
// int n = 5;
// for(int i = 1; i<=n; i++){

//     //print spaces
//     for(int j=1; j<=n-i; j++){
//        cout<<"  ";   
//     }
//     for(int j=1; j<=n; j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }



//Palindromic Pattern with Numbers.
int n= 5;
int num=1;
int res=num;
for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
        cout<<"  ";
    }

    for(int j=i; j>=1; j--){
        cout<<j<<" ";
    }

    for(int j=2; j<=i; j++){
        cout<<j<<" ";
    }


    cout<<endl;
}


    return 0;
}

