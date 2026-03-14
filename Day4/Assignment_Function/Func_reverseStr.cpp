#include<iostream>
#include <sstream>
#include <string>
using namespace std;

string reverseStr(string s){


   
    string reverse="";
    for(int i=s.length()-1;i>=0;i--){
        reverse=reverse+s[i];
    }
    return reverse;
}


int main(){

    string s;
    cout<<"enter the string :";
    cin>>s;
    string reverse=reverseStr(s);
    cout<<"reverse of string is :"<<reverse;

}



