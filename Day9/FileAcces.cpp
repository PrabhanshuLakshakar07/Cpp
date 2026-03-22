#include<string>
#include<fstream>
#include <iostream>
using namespace std;
int main() 
{
   
  ifstream fr;
  string word;
  fr.open("mornig.txt");
  if(!fr.is_open())
  	{
	  cerr<<"\nError in reading file\n";
	  return 1;
	}
	else
	{
		cout<<"\nAll good file found";
		while(fr>>word)
		{
			cout<<"\n"<<word;
		}
		fr.close();
	}
  	
   
   return 0;
}
