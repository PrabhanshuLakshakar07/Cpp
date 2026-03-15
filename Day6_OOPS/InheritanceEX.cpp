#include <iostream>
using namespace std;
class Human
{
	protected:
	string gender,name;
};
class Student:public Human
{
  protected:
	string degree;
    int salary;
  public:
	void set_details(string name,string gender,string degree,int salary)
		{
			this->name=name;
			this->gender=gender;
			this->degree=degree;
            this->salary=salary;
		}
	void display()
	{
		cout<<"\nName:"<<name<<"\nGender"<<gender<<degree<<"\nSalary:"<<salary;

	}
};
int main()
{
    Student s;
    s.set_details(" amar","male","PhD",100000); 
    s.display();

    return 0;
}

