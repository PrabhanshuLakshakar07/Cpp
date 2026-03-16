#include <iostream>
#include <map>


using namespace std;


int main()
{
  	map <int,string> student;
   //Student has a unique key roll number type integer and may be repeated data type string for name of student. 
   
   student[20261]="abcd";
   student[20262]="xyz";
   student.insert({202603,"nnnn"});
   
  /* for(auto &[rollno,name]:student)
   {
   	cout<<"\nroll number:"<<rollno<<"\tName:"<<name;
   }
   */
   for(auto i:student)
   {
   	cout<<"\nroll number:"<<i.first<<"\tName:"<<i.second;
   	                //.first is key   and      .second is value
   }
   return 0;
}
