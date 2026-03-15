#include <iostream>
#include <string>
using namespace std;

int charFreq(string s, char c)
{
    int count=0;

    for(char ch:s)
        if(ch==c)
            count++;

    return count;
}

int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);

    char c;
    cout<<"Enter a character: ";
    cin>>c;
cout<<"total count of "<<c<<" is = ";
    cout<<charFreq(s,c);
}