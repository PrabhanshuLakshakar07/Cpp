#include <iostream>
using namespace std;
//When multiple parents have different methods, all methods are inherited in one derived class;
// that is multiple inheritance. 
class Father
{
public:
	void life()
	{
		cout<<"\nFather:practical Life";
	}
	void eat()
	{
		cout<<"\nEat Non-veg";
	}
};
class Mother
{
public:
	void love()
	{
		cout<<"\nMother:It teaches how to love.";
	}
		void eat()
	{
		cout<<"\nEat Pure-Veg";
	}
};

class Child:public Father, public Mother
{
	public:
		void eat()
		{
			Mother::eat();//Resolve ambiguity by deciding whose method to take. 
			Father::eat();//Resolve ambiguity by deciding whose method to take. 
		}
		//In order to resolve an ambiguous method, create your own method and decide whose method you will inherit. 
};


int main()
{
    Child obj;
    obj.life();
    obj.love();
	obj.eat();
	//This method is ambiguous because both of the superclasses have an exact method. 
	//It is unclear whose method I should take. 
    return 0;
}

