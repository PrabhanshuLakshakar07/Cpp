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
  string line="this is it";
  int number=1234;
  float pi=3.14;
  fw.open("mornig.txt");
  
  if(!fw.is_open())
  	{
	  cerr<<"\nError in reading file\n";
	  return 1;
	}
	else
	{
		
		fw<<"Line "<<line<<endl;
		fw<<"number is:"<<number<<"\n";
		fw<<"pi is:"<<pi<<endl;
		cout<<"\nAll good file saved";
	}
  	
   
   return 0;
}
