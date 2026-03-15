#include<iostream>
#include<string>
using namespace std;
int main()
{
    //vowels in a string
    string word = "programming";
    int count=0;
    for(int i =0;i<word.length();i++)
    {

        cout<<"\nat "<<i<<" we have :"<<word.at(i);
        if(word.at(i)=='a' || word.at(i)=='e' || word.at(i)=='i' || word.at(i)=='o' || word.at(i)=='u')
        {
            cout<<" is a vowel.";
            count++;

        }
        else
        {
            cout<<" is a consonant.";   

    }

}
cout<<"Total vowels is "<<count;

}