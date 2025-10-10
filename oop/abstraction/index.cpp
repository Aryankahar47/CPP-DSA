#include<iostream>
using namespace std;

//abstract class
class shape{
    public:
    virtual void draw()=0;
};

class circle: public shape{
    public:
    void draw(){
        cout<<"draw circle"<<endl;
    }
};

class square: public shape{
    public:
    void draw(){
        cout<<"draw square"<<endl;
    }
};


//friend function and class
class A{
    string secret = "secret data";
    friend class B;
    friend void revealSecret(A &obj);

};

class B{
    public:
    void showSecret(A &obj){
    cout<<obj.secret<<endl;
    }
};

//friend function
void revealSecret(A &obj){
    cout<<obj.secret<<endl;
}
int main(){
    A a1;
B b1;
b1.showSecret(a1);
revealSecret(a1);

return 0;
}