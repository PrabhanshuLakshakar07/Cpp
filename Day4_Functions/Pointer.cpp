#include <iostream>

using namespace std;

int main()
{
	
int a=10;//data
int *p;//poinetr
int **pp;//pointer to pointer or double pointer
p=&a;
pp=&p;
cout<<"\na="<<a<<" at address:"<<&a;
cout<<"\np="<<p<<" at address:"<<&p<<" which has data:"<<*p;
cout<<"\npp="<<pp<<" at address:"<<&pp<<" which has data:"<<**pp;
a=a*10;
cout<<"\na="<<a<<" at address:"<<&a;
cout<<"\np="<<p<<" at address:"<<&p<<" which has data:"<<*p;
cout<<"\npp="<<pp<<" at address:"<<&pp<<" which has data:"<<**pp;
    return 0;
}  