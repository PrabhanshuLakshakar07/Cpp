//pointer to class
#include <iostream>
using namespace std;
//A pointer can point to a data member using the arrow operator. 
//Pointer must be of type class itself. 
//Pointer uses the '->' for accessing anything which can be accessed using the dot operator. 
class A
{
protected:
 int data_a;

public:
    // Parameterized constructor
    set_data(int data_a)
    {
    	this->data_a=data_a;
	}
	print_data()
    {
    cout<<"Data:"<<data_a;
	}	
};

int main()
{
	A obj_a;
	A *p;
	obj_a.set_data(100);
	p=&obj_a;//Assign the address of object A to pointer P. 
	//obj_a.print_data();
	p->print_data();
    return 0;
}
