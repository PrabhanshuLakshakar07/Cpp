#include<iostream>
using namespace std;
int main()
{
	int i,j,space,s;
    for(space=5,i=1;space>=1 && i<=5;space--,i++)
	{
               //space printing for each line
	 for(s=1;s<=space;s++)
		cout<<" ";
	 //print X
	 for(j=1;j<=i;j++)
		cout<<"X ";
	 cout<<"\n";
   }
   for(space=2,i=4;space<=5 && i>=1;space++,i--)
	{
               //space printing for each line
	 for(s=1;s<=space;s++)
		cout<<" ";
	 //print X
	 for(j=1;j<=i;j++)
		cout<<"X ";
	 cout<<"\n";
   }
	
	return 0;
}
