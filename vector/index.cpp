#include<iostream>
using namespace std;
#include<vector>

// int main(){
//     vector<int> vec1;
//     cout<<vec1.size()<<endl;

//     vector<int> vec2 = {1, 2, 3};
//     for(int i=0; i<vec2.size(); i++){
     
//         cout<<vec2[i];
//     }

//     cout<<endl;
//     vector<int> vec3(5, 11);
//     for(int i=0; i<vec3.size(); i++){
//         cout<<vec3[i]<<" ";
//     }
//     return 0;
// }

///////////////////////////////////////////////////////////////////
int main(){
    vector<int> vec = {1, 2, 3, 4};
    cout<<"size of vec: "<< vec.size()<<endl;
    cout<<"capacity of vec: "<< vec.capacity()<<endl;

    vec.push_back(5);
    cout<<"size of vec: "<< vec.size()<<endl;
    cout<<"capacity of vec: "<< vec.capacity()<<endl;

    vec.push_back(6);
    vec.push_back(6);
    vec.push_back(6);
    vec.push_back(6);
    vec.push_back(6);
    cout<<"size of vec: "<< vec.size()<<endl;
    cout<<"capacity of vec: "<< vec.capacity()<<endl;
    
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    cout<<"size of vec: "<< vec.size()<<endl;
    cout<<"capacity of vec: "<< vec.capacity()<<endl;
    return 0;
}