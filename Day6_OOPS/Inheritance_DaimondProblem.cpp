#include <iostream>
using namespace std;
//The Diamond Problem is if we have a single grandparent(A)
// and two subclasses of grandparent(B,C) 
//and we create an object for the child class(D). 
//This will activate grandparent(A) twice. 
//This problem of double activation is called the 
//Famous Diamond Problem. 

/// @brief solution is using virtual keyword  in heritance..--> is me ab 
//////////////solve by virtual keyword //
class A
{
public:
	A()
	{
		cout<<"\nA:Called";
	}
};
class B:public virtual A
{
public:
	B()
	{
		cout<<"\nB:Called";
	}
};
class C:public virtual A
{
public:
	C()
	{
		cout<<"\nC:Called";
	}
};
class D:public B,public C
{
public:
	D()
	{
		cout<<"\nD:Called";
	}
};
int main()
{

D obj_d;

}

//////////////////////daimond problem////////
/*

#include <iostream>
using namespace std;
//The Diamond Problem is if we have a single grandparent(A)
// and two subclasses of grandparent(B,C) 
//and we create an object for the child class(D). 
//This will activate grandparent(A) twice. 
//This problem of double activation is called the 
//Famous Diamond Problem. 
class A
{
public:
	A()
	{
		cout<<"\nA:Called";
	}
};
class B:public A
{
public:
	B()
	{
		cout<<"\nB:Called";
	}
};
class C:public A
{
public:
	C()
	{
		cout<<"\nC:Called";
	}
};
class D:public B,public C
{
public:
	D()
	{
		cout<<"\nD:Called";
	}
};
int main()
{

D obj_d;

}


*/