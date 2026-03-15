//Inheritance
/*
Inheritance is the ability of a new entity to take properties and behavior from pre-existing (book)

Inheritance is an ability of one class to take data and function members from another class. (interview)

Inheritance is the ability of an entity to take property from pre-existing entities, for example, child and parent. (interview+you)

What all can you inherit? 
	You can only inherit public and protected data. 
	Private cannot be inherited. 
	So if you want data to be secure, like private, but you would need it to    
      be inherited, declare it protected. 

There are modes of inheritance in C++. 
You can inherit in public mode, which is by default needed. 
	Public remains public; protected remains protected. 

You can inherit in private mode. 
	Everything inherited becomes private to the class. 
	(This is generally used as the last level of inheritance, beyond which inheritance is stopped. )

You can inherit in protected mode. 
	Everything inherited becomes protected to the class. 
class <derived_class>: <mode> <super_Class_name>
{
}
*/


#include <iostream>
using namespace std;
class Human
{
	protected:
	string gender,name;
};
class Student:public Human//Student inherited Human in public mode
{
  protected:
	string degree;
  public:
	void set_details(string name,string gender,string degree)
		{
			this->name=name;
			this->gender=gender;
			this->degree=degree;
		}
	void display()
	{
		cout<<"\nName:"<<name<<"\nDegree:"<<degree;
	}
};
int main()
{
    Student s;
    s.set_details("amar","male","PhD");
    s.display();

    return 0;
}
