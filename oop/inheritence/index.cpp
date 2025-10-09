#include<iostream>
using namespace std;


//single inheritence
class animal {
    public:
void eat(){
    cout<<"eat"<<endl;
}

void breath(){
    cout<<"breath"<<endl;
}
};

class fish : public animal{
    public:
    void swim(){
        cout<<"swim"<<endl;
    }
};

//multilevel inheritence
class mammal: public fish{
    public:
    void sleep(){
        cout<<"sleep"<<endl;
    }
};

//multiple inheritence
class bird : public mammal, public animal{
    public:
    void fly(){
        cout<<"fly"<<endl;
    }
};

//hierarchical inheritence
//one base class and multiple derived class
class fish : public animal{
    public:
    void swim(){
        cout<<"swim"<<endl;
    }
};

class bird : public animal{
    public:
    void fly(){
        cout<<"fly"<<endl;
    }
};

int main(){
fish f1;
f1.eat();
f1.breath();
f1.swim();

// mammal m1;
// m1.eat();
// m1.breath();
// m1.swim();
// m1.sleep();

bird b1;
b1.eat();
b1.breath();
b1.fly();

return 0;
}