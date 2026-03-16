
/*
//pointer to base can ref to child but calls own methods:static binding
#include <iostream>
using namespace std;
//A pointer of a parent class can refer to an object of a child class. 
//Pointer of a parent can refer to the object of the derived but can only access methods of its local class. 
class A
{
protected:
 int data_a;

public:
    // Parameterized constructor
    void set_data(int data_a)
    {
    	this->data_a=data_a;
    	cout<<"\n set_data of A called";
	}
	void print_data()
    {
    cout<<"\nA---->Data:"<<data_a;
	}	
};
class B:public A
{
protected:
 int data_b;

public:
    // Parameterized constructor
    void set_data(int data_b) 
	    {
    	this->data_b=data_b;
    	cout<<"\nset_data of B called";
	}
	void print_data() 
    {
    cout<<"\nB----->Data:"<<data_b;
	}	
};
int main()
{
	A obj_a;
	B obj_b;
	A *p;
	obj_a.set_data(100);
	p=&obj_a;//Assign the address of object A to pointer P. 
	//obj_a.print_data();
	p->print_data();
	p=&obj_b;
	p->set_data(1000);
	//We'll still call method of A instead of B. The phenomenon is called static binding. 
	p->print_data();
	//We'll still call method of A instead of B. The phenomenon is called static binding. 
	
    return 0;
}*/
//solution to static binding
#include <iostream>
using namespace std;
//Pointer of a base class will always refer to a method of a base class. Although it can refer to objects of a child class, methods will not be called. 
//This concept is called static binding. That means a pointer of the parent class can refer only to a method of the parent class itself even if the child class overrides the method. 
//This concept is called static binding. That means a pointer of parent class can refer only to methods of parent class itself, even if child class overwrites the method. We are referring, we need to use virtual. 
class A
{
protected:
 int data_a;

public:
    // Parameterized constructor
    virtual void set_data(int data_a)
    {
    	this->data_a=data_a;
    	cout<<"\n set_data of A called";
	}
	virtual void print_data()
    {
    cout<<"\nA---->Data:"<<data_a;
	}	
};
class B:public A
{
protected:
 int data_b;

public:
    // Parameterized constructor
    void set_data(int data_b) 
	    {
    	this->data_b=data_b;
    	cout<<"\nset_data of B called";
	}
	void print_data() 
    {
    cout<<"\nB----->Data:"<<data_b;
	}	
};
int main()
{
	A obj_a;
	B obj_b;
	A *p;
	obj_a.set_data(100);
	p=&obj_a;//Assign the address of object A to pointer P. 
	//obj_a.print_data();
	p->print_data();
	p=&obj_b;
	p->set_data(1000);
	//We'll still call method of A instead of B. The phenomenon is called static binding. 
	p->print_data();
	//We'll still call method of A instead of B. The phenomenon is called static binding. 
	
    return 0;
}
