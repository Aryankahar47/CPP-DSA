#include<iostream>
using namespace std;
#include<string>


//is valid Anagram
// bool isAnagram(string str1, string str2){
//     int arr[26]={0};
//     if(str1.length()!=str2.length()){
//         cout<<"not an anagram";
//         return false;
//     }
//     for(int i=0; i<str1.length(); i++){
//         arr[str1[i]-'a']++;
//     }
//     for(int i=0; i<str2.length(); i++){
//         if(arr[str2[i]-'a']==0){
//             cout<<"not an anagram";
//             return false;
//         }
//         arr[str2[i]-'a']--;
//     }
//     cout<<"is an anagram";
//     return true;
// }

// int main(){
//     string str1="aryan";
//     string str2="kahar";
//     isAnagram(str1, str2);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//count lowercase
// void lowercase(string str){
//     int count=0;
//      for(int i=0; i<str.length(); i++){
//         char ch=str[i];
//         if(ch>='a'&& ch<='z'){
//           count++;
//         }
//      }
//      cout<<count;
// }
// int main(){
//     string str="";
//     lowercase(str);
//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//check two strings are equal when swap at most 1 time
bool isTrue(string str1, string str2){
    for(int i=0; i<str2.length(); i++){
        for(int j=0; j<str2.length(); j++){
            swap(str2[i], str2[j]);
                if(str1==str2){
                    cout<<"true";
                    return true;
                }
                swap(str2[i], str2[j]);
            
        }
    }
    cout<<"false";
     return false;
}

//optimised approach
bool isTrue2(string str1, string str2){
    if(str1==str2){
        cout<<"true";
        return true;
    }
    int first=0, second=0, count=0;
    for(int i=0; i<str1.length(); i++){
        if(str1[i]!=str2[i]){
            count++;
            if(first==0){
                first=i;
            }
            else if(second==0){
                second=i;
            }else{
                cout<<"false";
                return false;
            }
        }
    }
    if(count==2){
       return (str1[first]==str2[second] && str1[second]==str2[first]);
    }
    return false;
}
int main(){
    string str1="bank";
    string str2="kabn";
    
    if(isTrue2(str1, str2)){
        cout<<true;
    }
    else{
        cout<<false;
    }
    return 0;
}