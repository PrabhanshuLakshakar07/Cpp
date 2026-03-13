#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);

    int freq[26] = {0};

    
    for(char ch : a)
    {
        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;   

        freq[ch - 'a']++;
    }

   
    for(char ch : b)
    {
        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        freq[ch - 'a']--;
    }

    bool ok = true;

    for(int i=0;i<26;i++)
    {
        if(freq[i] != 0)
        {
            ok = false;
            break;
        }
    }

    if(ok)
        cout<<"YES - Anagram";
    else
        cout<<"NO - Not Anagram";
}