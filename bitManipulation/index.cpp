#include<iostream>
using namespace std;

// int main(){
//     cout<<~6<<endl;
//     cout<<~0<<endl;
//     return 0;
// }


//even or odd no.
// void evenOdd(int num){
//     if(!(num & 1)){
//         cout<<num<<" is a even number"<<endl;
//     }
//     else(cout<<"odd number");

// }
// int main(){
//     int num;
//     cout<<"enter any number : ";
//     cin>>num;
//     evenOdd(num);
//     return 0;
// }

//get ith bit
int getIthBit(int num, int i){
    int bitmask = 1<<i;
    if(!(num&bitmask)){
        return 0;
    }
    else{return 1;
    }
}

//set Ith bit
int setIthBit(int num, int i){
    int bitmask = 1<<i;
    return (num | bitmask);
}

//clear ith bit
int clearIthBit(int num, int i){
    int bitMask = ~(1<<i);
    return num & bitMask;
}

//is a power of 2
bool isPower(int num){
    if(!(num & (num-1))){
        return true;
    }
    else{ 
        return false;
    }
}

//update Ith bit
int updateIthBit(int num, int i, int val){
    num = num & ~(1<<i);
    num = num | (val<<i);
    cout<<num<<endl;
}
int main(){
    
    updateIthBit(7, 3,1);
    return 0;
}