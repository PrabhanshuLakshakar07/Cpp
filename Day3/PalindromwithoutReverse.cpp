#include<iostream>
#include<string>
using namespace std;
int main()
{
    //vowels in a string
    string word ;
    cout <<"Enter the word";
    cin >>word;
   int flag=0;
    for(int i =0;i<word.length()-1;i++)
    {
        cout<<"\nat "<<i<<" we have :"<<word.at(i);
        if(word.at(i)!=word.at(word.length()-1-i))
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"\nIt is a palindrome.";
    }
    else
    {
        cout<<"\nIt is not a palindrome.";
        

       


        

}


}