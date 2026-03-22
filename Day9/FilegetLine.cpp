#include<string>
#include<fstream>
#include <iostream>
using namespace std;
int main() 
{
   
  ifstream fr;
  string line;
  int line_number=1;
  fr.open("mornig.txt");
  if(!fr.is_open())
  	{
	  cerr<<"\nError in reading file\n";
	  return 1;
	}
	else
	{
		cout<<"\nAll good file found";
		while(getline(fr,line))
		//In either case, reading a word or line, it returns false when the end of file is reached. 
		{
			cout<<"\nLine "<<line_number++<<": "<<line;
		}
		fr.close();
	}
  	
   
   return 0;
}

