#include<iostream>
using namespace std;

int strLength(string s){
    int length=0;
    for(int i=0;s[i]!='\0';i++){
        length++;
    }
    return length;

}

int main (){
    string s;
    cout<<"enter the string :";
    cin>>s;
    int length=strLength(s);
    cout<<"length of string is:"<<length;

}