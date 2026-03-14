#include <iostream>
#include <string>
using namespace std;

string toUpperStr(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;
    }
    return s;
}

int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);

    cout<<"String in uppercase: "<<endl;
    cout<<toUpperStr(s);
}