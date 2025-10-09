#include<iostream>
using namespace std;

//function overloading
class print{
    public:
    void show(int x){
        cout<<"integer : "<<x<<endl;
    }
    void show(string str){
        cout<<"string : "<<str<<endl;
    }
};

//operator overloading
class complex{
int real;
int img;

public:
complex(int r=0, int i=0 ){
    real = r;
    img = i;
}
void showNum(){
    cout<<real<<" + "<<img<<endl;
}

void operator + (complex &c2){
    int resReal = this->real + c2.real;
    int resImg = this->img + c2.img;
    complex c3(resReal, resImg);
    cout<<"res =";
    c3.showNum();
}

};


//function overridding
class parent{
    public:
    void show(){
        cout<<"parent class"<<endl;
    }

    //virtual function
    virtual void hello(){
        cout<<"parent hello"<<endl;
    }
};

class child: public parent{
    public:
    void show(){
        cout<<"child class"<<endl;
    }

    void hello(){
        cout<<"child hello"<<endl;
    }
};

int main(){
child c1;
parent *ptr;
ptr = &c1;
ptr->hello();
return 0;
}