#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word,line;
	cout<<"Enter a  word:";
	cin>>word;//cin can only store a word not a collection of words. 
	//.length() return number of characters
	//.at(index)=[index] for ith eleemnt access
	for(int i=0;i<word.length();i++)
	{
		cout<<"\nat "<<i<<" we have :"<<word.at(i);
	}
	
	return 0;
}
