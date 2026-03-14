#include <iostream>
#include <cmath>
using namespace std;
class Human
{
 private:
	string name,gender;
	int acn;
 public:
 	static int ACN_GENERATOR;
 	Human(string name,string gender)
 	{
 		this->gender=gender;
 		this->name=name;
 		Human::ACN_GENERATOR++;
 		acn=Human::ACN_GENERATOR;
 		cout<<"\nCongrats "<<name<<" your adhar card number:"<<acn;
	 }
	void intro()
		{
			cout<<"hi i am "<<name;//<<" a "<<gender;
		}
		
};
//Data member needs to be declared in global area also with initialization or without. 
int Human::ACN_GENERATOR=202600;

int main()
{
	Human h("ammy","female");
	Human h2("wonder","female");
	Human h3("amar","male");

	
    return 0;
}

