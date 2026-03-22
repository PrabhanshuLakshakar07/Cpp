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
      //take intput untill user give first blank
      //string input;
      string input ;
        cout<<"\nEnter data to save in file (press enter to stop): ";
        while(getline(cin, input) && !input.empty()) {
           fw << input << endl; // Save each line to the file
        
		   cout<<"\nAll good file saved";
        }
        
		
	
	}
  	
   
   return 0;
}
