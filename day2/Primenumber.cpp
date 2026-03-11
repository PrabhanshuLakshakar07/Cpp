#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int no,i;
   	cout<<"\nEnter a number:";
   	cin>>no;
   	bool flag=true;
	//flag:is just a variable which acts as a signal, yes or no. 
	//flag=false(no) flag(true) yes

  	for(i=2;i<no;i++)
  	{
  	   if(no%i==0)	
  	   	flag=false;
	}
	if(flag==true)
		cout<<"\n"<<no<<" is prime";
	else
		cout<<"\n"<<no<<" is not prime";
	return 0;
}
