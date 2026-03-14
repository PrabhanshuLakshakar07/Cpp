/*friend function:
A friend function is not a member of a class but has all rights of a member function. That means it can access private data of the class. 

Declared outside the class but defined as a friend of the class. 

friend must be in public only */

#include <iostream>
using namespace std;

class Data
{
  private:
	int my_secrate;
  public:
	void set_secrate(int x)
		{ my_secrate=x;
		  cout<<"\nsecrate set:kissiko mat bolna";
		}
	friend void print_secrate(Data obj);
};

void print_secrate(Data obj)//Will always accept an object and then access private data of that object. 
{
   cout<<"\nfrom friend: Secrate is:"<<obj.my_secrate;
}
int main()
{
    Data o;
    o.set_secrate(123);
    print_secrate(o);
    //Friend function is called directly without any object because it is friend, not part of anything. 

    return 0;
}
