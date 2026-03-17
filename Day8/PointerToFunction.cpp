#include <iostream>
using namespace std;
/*
pointer to function:
A pointer can specifically point to a function and call it directly. 

A Same pointer can be utilized for calling multiple functions matching the signature of the pointer type. 

*/
int add(int x,int y)
{
	return(x+y);
}
float add_f(float x,float y)//One wants to call this and needs to have a separate pointer referring to float. 
{
	return(x+y);
}
int sub(int x,int y)
{
	return(x-y);
}


int main() 
{
    //<return type> (*name_pointer)(parameter match);
	int (*fp)(int,int);
    
	fp=add;
	cout<<"\ncalling add:"<<fp(10,20);//30
	fp=sub;
	cout<<"\ncalling sub:"<<fp(10,20);//-10
    return 0;
}

