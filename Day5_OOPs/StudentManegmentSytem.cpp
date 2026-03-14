
#include <iostream>
#include <cmath>
using namespace std;
class Student
{
 private:
	string name,gender;
    int age;    
	int acn;
 public:
 	static int ACN_GENERATOR;
 	void register_Student(string name,string gender,int age)
 	{
 		this->gender=gender;
 		this->name=name;
 		this->age=age;
 		Student::ACN_GENERATOR++;
 		acn=Student::ACN_GENERATOR;
 		   cout<<"\nCongrats "<<name<<" your registration number is:"<<acn; 
	 }
	void intro()
		{
            cout<<"\nhi i am "<<name<<" a "<<gender<<" and my age is "<<age<<" and my registration number is "<<acn;    

		}
        void search(){
            




        }
		
};
//Data member needs to be declared in global area also with initialization or without. 
int Student::ACN_GENERATOR=20260110;

int main()
{
	Student s[10];
	string name,gender;
	int age;
	for(int i=0;i<=2;i++)
	{
		cout<<"\nEnter name: ";
        cin>>name;
        cout<<"\nEnter gender: ";
        cin>>gender;
        cout<<"\nEnter age: ";
        cin>>age;

		s[i].register_Student(name,gender,age);
	}
	for(int i=0;i<=2;i++)
	{
		s[i].intro();
        s[i].register_Student(name,gender,age);
	}
        
	
    return 0;
}

