#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int countVowels(string s)
{
    int count=0;

    for(char ch:s)
    {
        ch=tolower(ch);

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            count++;
    }
    return count;
}

int main()
{
    string s;
    cout<<"Enter a Letter: ";
    getline(cin,s);

    cout<<"Number of vowels in the string: "<<countVowels(s);
}