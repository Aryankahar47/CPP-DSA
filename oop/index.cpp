#include<iostream>
#include<string>
using namespace std;

class Student{
    
      string name;
      float cgpa;
      public:
      Student(){
        cout<<"costructor without parameter is called"<<endl;
      }
      Student(string name){
        cout<<"constructor with parameter is called"<<endl;
        this->name =name;
        cout<<name<<endl;
      }
      void getPercentage(){
        cout<<(cgpa*10);
      }

      void setName(string nameVal){
        name = nameVal;
      }

      string getName(){
        return name;
      }
      //costum constructor
    Student(Student &original){
        cout<<"copying..."<<endl;
        this->name=original.name;
    }
};

class profile{
    string email;
    string username;
    string password;
    string bio;
    void deactivate(){
        cout<<"deactivate account";
    }
    void editBio(string newBio){
         bio = newBio;
    }
};

int main(){
    Student s1("Babu");
    Student s2("Kahar");
    s1.setName("Aryan");
    cout<<s1.getName()<<endl;
    Student s3("helllo");
    cout<<s3.getName()<<endl;
    Student s4;
    Student s5(s2);
    cout<<s5.getName()<<endl;
    
    return 0;
}