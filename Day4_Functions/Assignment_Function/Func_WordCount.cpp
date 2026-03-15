#include <iostream>
#include <string>
using namespace std;

int wordCount(string s)
{
    int count=0;

    for(int i=0;i<s.length();i++)
    {
        if(i==0 && s[i]!=' ')
            count++;
        else if(s[i]!=' ' && s[i-1]==' ')
            count++;
    }
    return count;
}

int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);

    cout<<"total count is ="<<wordCount(s);
}