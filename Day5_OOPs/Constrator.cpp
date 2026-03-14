#include <iostream>
#include <cmath>
using namespace std;
class Human
{
 private:
	string name,gender;
 public:
	Human(string name,string gender)
 	{
 		this->gender=gender;
 		this->name=name;
 		cout<<"\nParameterized :human "<<gender<<" created with name "<<name;
	 }
	void intro()
		{
			cout<<"\nhi i am "<<name;//<<" a "<<gender;
		}
	~Human()
	{
		cout<<"\nR.I.P "<<name;
	}
};


int main()
{
	Human h1("shaktiman","male");
	Human h2("wonder woman","female");
	Human h3("karan johar","unknown");
	h1.intro();
	h2.intro();
	h3.intro();
	
    return 0;
}
