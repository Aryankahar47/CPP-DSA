#include<iostream>
using namespace std;

class complex{
    int real;
    int img;
public:
    complex(int r, int i){
        real=r;
        img=i;
    }

    complex operator - (complex &obj){
        int resReal = this->real - obj.real;
        int resImg = this->img - obj.img;

        complex res(resReal, resImg);
        return res;
    }

    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
// int main(){
//     complex c1(4, 3);
//     complex c2(3, 2);
//     complex c3=c1-c2;
//     c3.display();
//     return 0;

// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class BankAccount{
    int accountNumber;
    int balance;

    public:
    BankAccount(int num, int bal){
        accountNumber=num;
        balance=bal;
    }

    void deposit(int amount){
    balance+=amount;
    }

    void withdraw(int amount){
        balance-=amount;
    }

    int getBalance(){
        return balance;
    }

};
int main(){
    BankAccount b1(101, 100);
    b1.deposit(100);
    b1.withdraw(50);
    cout<<b1.getBalance()<<endl;

return 0;
}