#include<string>
#include<fstream>
#include <iostream>
//In low-level file copy we would be reading and writing in a binary mode. 
//Binary mode first, both the files should be open for reading and writing. 
//ios::binary
//One file will be open in read mode; the other file will be open in write mode. 
//For a byte mode we will use character-by-character copy. 
//char c
//Read a character from a file. <object>.get(c)
//To write a character to a file <object>.put(c)
//Keep reading the file till you get(c) gives false. 
using namespace std;
int main() 
{
  ifstream f_read;
  ofstream f_write;
  
  char c;
  //Open file reading in binary. 
  f_read.open("image.png",ios::binary);
  //Open file writing in binary. 
  f_write.open("image_copy.png",ios::binary);
  //If both files have opened successfully 
  if(!f_read.is_open() || !f_write.is_open() )
  	{
	  cerr<<"\nError in file operation due to some technical reason \n";
	  return 1;
	}
	else
	{
		while(f_read.get(c))
		{
			f_write.put(c);
		}
		cout<<"\nFile copied successfully. ";
		f_read.close();
		f_write.close();
	}
  	
   
   return 0;
}
