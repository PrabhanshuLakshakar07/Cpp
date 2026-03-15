#include <iostream>
#include<string>
using namespace std;
//Passing string is by value. 
string combine(string first_name,string father_name,string surname)
{
string initials="";
    initials=initials+first_name[0]+father_name[0]+surname[0];  
	
	return (initials);
}



int main()
{
    string name,father,surname;
    cout<<"Enter your name, father's name, and surname. \n";
    cin>>name>>father>>surname;
    cout<<"Your initials are:"<<combine(name,father,surname);
 
    return 0;
}
