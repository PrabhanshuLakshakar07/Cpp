#include <iostream>
#include <iomanip>
using namespace std;
//Operation: we would require three or either of three includes. 
//input:ifstream
//output:ofstream
//both:fstream

/*We first need to:
1. Include right stream
	#include<fstream>
2. Open file in write/read mode
	2.1 create file object
		ifstream fr;//object created of file class
	2.2 open using object of file
		fr.open("name.extention");//open for reading
3. Check if the file is open properly:Error Handling
	if(fr.is_open()==false)----if(!fr.is_open())
		cerr<<"Error in reading of file\n";
		return 1;//to stop code
	is_open():If file is open, false; if file is not open. 
4. Perform input or output read or write
5. Close the file to make changes permanent
   most important as then only one can see changes
   syntax:file_object.close(); example: fr.close()
*/
#include<fstream>
#include <iostream>
using namespace std;
int main() 
{
   
  fstream fr;
  fr.open("test.txt");
  if(!fr.is_open())
  	{
	  cerr<<"\nError in reading file\n";
	  return 1;
	}
	else
	{
		cout<<"\nAll good file found";
	}
  	
   
   return 0;
}

