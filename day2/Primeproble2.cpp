#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int no,i;

   	bool flag=true;
	//flag:is just a variable which acts as a signal, yes or no. 
	//flag=false(no) flag(true) yes
	for(no=1;no<=100;no++)
	{
		flag=true;//reset flag
	  	for(i=2;i<no;i++)
  		{
  	   		if(no%i==0)	
  	   			flag=false;
		}
		if(flag==true)
			cout<<"\n"<<no<<" is prime";
    }
	return 0;
}
