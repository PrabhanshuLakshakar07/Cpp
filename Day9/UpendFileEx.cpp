#include<string>
#include<fstream>
#include <iostream>
//For writing to a file we create a file object 
//and use it similar to cout for saving everything. 

//Keep on reading data from the user till the user gives the first blank. 
//Every data given by the user will be saved on a new line in a file. 
using namespace std;
int main() 
{
   
  ofstream fw;
  string line;
  fw.open("mornig.txt",ios::app);
  if(!fw.is_open())
  	{
	  cerr<<"\nError in reading file\n";
	  return 1;
	}
	else
	{
		while(true)
		{
			cout<<">>>>";
			getline(cin,line);
			if(line.empty())
				break;
			fw<<line<<endl;
		}
		cout<<"\nAll good file saved";
	}
  	
   
   return 0;
}
