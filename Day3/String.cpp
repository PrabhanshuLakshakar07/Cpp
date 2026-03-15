#include<iostream>
#include<string>
using namespace std;
int main()
{
	string word,line;
	cout<<"Enter a  word:";
	cin>>word;//cin can only store a word not a collection of words. 
	cin.ignore();
	cout<<"Enter a line:";
	getline(cin,line);
	cout<<"Your entered line is:"<<line;
	
	return 0;
}
