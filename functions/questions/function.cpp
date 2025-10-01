#include<iostream>
using namespace std;


// void product(int a, int b){
//    cout<< a*b;
// }

// int main(){
//     product(2, 3);
    

// }


//even or odd

// void evenOdd(int num){

//     if(num<=0){
//     cout<<"Number is either 0 or negative";
//    }
//   else if(num%2==0){
//     cout<<"number is even";
//    }
   
//    else{
//     cout<<"number is odd";
//    }
// }
// int main(){
//  evenOdd(0);
//     return 0;
// }




//factorial of a number n
// int factorial(int num){
//     int res =1;
//      for(int i=1; i<=num; i++){
        
//         res=res*i;

//      }
//      cout<<res;
// }
// int main(){
//     factorial(6);
    
//     return 0;
// }


//prime or not

bool prime(int num){
    if(num==1){
        return false;
    }
   for(int i=2; i<=num-1; i++){
    if(num%i==0){
       return false;

    }
   }
   return true;
}
int main(){
   cout<<prime(5);
    return 0;
}